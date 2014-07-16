//---------------------------------------------------------------------------*
//                                                                           *
//  Implementation of specific methods for SARA                              *
//                                                                           *
//  Copyright (C) 2004, ..., 2010 Eva Rakotomalala & Pierre Molinaro.        *
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
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "collections/TC_Array.h"
#include "utilities/MF_MemoryControl.h"
#include "time/C_Timer.h"
#include "cDisplayBDD.h"
#include "printBDD.h"
#include "sara_cli_options.h"

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_VariableExpression::
computeBDD (C_Compiler * /* inCompiler */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint32_t /* inVariablesCount */,
            const uint32_t inBDDslotOffset) const {
  return C_BDD ( (mAttribute_mInputVarIndex.uintValue () + inBDDslotOffset), true) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_trueExpression::
computeBDD (C_Compiler * /* inCompiler */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint32_t /* inVariablesCount */,
            const uint32_t /* inBDDslotOffset */) const {
  return ~ C_BDD () ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_falseExpression::
computeBDD (C_Compiler * /* inCompiler */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint32_t /* inVariablesCount */,
            const uint32_t /* inBDDslotOffset */) const {
  return C_BDD () ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_notExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return ~ mAttribute_mExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_andExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return mAttribute_mLeftExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
      & mAttribute_mRightExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_orExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return mAttribute_mLeftExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
      | mAttribute_mRightExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_xorExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return mAttribute_mLeftExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
     .notEqualTo (mAttribute_mRightExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_impliesExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return mAttribute_mLeftExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
    .implies (mAttribute_mRightExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_equalExpression::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t inVariablesCount,
            const uint32_t inBDDslotOffset) const {
  return mAttribute_mLeftExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
     .equalTo (mAttribute_mRightExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inBDDslotOffset)) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_5F_importBoolMachine::
computeBDD (C_Compiler * inCompiler,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint32_t /* inVariablesCount */,
            const uint32_t /* inBDDslotOffset */) const {
//--- Get index of imported machine
  const int32_t indexOfImportedMachine = (int32_t) mAttribute_mIndexOfImportedMachine.uintValue () ;
//--- Check that imported machine is actually boolean
  const C_BDD initialStatesOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mInitialStatesBDD ;
  const C_BDD terminalStatesOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTerminalStatesBDD ;
  const C_BDD transitionsOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTransitionRelationBDD ;
  if (initialStatesOfImportedMachine != (terminalStatesOfImportedMachine)) {
    C_String errorMessage ("this machine is not combinatory (initial states != terminal states), so it cannot be imported in boolean expression") ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
  const uint32_t importedMachineVariableCount =  mAttribute_mTranslationVector.count () ;
  const C_BDD boolAccessibilityRelationBDD = initialStatesOfImportedMachine & initialStatesOfImportedMachine.translate (importedMachineVariableCount, importedMachineVariableCount) ;
  if (boolAccessibilityRelationBDD != (transitionsOfImportedMachine)) {
    C_String errorMessage ("this machine is not combinatory (transitions != initial states x initial states), so it cannot be imported in boolean expression") ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Construct substitution arraies
  uint32_t * statesSubstitutionArray = NULL ;
  macroMyNewPODArray (statesSubstitutionArray, uint32_t, importedMachineVariableCount) ;
  cEnumerator_L_5F_translationVector e (mAttribute_mTranslationVector, kEnumeration_up) ;
  int32_t index = 0 ;
  while (e.hasCurrentObject ()) {
    statesSubstitutionArray [index] =  e.current_mTargetSlot (HERE).uintValue () ;
    e.gotoNextObject () ;
    index ++ ;
  }
//--- Translate initial state BDD
  const C_BDD initialStatesBDD = initialStatesOfImportedMachine.substitution (statesSubstitutionArray, importedMachineVariableCount COMMA_HERE) ;
//---
  macroMyDeletePODArray (statesSubstitutionArray) ;
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
routine_performComputations (const GALGAS_L_5F_jobList inComponentMap,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  if (totalErrorCount () == 0) {
    TC_Array <C_saraMachine> saraSystemArray (0 COMMA_HERE) ;
  //--- Options
    const bool displayBDDvaluesCount = gOption_sara_5F_cli_5F_options_displayBDDvaluesCount.mValue ;
    const bool displayBDDvalues = gOption_sara_5F_cli_5F_options_displayBDDvalues.mValue ;
  //--- Loop for each component
    cEnumerator_L_5F_jobList currentComponent (inComponentMap, kEnumeration_up) ;
    while (currentComponent.hasCurrentObject ()) {
      C_saraMachine system ;
      currentComponent.current_mComponent (HERE).ptr ()->compute (inCompiler, 
                                                saraSystemArray,
                                                displayBDDvaluesCount,
                                                displayBDDvalues) ;
      fflush (stdout) ;
      currentComponent.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineComponent::
compute (C_Compiler * inCompiler,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mAttribute_mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mAttribute_mMachineName.mAttribute_string.stringValue () ;
//--- Build input variables array names
  const uint32_t inputVariablesCount = mAttribute_mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint32_t variablesCount = mAttribute_mVariablesMap.count () ;
  const uint32_t inputAndInternalVariablesCount = mAttribute_mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray ((int32_t) variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  cEnumerator_stringlist currentVar (mAttribute_mNameList, kEnumeration_up) ;
  int32_t index = 0 ;
  while (currentVar.hasCurrentObject ()) {
    machine.mNamesArray (index COMMA_HERE) = currentVar.current_mValue (HERE).stringValue () ;
    index ++ ;
    currentVar.gotoNextObject () ;
  }
//--- Compute automaton from definition expression
  mAttribute_mDefinition.ptr ()->computeFromExpression (inCompiler,
                                         ioSaraSystemArray,
                                         variablesCount,
                                         machine.mInitialStatesBDD,
                                         machine.mTerminalStatesBDD,
                                         machine.mTransitionRelationBDD) ;
//--- Compute accessible states
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, variablesCount + variablesCount) ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = variablesCount + i ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray, variablesCount + variablesCount COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (machine.mAccessibleStatesBDD != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray ((int32_t) (variablesCount + variablesCount), "" COMMA_HERE) ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray ((int32_t) i COMMA_HERE) = machine.mNamesArray ((int32_t) i COMMA_HERE) ;
    transitionsVariableNameArray ((int32_t)  (variablesCount + i) COMMA_HERE) = machine.mNamesArray ((int32_t) i COMMA_HERE) ;
  }
//--- Print messages
  const int32_t outputVariablesCount = (int32_t) (variablesCount - inputAndInternalVariablesCount) ;
  const int32_t internalVariablesCount = (int32_t)  (inputAndInternalVariablesCount - inputVariablesCount) ;
  co << "  " << cStringWithSigned (inputVariablesCount)
     << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount)
     << " internal variable"
     << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount)
     << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n" ;
  uint64_t n = machine.mInitialStatesBDD.valueCount64 (variablesCount) ;
  uint32_t nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mInitialStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mTerminalStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " reachable state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mAccessibleStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount64 (variablesCount + variablesCount) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mTransitionRelationBDD, transitionsVariableNameArray, 3) ;
  }
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD ( i, false).equalTo (C_BDD ((variablesCount + i), false)) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount64 (variablesCount + variablesCount) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source (" << cStringWithUnsigned (nodes)
     << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    printBDD (transitionsWithSourceEqualTarget, transitionsVariableNameArray, 3) ;
  }
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount64 (variablesCount + variablesCount) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes)
     << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    printBDD (t, transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineCheckIdentical::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex1 = (int32_t) mAttribute_mMachineIndex_31_.uintValue () ;
  const int32_t machineIndex2 = (int32_t) mAttribute_mMachineIndex_32_.uintValue () ;
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
  const int32_t internalAndOutputVariableCount1 = (int32_t) machine1.mNamesArray.count () - (int32_t) machine1.mInputVariablesCount ;
  const int32_t internalAndOutputVariableCount2 = (int32_t) machine2.mNamesArray.count () - (int32_t) machine2.mInputVariablesCount ;
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
    if (machine2.mInitialStatesBDD == (machine1.mInitialStatesBDD)) {
      co << "  Same initial states;\n" ;
    }else{
      identical = false ;
      co << "  Error: initial states are different;\n" ;
    }
  }
//--- Check terminal states are identical
  if (ok) {
    if (machine2.mTerminalStatesBDD == (machine1.mTerminalStatesBDD)) {
      co << "  Same terminal states;\n" ;
    }else{
      identical = false ;
      co << "  Error: terminal states are different;\n" ;
    }
  }
//--- Check transitions are identical
  if (ok) {
    if (machine2.mTransitionRelationBDD == (machine1.mTransitionRelationBDD)) {
      co << "  Same transitions;\n" ;
    }else{
      identical = false ;
      co << "  Error: transitions are different;\n" ;
    }
  }
//--- Check accessible states are identical
  if (ok) {
    if (machine2.mAccessibleStatesBDD == (machine1.mAccessibleStatesBDD)) {
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

void cPtr_C_5F_machineDisplayStates::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex = (int32_t) mAttribute_mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ States of '" << machine.mMachineName << "' machine\n" ;
  cDisplayBDD machineDisplay ((uint32_t) machine.mNamesArray.count ()) ;
  for (int32_t i=0 ; i<machine.mNamesArray.count () ; i++) {
    machineDisplay.defineVariableName ((uint32_t) i, machine.mNamesArray (i COMMA_HERE), 1) ;
  }
  printBDDWithVariables (machine.mAccessibleStatesBDD, co, (uint32_t) machine.mNamesArray.count (), machineDisplay) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineDisplayInitialStates::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex = (int32_t) mAttribute_mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ First states of '" << machine.mMachineName << "' machine\n" ;
  cDisplayBDD machineDisplay ((uint32_t) machine.mNamesArray.count ()) ;
  for (int32_t i=0 ; i<machine.mNamesArray.count () ; i++) {
    machineDisplay.defineVariableName ((uint32_t) i, machine.mNamesArray (i COMMA_HERE), 1) ;
  }
  printBDDWithVariables (machine.mInitialStatesBDD, co, (uint32_t) machine.mNamesArray.count (), machineDisplay) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineDisplayTerminalStates::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex = (int32_t) mAttribute_mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ Last states of '" << machine.mMachineName << "' machine\n" ;
  cDisplayBDD machineDisplay ((uint32_t) machine.mNamesArray.count ()) ;
  for (int32_t i=0 ; i<machine.mNamesArray.count () ; i++) {
    machineDisplay.defineVariableName ((uint32_t) i, machine.mNamesArray (i COMMA_HERE), 1) ;
  }
  printBDDWithVariables (machine.mTerminalStatesBDD, co, (uint32_t) machine.mNamesArray.count (), machineDisplay) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineDisplayTransitions::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex = (int32_t) mAttribute_mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ Transitions of '" << machine.mMachineName << "' machine\n" ;
  const int32_t n = machine.mNamesArray.count () ;
  cDisplayBDD machineDisplay ((uint32_t) (n + n)) ;
  for (int32_t i=0 ; i<n ; i++) {
    machineDisplay.defineVariableName ((uint32_t)i, machine.mNamesArray (i COMMA_HERE), 1) ;
    machineDisplay.defineVariableName ((uint32_t) (i + n), machine.mNamesArray (i COMMA_HERE), 1) ;
  }
  printBDDWithVariables (machine.mTransitionRelationBDD, co, (uint32_t) (n + n), machineDisplay) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineCheck::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const int32_t machineIndex = (int32_t) mAttribute_mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ Checkings for '" << machine.mMachineName << "' machine\n" ;
//--- Checking input configuration is full
  const C_BDD notHandledInputConfigurations = ~ machine.mInitialStatesBDD.existsOnBitsAfterNumber (machine.mInputVariablesCount) ;
  if (notHandledInputConfigurations.isFalse ()) {
    co << "  All input configurations are handled;\n" ;
  }else{
    const uint64_t n = notHandledInputConfigurations.valueCount64 (machine.mInputVariablesCount) ;
    co << "  " << cStringWithUnsigned (n)
       << " missing input configuration" << ((n > 1) ? "s" : "") << ":\n" ;
    printBDD (notHandledInputConfigurations, machine.mNamesArray, (int32_t) machine.mInputVariablesCount, 3) ;
  }
//--- Checking input configuration is not ambiguous
//  Ambiguous set (e, s) := ?s' ((e, s) initial & (e, s') initial et s != s')
  const uint32_t variableCount = (uint32_t) machine.mNamesArray.count () ;
  const uint32_t outputVariablesCount = variableCount - machine.mInputVariablesCount ;
  uint32_t * substitutionVector = NULL ;
  macroMyNewPODArray (substitutionVector, uint32_t, variableCount) ;
  for (uint32_t i=0 ; i<machine.mInputVariablesCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint32_t i=0 ; i<outputVariablesCount ; i++) {
    substitutionVector [i + machine.mInputVariablesCount] = (i + variableCount) ;
  }
  const C_BDD sTranslatedInputConfiguration = machine.mInitialStatesBDD.substitution (substitutionVector, variableCount COMMA_HERE) ;
  macroMyDeletePODArray (substitutionVector) ;
  C_BDD sEqualSprimeConstraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<outputVariablesCount ; i++) {
    sEqualSprimeConstraint &= C_BDD ( (i + machine.mInputVariablesCount), false).equalTo (C_BDD ( (variableCount + i), false)) ;
  }
  const C_BDD ambiguousInput = (machine.mInitialStatesBDD & sTranslatedInputConfiguration & ~ sEqualSprimeConstraint).existsOnBitsAfterNumber (variableCount) ;
  if (ambiguousInput.isFalse ()) {
    co << "  No ambiguous input configuration;\n" ;
  }else{
    const uint64_t n = ambiguousInput.valueCount64 (variableCount) ;
    co << "  " << cStringWithUnsigned (n)
       << " ambiguous input configuration" << ((n > 1) ? "s" : "") << ":\n" ;
    printBDD (ambiguousInput, machine.mNamesArray, 3) ;
  }
//--- Checking transition determinism
// Ambiguous transitions (e, s, e', s') = ? e", s" ((e, s, e', s') transition & (e, s, e", s") transition & (e'=e") et (s'!=s"))
  macroMyNewPODArray (substitutionVector, uint32_t, variableCount + variableCount) ;
  for (uint32_t i=0 ; i<variableCount ; i++) {
    substitutionVector [i] = i ;
    substitutionVector [i+variableCount] =  (i+variableCount+variableCount) ;
  }
  const C_BDD translatedTransitions = machine.mTransitionRelationBDD.substitution (substitutionVector,  (variableCount+variableCount) COMMA_HERE) ;
  macroMyDeletePODArray (substitutionVector) ;
  C_BDD ePrimeEqualsEsecondConstraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<machine.mInputVariablesCount ; i++) {
    ePrimeEqualsEsecondConstraint &= C_BDD ( (i+variableCount), false).equalTo (C_BDD ( (i + variableCount + variableCount), false)) ;
  }
  C_BDD sPrimeEqualsSsecondConstraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<outputVariablesCount ; i++) {
    sPrimeEqualsSsecondConstraint &= C_BDD ( (i+variableCount+machine.mInputVariablesCount), false).equalTo (C_BDD ( (i+variableCount+variableCount+machine.mInputVariablesCount), false)) ;
  }
  const C_BDD ambiguousTransitions = (machine.mTransitionRelationBDD & translatedTransitions & ePrimeEqualsEsecondConstraint & ~ sPrimeEqualsSsecondConstraint).existsOnBitsAfterNumber ( (variableCount + variableCount)) ;
  if (ambiguousTransitions.isFalse ()) {
    co << "  No ambiguous transition;\n" ;
  }else{
    const uint64_t n = ambiguousTransitions.valueCount64 ( (variableCount+variableCount)) ;
    co << "  " << cStringWithUnsigned (n)
       << " ambiguous transition" << ((n > 1) ? "s" : "") << ":\n" ;
    TC_UniqueArray <C_String> transitionsVariableNameArray ((int32_t) (variableCount + variableCount), "" COMMA_HERE) ;
    for (int32_t i=0 ; i<(int32_t)variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray ((int32_t) variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    printBDD (ambiguousTransitions, transitionsVariableNameArray, 3) ;
  }
//--- Check that all states accepts all input configurations
//  incomplete states and inputs (e, s, e') = (e, s) is a state & ! s' (e, s, e', s') is not a transition
  const C_BDD incompleteStatesAndInput = machine.mAccessibleStatesBDD & (~ machine.mTransitionRelationBDD).forallOnBitsAfterNumber ( (variableCount+machine.mInputVariablesCount)) ;
  if (incompleteStatesAndInput.isFalse ()) {
    co << "  No incomplete state;\n" ;
  }else{
    const uint64_t n = incompleteStatesAndInput.valueCount64 ( (variableCount+machine.mInputVariablesCount)) ;
    co << "  " << cStringWithUnsigned (n)
       << " incomplete state" << ((n > 1) ? "s" : "") << ":\n" ;
    TC_UniqueArray <C_String> transitionsVariableNameArray ((int32_t) (variableCount + variableCount), "" COMMA_HERE) ;
    for (int32_t i=0 ; i<(int32_t)variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray ((int32_t) variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    printBDD (incompleteStatesAndInput, transitionsVariableNameArray, (int32_t) (variableCount+machine.mInputVariablesCount), 3) ;
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
    const uint64_t n = notStableStates.valueCount64 (variableCount) ;
    co << "  " << cStringWithUnsigned (n)
       << " instable state" << ((n > 1) ? "s" : "") << ":\n" ;
    printBDD (notStableStates, machine.mNamesArray, (int32_t) variableCount, 3) ;
  }
//--- Check machine is combinatory ? (added by PM on october 13th, 2005)
  if (mAttribute_mCheckMachineIsBoolean.boolValue ()) {
    bool ok = true ;
    if (machine.mInitialStatesBDD != ( machine.mTerminalStatesBDD)) {
      co << "  checkbool error: this machine is not combinatory (initial states != terminal states).\n" ;
      ok = false ;
    }
    const C_BDD boolAccessibilityRelationBDD =  machine.mInitialStatesBDD & machine.mInitialStatesBDD.translate (variableCount, variableCount) ;
    if (boolAccessibilityRelationBDD != (machine.mTransitionRelationBDD)) {
      co << "  checkbool error: this machine is not combinatory (transitions != initial states x initial states).\n" ;
      ok = false ;
    }
    if (ok) {
      co << "  Machine is combinatory.\n" ;
    }
  }
}

//-----------------------------------------------------------------------------*

void cPtr_typeDisplayBDDstats::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  co << "------------------ bdd: print BDD package statitistics.\n" ;
  C_BDD::printBDDpackageOperationsSummary (co) ;
}

//-----------------------------------------------------------------------------*

void cPtr_typeResizeMap::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_Timer duree ;
    C_BDD::setHashMapSize ( mNewSize.uintValue ()) ;
    duree.stopTimer () ;
    co << "------------------ map "
       << cStringWithUnsigned (mNewSize.uintValue ())
       << ": BDD unique table resized to "
       << cStringWithSigned (C_BDD::getHashMapEntriesCount ())
       << " (done in "
       << duree
       << ").\n\n" ; */ 
}

//-----------------------------------------------------------------------------*

void cPtr_typeResize_5F_AND_5F_cache::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_Timer duree ;
    C_BDD::setANDcacheSize ((int32_t) mNewSize.uintValue ()) ;
    duree.stopTimer () ;
    co << "------------------ and_cache "
       << cStringWithUnsigned (mNewSize.uintValue ())
       << ": AND cache resized to "
       << cStringWithSigned (C_BDD::getANDcacheEntriesCount ())
       << " (done in "
       << duree
       << ").\n\n" ; */  
}

//-----------------------------------------------------------------------------*

void cPtr_typeResize_5F_ITE_5F_cache::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_Timer duree ;
    C_BDD::setITEcacheSize ((int32_t) mNewSize.uintValue ()) ;
    duree.stopTimer () ;
    co << "------------------ ite_cache "
       << cStringWithUnsigned (mNewSize.uintValue ())
       << ": ITE cache resized to "
       << cStringWithSigned (C_BDD::getITEcacheEntriesCount ())
       << " (done in "
       << duree
       << ").\n\n" ;  */ 
}

//-----------------------------------------------------------------------------*

void cPtr_typeUse_5F_AND::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_BDD::setComputingMode (C_BDD::ITE_COMPUTED_FROM_AND) ;
      co << "------------------ use_and: ITE is now computed from AND.\n\n" ; */
}

//-----------------------------------------------------------------------------*

void cPtr_typeUse_5F_ITE::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_BDD::setComputingMode (C_BDD::AND_COMPUTED_FROM_ITE) ;
    co << "------------------ use_ite: AND is now computed from ITE.\n\n" ; */
}

//-----------------------------------------------------------------------------*

void cPtr_typeUse_5F_AND_5F_ITE::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  /* C_BDD::setComputingMode (C_BDD::ITE_and_AND_ARE_INDEPENDANT) ;
    co << "------------------ use_and_ite: AND and ITE are now computed independantly.\n\n" ; */
}

//-----------------------------------------------------------------------------*

void cPtr_C_5F_scenarioComponent::
compute (C_Compiler * /* inCompiler */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
 co << "------------------ Scenarios for '"
    << ioSaraSystemArray ( (int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mMachineName
    << "' machine\n" ;
//--- Initial state BDD
  const C_BDD initialStateBDD = ioSaraSystemArray ((int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mInitialStatesBDD ;
//--- transitions BDD
  const C_BDD transitionsBDD = ioSaraSystemArray ((int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mTransitionRelationBDD ;
//--- variables count
  const uint32_t variableCount = (uint32_t) ioSaraSystemArray ((int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mNamesArray.count () ;
//--- Loop throuhgt all scenarios
  cEnumerator_L_5F_scenarioList scenario (mAttribute_mScenarioList, kEnumeration_up) ;
  while (scenario.hasCurrentObject ()) {
  //--- Print scenario title
    co << "Scenario '" << scenario.current_mScenarioTitle (HERE) << "':\n" ;
  //--- Build initial configuration
    cEnumerator_L_5F_inputScenario currentInput (scenario.current_mInputScenario (HERE), kEnumeration_up) ;
    uint64_t initialConfiguration = 0 ;
    uint32_t shift = 0 ;
    cEnumerator_L_5F_inputConfigurationForScenario v (currentInput.current_mInputConfiguration (HERE), kEnumeration_up) ;
    while (v.hasCurrentObject ()) {
      initialConfiguration += ((uint64_t) v.current_mInputValue (HERE).mAttribute_uint.uintValue ()) << shift ;
      shift ++ ;
      v.gotoNextObject () ;
    }
    const C_BDD initialInputConfigurationBDD = C_BDD::varCompareConst (0, shift, C_BDD::kEqual, initialConfiguration) ;
    C_BDD currentState = initialInputConfigurationBDD & initialStateBDD ;
  //--- Build substitution vector
    uint32_t * substitutionVector = NULL ;
    macroMyNewPODArray (substitutionVector, uint32_t, variableCount + variableCount) ;
    for (uint32_t i=0 ; i<variableCount ; i++) {
      substitutionVector [i] =  (i + variableCount) ;
      substitutionVector [i + variableCount] = i ;
    }
  //--- Display initial configuration
    printBDD (currentState, ioSaraSystemArray ((int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mNamesArray, 3) ;
    uint64_t valuesCount = currentState.valueCount64 (shift) ;
  //--- Loop throught input sequence
    currentInput.gotoNextObject () ;
    while ((currentInput.hasCurrentObject ()) && (valuesCount == 1)) {
    //--- Parse new input configuration
      uint64_t inputConfiguration = 0 ;
      shift = 0 ;
      cEnumerator_L_5F_inputConfigurationForScenario v (currentInput.current_mInputConfiguration (HERE), kEnumeration_up) ;
      while (v.hasCurrentObject ()) {
        inputConfiguration += ((uint64_t) v.current_mInputValue (HERE).mAttribute_uint.uintValue ()) << shift ;
        shift ++ ;
        v.gotoNextObject () ;
      }
      const C_BDD inputConfigurationBDD = C_BDD::varCompareConst (variableCount, shift, C_BDD::kEqual, inputConfiguration) ;
      const C_BDD newState = currentState & transitionsBDD & inputConfigurationBDD ;
      currentState = newState.substitution (substitutionVector,  (variableCount + variableCount) COMMA_HERE) ;
      currentState = currentState.existsOnBitsAfterNumber (variableCount) ;
    //--- Display current configuration
      printBDDWithoutHeader (currentState, ioSaraSystemArray ((int32_t) mAttribute_mMachineIndex.uintValue () COMMA_HERE).mNamesArray, (int32_t) variableCount, 3) ;
      valuesCount = currentState.valueCount64 (shift) ;
    //--- Goto next input
      currentInput.gotoNextObject () ;
    }
    macroMyDeletePODArray (substitutionVector) ;
    if (valuesCount == 0) {
      co << "*** ERROR: dead state.\n" ;
    }else if (valuesCount > 1) {
      co << "*** ERROR: ambiguous transition ("
         << cStringWithUnsigned (valuesCount)
         << " states).\n" ;
    }
    scenario.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_explicitAutomatonDefinition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Build state array names
  TC_UniqueArray <C_String> stateNameArray ((int32_t) mAttribute_mStatesMap.count () COMMA_HERE) ;
  cEnumerator_M_5F_stateMap currentState (mAttribute_mStatesMap, kEnumeration_up) ;
  while (currentState.hasCurrentObject ()) {
    stateNameArray.addObject (currentState.current_lkey (HERE).mAttribute_string.stringValue ()) ;
    currentState.gotoNextObject () ;
  }
//----------------------------------------------------------------------- States BDD array
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//---- For each state defined in source file, we compute the BDD built from
//     state input configuration and state output configuration
  TC_UniqueArray <C_BDD> stateExpressionBDD ((int32_t) mAttribute_mStatesMap.count (), C_BDD () COMMA_HERE) ;
  cEnumerator_L_5F_stateDefinition currentDefinition (mAttribute_mStateDefinitionList, kEnumeration_up) ;
  while (currentDefinition.hasCurrentObject ()) {
  //--- Get state index
    const int32_t stateIndex = (int32_t) currentDefinition.current_mStateIndex (HERE).uintValue () ;
  //--- Enter state configuration
    stateExpressionBDD (stateIndex COMMA_HERE) = currentDefinition.current_mStateExpression (HERE).ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, 0) ;
  //--- Check state configuration is not empty
    if (stateExpressionBDD (stateIndex COMMA_HERE).isFalse ()) {
      C_String errorMessage ;
      errorMessage << "input configuration for state '"
                   << stateNameArray (stateIndex COMMA_HERE)
                   << "' is empty" ;
      inCompiler->semanticErrorAtLocation (currentDefinition.current_mEndOfStateExpression (HERE), errorMessage COMMA_HERE) ;
    }
  //--- Go to next state definition  
    currentDefinition.gotoNextObject () ;
  }
//----------------------------------------------------------------------- Check that states are disjoined
  currentDefinition.rewind () ;
  while (currentDefinition.hasCurrentObject ()) {
    cEnumerator_L_5F_stateDefinition testedState (mAttribute_mStateDefinitionList, kEnumeration_up) ;
    testedState.gotoIndex (currentDefinition.index () + 1) ;
    while (testedState.hasCurrentObject ()) {
      if (! (stateExpressionBDD ((int32_t) currentDefinition.current_mStateIndex (HERE).uintValue () COMMA_HERE)
           & stateExpressionBDD ((int32_t) testedState.current_mStateIndex (HERE).uintValue () COMMA_HERE)).isFalse ()) {
        C_String errorMessage ;
        errorMessage << "expression for state '"
                   << stateNameArray ((int32_t) testedState.current_mStateIndex (HERE).uintValue () COMMA_HERE)
                   << "' intersects expression for state '"
                   << stateNameArray ((int32_t) currentDefinition.current_mStateIndex (HERE).uintValue () COMMA_HERE)
                   << "'" ;
        inCompiler->semanticErrorAtLocation (testedState.current_mEndOfStateExpression (HERE), errorMessage COMMA_HERE) ;
      }
      testedState.gotoNextObject () ;
    }
  //--- Go to next state definition  
    currentDefinition.gotoNextObject () ;
  }
//----------------------------------------------------------------------- Initial states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  cEnumerator_L_5F_statesDefinitionList currentInitialState (mAttribute_mInitialStatesDefinitionList, kEnumeration_up) ;
  while (currentInitialState.hasCurrentObject ()) {
    // printf ("INIT : %ld\n", currentInitialState->mStateIndex.uintValue ()) ;
    outInitialStatesBDD |= stateExpressionBDD ((int32_t) currentInitialState.current_mStateIndex (HERE).uintValue () COMMA_HERE) ;
    currentInitialState.gotoNextObject () ;
  }
//--- Check initial states are disjoined
  currentInitialState.rewind () ;
  while (currentInitialState.hasCurrentObject ()) {
    cEnumerator_L_5F_statesDefinitionList testedInitialState (mAttribute_mInitialStatesDefinitionList, kEnumeration_up) ;
    testedInitialState.gotoIndex (currentInitialState.index () + 1) ;
    while (testedInitialState.hasCurrentObject ()) {
      const C_BDD intersection = stateExpressionBDD ((int32_t) currentInitialState.current_mStateIndex (HERE).uintValue () COMMA_HERE)
        & stateExpressionBDD ((int32_t) testedInitialState.current_mStateIndex (HERE).uintValue () COMMA_HERE) ;
      if (! intersection.isFalse ()) {
        C_String errorMessage ;
        errorMessage << "initial state '"
                     << stateNameArray ((int32_t) testedInitialState.current_mStateIndex (HERE).uintValue () COMMA_HERE)
                     << "' intersects previous initial state '"
                     << stateNameArray ((int32_t) currentInitialState.current_mStateIndex (HERE).uintValue () COMMA_HERE)
                     << "'" ;
        inCompiler->semanticErrorAtLocation (testedInitialState.current_mStateLocation (HERE), errorMessage COMMA_HERE) ;
      }
      testedInitialState.gotoNextObject () ;
    }
    currentInitialState.gotoNextObject () ;
  }
//----------------------------------------------------------------------- Terminal states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  cEnumerator_L_5F_statesDefinitionList currentTerminalState (mAttribute_mTerminalStatesDefinitionList, kEnumeration_up) ;
  while (currentTerminalState.hasCurrentObject ()) {
    outTerminalStatesBDD |= stateExpressionBDD ((int32_t) currentTerminalState.current_mStateIndex (HERE).uintValue () COMMA_HERE) ;
    currentTerminalState.gotoNextObject () ;
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
  currentDefinition.rewind () ;
  while (currentDefinition.hasCurrentObject ()) {
  //--- Get current state index
    const int32_t currentStateIndex = (int32_t) currentDefinition.current_mStateIndex (HERE).uintValue () ;
  //--- Accumulate transitions targets for each transition
    C_BDD transitionsTargetBDD ;
    cEnumerator_L_5F_transitionDefinition currentTransition (currentDefinition.current_mTransitionsList (HERE), kEnumeration_up) ;
    while (currentTransition.hasCurrentObject ()) {
      const C_BDD actionBDD = currentTransition.current_mActionExpression (HERE).ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inVariablesCount) ;
      const int32_t targetStateIndex = (int32_t) currentTransition.current_mTargetStateIndex (HERE).uintValue () ;
      const C_BDD targetStateBDD = stateExpressionBDD (targetStateIndex COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
      transitionsTargetBDD |= actionBDD & targetStateBDD ;
      currentTransition.gotoNextObject () ;
    }
  //--- Combine with state BDD
    transitionsTargetBDD &= stateExpressionBDD (currentStateIndex COMMA_HERE) ;
  //--- Accumulate into transitions BDD
    outAccessibilityRelationBDD |= transitionsTargetBDD ;
  //--- Go to next state definition
    currentDefinition.gotoNextObject () ;
  }
//--- Check transitions of each state
  currentDefinition.rewind () ;
  while (currentDefinition.hasCurrentObject ()) {
    const int32_t stateIndex = (int32_t) currentDefinition.current_mStateIndex (HERE).uintValue () ;
  //--- Check that action does not intersect with state input expression
    int32_t transitionIndex = 0 ;
    cEnumerator_L_5F_transitionDefinition currentTransition (currentDefinition.current_mTransitionsList (HERE), kEnumeration_up) ;
    while (currentTransition.hasCurrentObject ()) {
    //--- Compute action BDD
      const C_BDD actionBDD = currentTransition.current_mActionExpression (HERE).ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, 0) ;
    //--- Check action does not intersect with state input expression
      if (! (stateExpressionBDD (stateIndex COMMA_HERE) & actionBDD).isFalse ()) {
        C_String errorMessage ;
        errorMessage << "this action intersects with current state input configuration" ;
        inCompiler->semanticErrorAtLocation (currentTransition.current_mEndOfExpression (HERE), errorMessage COMMA_HERE) ;
      }
    //--- Check action does not intersect with other actions
      cEnumerator_L_5F_transitionDefinition testedTransition (currentDefinition.current_mTransitionsList (HERE), kEnumeration_up) ;
      testedTransition.gotoIndex (currentTransition.index () + 1) ;
      while (testedTransition.hasCurrentObject ()) {
      //--- Compute action BDD
        const C_BDD testedActionBDD = testedTransition.current_mActionExpression (HERE).ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, 0) ;
      //--- Check action does not intersect with state input expression
        if (! (testedActionBDD & actionBDD).isFalse ()) {
          C_String errorMessage ;
          errorMessage << "this action intersects with #" << cStringWithSigned (transitionIndex) << " previous action" ;
          inCompiler->semanticErrorAtLocation (testedTransition.current_mEndOfExpression (HERE), errorMessage COMMA_HERE) ;
        }
        testedTransition.gotoNextObject () ;
      }
    //--- Check that action is compatible input configuration of target state
      const C_BDD x = actionBDD & stateExpressionBDD ((int32_t) currentTransition.current_mTargetStateIndex (HERE).uintValue () COMMA_HERE) ;
      if (x.isFalse ()) {
        C_String errorMessage ;
        errorMessage << "this transition is not compatible with configuration of target state" ;
        inCompiler->semanticErrorAtLocation (currentTransition.current_mEndOfExpression (HERE), errorMessage COMMA_HERE) ;
      }
    //--- Goto next transition
      currentTransition.gotoNextObject () ;
      transitionIndex ++ ;
    }
  //--- Goto next state
    currentDefinition.gotoNextObject () ;
  }
//----------------------------------------------------------------------- Compute accessible states
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, inVariablesCount + inVariablesCount) ;
  for (uint32_t i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] =  (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD accessibleStatesBDD ;
  C_BDD newlyAccessibleStates ;
  do{
    accessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= outInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & outAccessibilityRelationBDD).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (accessibleStatesBDD != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;

//--- At least, check that every state is accessible
  for (int32_t i=0 ; i<stateExpressionBDD.count () ; i++) {
    const C_BDD intersection = stateExpressionBDD (i COMMA_HERE) & accessibleStatesBDD ;
    if (intersection.isFalse()) {
      C_String errorMessage ;
      errorMessage << "state '"
                   << stateNameArray (i COMMA_HERE)
                   << "' is not accessible" ;
      inCompiler->semanticErrorAtLocation (mAttribute_mEndOfDefinition, errorMessage COMMA_HERE) ;
    }
  }
//--- Add stable transitions. We add them now because they do not change accessible states computation
  for (int32_t i=0 ; i<stateExpressionBDD.count () ; i++) {
    const C_BDD stateExpression = stateExpressionBDD (i COMMA_HERE) ;
    const C_BDD translatedStateExpression = stateExpression.translate (inVariablesCount, inVariablesCount) ;
    const C_BDD allStateToStateTransitions = stateExpression & translatedStateExpression ;
    outAccessibilityRelationBDD |= allStateToStateTransitions ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_parallelComposition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mAttribute_mLeftOperand.ptr ()->computeFromExpression (inCompiler,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mAttribute_mRightOperand.ptr ()->computeFromExpression (inCompiler,
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

void cPtr_C_5F_orComposition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mAttribute_mLeftOperand.ptr ()->computeFromExpression (inCompiler,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mAttribute_mRightOperand.ptr ()->computeFromExpression (inCompiler,
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
                  const uint32_t inVariablesCount) {
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, inVariablesCount + inVariablesCount) ;
  for (uint32_t i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] =  (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD accessibleStates ;
  C_BDD newlyAccessibleStates ;
  do{
    accessibleStates = newlyAccessibleStates ;
    newlyAccessibleStates |= inInitialState ;
    const C_BDD x = (newlyAccessibleStates & inAccessibilityRelation).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (accessibleStates != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;
  return accessibleStates ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_strongModalComposition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mAttribute_mLeftOperand.ptr ()->computeFromExpression (inCompiler,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mAttribute_mRightOperand.ptr ()->computeFromExpression (inCompiler,
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
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_weakModalComposition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mAttribute_mLeftOperand.ptr ()->computeFromExpression (inCompiler,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mAttribute_mRightOperand.ptr ()->computeFromExpression (inCompiler,
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
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, inVariablesCount + inVariablesCount) ;
  for (uint32_t i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] =  (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    leftAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_BDD x = (newlyAccessibleStates & leftAccessibilityRelationBDD).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (leftAccessiblesStates != (newlyAccessibleStates)) ;
//--- Check that only states in intersection are accessible
  if (intersection != (leftAccessiblesStates)) {
    C_String errorMessage ;
    errorMessage << "left operand does not respect weak modal composition" ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Compute in right operand accessible states from intersection
  C_BDD rightAccessiblesStates ;
  newlyAccessibleStates = C_BDD () ;
  do{
    rightAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_BDD x = (newlyAccessibleStates & rightAccessibilityRelationBDD).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (rightAccessiblesStates != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;
//--- Check that only states in intersection are accessible
  if (intersection != (rightAccessiblesStates)) {
    C_String errorMessage ;
    errorMessage << "right operand does not respect weak modal composition" ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Check initial states are compatible
  const bool initialStatesAreCompatible = (intersection & leftInitialStatesBDD) == (intersection & rightInitialStatesBDD) ;
  if (! initialStatesAreCompatible) {
    C_String errorMessage ;
    errorMessage << "initial states are not compatible with weak modal composition" ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Check terminal states are compatible
  const bool terminalStatesAreCompatible = (intersection & leftTerminalStatesBDD) == (intersection & rightTerminalStatesBDD) ;
  if (! terminalStatesAreCompatible) {
    C_String errorMessage ;
    errorMessage << "terminal states are not compatible with weak modal composition" ;
    inCompiler->semanticErrorAtLocation (mAttribute_mErrorLocation, errorMessage COMMA_HERE) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_boolToSeqExpression::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  outInitialStatesBDD = mAttribute_mExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, 0) ;
  outTerminalStatesBDD = outInitialStatesBDD ;
  outAccessibilityRelationBDD = outInitialStatesBDD & outInitialStatesBDD.translate (inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_existsDefinition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t /* inVariablesCount */,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  const uint32_t previousVariableCount =  mAttribute_mPreviousVariableCount.uintValue () ;
  const uint32_t totalVariableCount =  mAttribute_mTotalVariableCount.uintValue () ;
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
                                      inSaraSystemArray,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
  outTerminalStatesBDD = terminalStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
//--- Compute accessibilty relation (NOT OPTIMIZED)
  outAccessibilityRelationBDD = accessibilityRelationBDD.existsOnBitsAfterNumber ( (totalVariableCount + previousVariableCount)) ;
  for (uint32_t i=previousVariableCount ; i<totalVariableCount ; i++) {
    outAccessibilityRelationBDD = outAccessibilityRelationBDD.existsOnBitNumber (i) ;
  }
  uint32_t * substitutionVector = NULL ;
  macroMyNewPODArray (substitutionVector, uint32_t, totalVariableCount + previousVariableCount) ;
  for (uint32_t i=0 ; i<totalVariableCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint32_t i=totalVariableCount ; i<( (totalVariableCount + previousVariableCount)) ; i++) {
    substitutionVector [i] =  (previousVariableCount + i - totalVariableCount) ;
  }
  outAccessibilityRelationBDD = outAccessibilityRelationBDD.substitution (substitutionVector,  (totalVariableCount + previousVariableCount) COMMA_HERE) ;
  macroMyDeletePODArray (substitutionVector) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_forallDefinition::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t /* inVariablesCount */,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  const uint32_t previousVariableCount =  mAttribute_mPreviousVariableCount.uintValue () ;
  const uint32_t totalVariableCount =  mAttribute_mTotalVariableCount.uintValue () ;
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
                                      inSaraSystemArray,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.forallOnBitsAfterNumber (previousVariableCount) ;
  outTerminalStatesBDD = terminalStatesBDD.forallOnBitsAfterNumber (previousVariableCount) ;
//--- Compute accessibilty relation (NOT OPTIMIZED)
  outAccessibilityRelationBDD = accessibilityRelationBDD.forallOnBitsAfterNumber ( (totalVariableCount + previousVariableCount)) ;
  for (uint32_t i=previousVariableCount ; i<totalVariableCount ; i++) {
    outAccessibilityRelationBDD = outAccessibilityRelationBDD.forallOnBitNumber (i) ;
  }
  uint32_t * substitutionVector = NULL ;
  macroMyNewPODArray (substitutionVector, uint32_t, totalVariableCount + previousVariableCount) ;
  for (uint32_t i=0 ; i<totalVariableCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint32_t i=totalVariableCount ; i<( (totalVariableCount + previousVariableCount)) ; i++) {
    substitutionVector [i] =  (previousVariableCount + i - totalVariableCount) ;
  }
  outAccessibilityRelationBDD = outAccessibilityRelationBDD.substitution (substitutionVector,  (totalVariableCount + previousVariableCount) COMMA_HERE) ;
  macroMyDeletePODArray (substitutionVector) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_suppressInitialStatesOperation::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibilityRelationBDD) ;
  outInitialStatesBDD = C_BDD () ;
}
//---------------------------------------------------------------------------*

void cPtr_C_5F_suppressTerminalStatesOperation::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibilityRelationBDD) ;
  outTerminalStatesBDD = C_BDD () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_fullSaturationOperation::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute operand
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
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

void cPtr_C_5F_complementationOperation::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mAttribute_mOperand.ptr ()->computeFromExpression (inCompiler,
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

void cPtr_C_5F_importMachine::
computeFromExpression (C_Compiler * /* inCompiler */,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Get index of imported machine
  const int32_t indexOfImportedMachine = (int32_t) mAttribute_mIndexOfImportedMachine.uintValue () ;
//--- Construct substitution arraies
  const uint32_t importedMachineVariableCount =  mAttribute_mTranslationVector.count () ;
  uint32_t * statesSubstitutionArray = NULL ;
  macroMyNewPODArray (statesSubstitutionArray, uint32_t, importedMachineVariableCount) ;
  uint32_t * transitionsSubstitutionArray = NULL ;
  macroMyNewPODArray (transitionsSubstitutionArray, uint32_t, importedMachineVariableCount + importedMachineVariableCount) ;
  cEnumerator_L_5F_translationVector p (mAttribute_mTranslationVector, kEnumeration_up) ;
  uint32_t index = 0 ;
  while (p.hasCurrentObject ()) {
    statesSubstitutionArray [index] =  p.current_mTargetSlot (HERE).uintValue () ;
    transitionsSubstitutionArray [index] =  p.current_mTargetSlot (HERE).uintValue () ;
    transitionsSubstitutionArray [importedMachineVariableCount + index] =  (inVariablesCount + p.current_mTargetSlot (HERE).uintValue ()) ;
    p.gotoNextObject () ;
    index ++ ;
  }
//--- Translate initial state BDD
  outInitialStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mInitialStatesBDD
    .substitution (statesSubstitutionArray, importedMachineVariableCount COMMA_HERE) ;
//--- Translate terminal state BDD
  outTerminalStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTerminalStatesBDD
   .substitution (statesSubstitutionArray, importedMachineVariableCount COMMA_HERE) ;
//--- Translate transitions BDD
  outAccessibilityRelationBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTransitionRelationBDD
    .substitution (transitionsSubstitutionArray,  (importedMachineVariableCount + importedMachineVariableCount) COMMA_HERE) ;
//---
  macroMyDeletePODArray (statesSubstitutionArray) ;
  macroMyDeletePODArray (transitionsSubstitutionArray) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_additiveModalCompositionComponent::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute BDDs for each mode
  const int32_t modeCount = (int32_t) mAttribute_mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GALGAS_lstring> modeNamesArray (modeCount, GALGAS_lstring () COMMA_HERE) ;
  cEnumerator_M_5F_modesMap currentMode (mAttribute_mModeMap, kEnumeration_up) ;
  {int32_t index = 0 ;
    while (currentMode.hasCurrentObject ()) {
      modeNamesArray (index COMMA_HERE) = currentMode.current_lkey (HERE) ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode.current_mModeDefinition (HERE).ptr ()->computeFromExpression (inCompiler,
                                                              inSaraSystemArray,
                                                              inVariablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode.gotoNextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), inVariablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, inVariablesCount + inVariablesCount) ;
  for (uint32_t i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] =  (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    for (int32_t testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (leftAccessiblesStates != (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (intersection != (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (rightAccessiblesStates != (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (intersection != (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)) == (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)) == (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    }
  }
  macroMyDeletePODArray (substitutionArray) ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  outInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  outTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  outAccessibilityRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (int32_t mode=1 ; mode < modeCount ; mode++) {
    outInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    outTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    outAccessibilityRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  cEnumerator_ListForModes currentInclusion (mAttribute_mInclusionList, kEnumeration_up) ;
  while (currentInclusion.hasCurrentObject ()) {
    const int32_t sourceMode = (int32_t) currentInclusion.current_mSourceMode (HERE).uintValue () ;
    const int32_t targetMode = (int32_t) currentInclusion.current_mTargetMode (HERE).uintValue () ;
  //--- translate initial state BDD by inVariablesCount slots
    const C_BDD translatedInitialStates = initialStatesArray (targetMode COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
  //--- Transitions to from terminal states to initial states
    const C_BDD transitions = terminalStatesArray (sourceMode COMMA_HERE) & translatedInitialStates ;
  //--- Add transitions from terminal states to initial states
    outAccessibilityRelationBDD |= transitions ;
  //--- Next inclusion
    currentInclusion.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_substractiveModalCompositionComponent::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute BDDs for each mode
  const int32_t modeCount = (int32_t) mAttribute_mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GALGAS_lstring> modeNamesArray (modeCount, GALGAS_lstring () COMMA_HERE) ;
  cEnumerator_M_5F_modesMap currentMode (mAttribute_mModeMap, kEnumeration_up) ;
  {int32_t index = 0 ;
    while (currentMode.hasCurrentObject ()) {
      modeNamesArray (index COMMA_HERE) = currentMode.current_lkey (HERE) ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode.current_mModeDefinition (HERE).ptr ()->computeFromExpression (inCompiler,
                                                              inSaraSystemArray,
                                                              inVariablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode.gotoNextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), inVariablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, inVariablesCount + inVariablesCount) ;
  for (uint32_t i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] =  (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    for (int32_t testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (leftAccessiblesStates != (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (intersection != (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray,  (inVariablesCount + inVariablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (rightAccessiblesStates != (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (intersection != (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)) == (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)) == (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    }
  }
  macroMyDeletePODArray (substitutionArray) ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  outInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  outTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  outAccessibilityRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (int32_t mode=1 ; mode < modeCount ; mode++) {
    outInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    outTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    outAccessibilityRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  for (int32_t sourceMode=0 ; sourceMode < modeCount ; sourceMode++) {
    for (int32_t targetMode=0 ; targetMode < modeCount ; targetMode++) {
      if (sourceMode != targetMode) {
      //--- Is theses transitions accepted ?
        bool isAccepted = true ;
        cEnumerator_ListForModes currentExclusion (mAttribute_mExclusionList, kEnumeration_up) ;
        while ((currentExclusion.hasCurrentObject ()) && isAccepted) {
          isAccepted = (sourceMode != (int32_t) currentExclusion.current_mSourceMode (HERE).uintValue ()) || (targetMode != (int32_t) currentExclusion.current_mTargetMode (HERE).uintValue ()) ;
          currentExclusion.gotoNextObject () ;
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

void cPtr_C_5F_trans::
computeFromExpression (C_Compiler * inCompiler,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint32_t inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  outInitialStatesBDD = C_BDD () ;
  outTerminalStatesBDD = C_BDD () ;
  outAccessibilityRelationBDD = mAttribute_mSourceStateExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, 0)
        & mAttribute_mTargetStateExpression.ptr ()->computeBDD (inCompiler, inSaraSystemArray, inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

static void
addFilteredTransitions (C_BDD & ioAcculmulatedTransitions,
                        const C_BDD & inSourceAccessibilityRelation,
                        const C_BDD & inSourceTerminalStates,
                        const int32_t inVariablesCount,
                        const int32_t inInputVariablesCount,
                        const C_BDD & inTargetInitialStates) {
//--- Transitions from terminal states
   const C_BDD transitionsFromTerminalStates = inSourceAccessibilityRelation & inSourceTerminalStates ;
//--- Filter theses transitions by eliminating target internal and output variables
   const C_BDD filteredTransitionsFromTerminalStates = transitionsFromTerminalStates.existsOnBitsAfterNumber ((uint32_t) (inVariablesCount + inInputVariablesCount)) ;
//--- translate initial state BDD by variablesCount slots
   const C_BDD translatedInitialStates = inTargetInitialStates.translate ((uint32_t) inVariablesCount, (uint32_t) inVariablesCount) ;
//--- Transitions to from terminal states to initial states
   const C_BDD transitions = inSourceTerminalStates & translatedInitialStates ;
//--- Eliminate from theses transitions all the transitions that raise an ambiguity
   const C_BDD transitionsToAdd = transitions & ~ filteredTransitionsFromTerminalStates ;
//--- Add transitions from terminal states to initial states
   ioAcculmulatedTransitions |= transitionsToAdd ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineDefinedByAdditiveModalComp::
compute (C_Compiler * inCompiler,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mAttribute_mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mAttribute_mMachineName.mAttribute_string.stringValue () ;
//--- Build input variables array names
  const uint32_t inputVariablesCount =  mAttribute_mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint32_t variablesCount =  mAttribute_mVariablesMap.count () ;
  const uint32_t inputAndInternalVariablesCount =  mAttribute_mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray ((int32_t) variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  cEnumerator_M_5F_variablesMap currentVar (mAttribute_mVariablesMap, kEnumeration_up) ;
  int32_t index = 0 ;
  while (currentVar.hasCurrentObject ()) {
    machine.mNamesArray (index COMMA_HERE) = currentVar.current_lkey (HERE).mAttribute_string.stringValue () ;
    index ++ ;
    currentVar.gotoNextObject () ;
  }
//--- Compute BDDs for each mode
  const int32_t modeCount = (int32_t) mAttribute_mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GALGAS_lstring> modeNamesArray (modeCount, GALGAS_lstring () COMMA_HERE) ;
  cEnumerator_M_5F_modesMap currentMode (mAttribute_mModeMap, kEnumeration_up) ;
  {int32_t index = 0 ;
    while (currentMode.hasCurrentObject ()) {
      modeNamesArray (index COMMA_HERE) = currentMode.current_lkey (HERE) ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode.current_mModeDefinition (HERE).ptr ()->computeFromExpression (inCompiler,
                                                              ioSaraSystemArray,
                                                              variablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode.gotoNextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), variablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, variablesCount + variablesCount) ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] =  (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    for (int32_t testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (leftAccessiblesStates != (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (intersection != (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (rightAccessiblesStates != (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (intersection != (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)) == (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)) == (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    }
  }
  macroMyDeletePODArray (substitutionArray) ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  machine.mInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  machine.mTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  machine.mTransitionRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (int32_t mode=1 ; mode < modeCount ; mode++) {
    machine.mInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    machine.mTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    machine.mTransitionRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  cEnumerator_ListForModes currentInclusion (mAttribute_mInclusionList, kEnumeration_up) ;
  while (currentInclusion.hasCurrentObject ()) {
    const int32_t sourceMode = (int32_t) currentInclusion.current_mSourceMode (HERE).uintValue () ;
    const int32_t targetMode = (int32_t) currentInclusion.current_mTargetMode (HERE).uintValue () ;
  //--- Add filtered transitions from terminal states to initial states
    addFilteredTransitions (machine.mTransitionRelationBDD,
                            accessibilityRelationStatesArray (sourceMode COMMA_HERE),
                            terminalStatesArray (sourceMode COMMA_HERE),
                            (int32_t) variablesCount,
                            (int32_t) inputVariablesCount,
                            initialStatesArray (targetMode COMMA_HERE)) ;
  //--- Next inclusion
    currentInclusion.gotoNextObject () ;
  }
//---------- Compute accessible states
  if (variablesCount > 0) {
    macroMyNewPODArray (substitutionArray, uint32_t, variablesCount + variablesCount) ;
  }
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] =  (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (machine.mAccessibleStatesBDD != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray ((int32_t) (variablesCount + variablesCount), "" COMMA_HERE) ;
  for (int32_t i=0 ; i<(int32_t) variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray ((int32_t) variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const int32_t outputVariablesCount = (int32_t) (variablesCount - inputAndInternalVariablesCount) ;
  const int32_t internalVariablesCount = (int32_t) (inputAndInternalVariablesCount - inputVariablesCount) ;
  uint64_t n = machine.mInitialStatesBDD.valueCount64 (variablesCount) ;
  uint32_t nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithSigned (inputVariablesCount)
     << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount)
     << " internal variable" << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount) << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n"
        "  " << cStringWithUnsigned (n) << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mInitialStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n)
     << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mTerminalStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " accessible state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ";\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mAccessibleStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD ( i, false).equalTo (C_BDD ( (variablesCount + i), false)) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source ("
     << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    printBDD (t, transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_5F_machineDefinedBySubstractiveModalComp::
compute (C_Compiler * inCompiler,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mAttribute_mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mAttribute_mMachineName.mAttribute_string.stringValue () ;
//--- Build input variables array names
  const uint32_t inputVariablesCount =  mAttribute_mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint32_t variablesCount =  mAttribute_mVariablesMap.count () ;
  const uint32_t inputAndInternalVariablesCount =  mAttribute_mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray ((int32_t) variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  cEnumerator_M_5F_variablesMap currentVar (mAttribute_mVariablesMap, kEnumeration_up) ;
  int32_t index = 0 ;
  while (currentVar.hasCurrentObject ()) {
    machine.mNamesArray (index COMMA_HERE) = currentVar.current_lkey (HERE).mAttribute_string.stringValue () ;
    index ++ ;
    currentVar.gotoNextObject () ;
  }
//----------- Compute automaton from definition expression
//--- Compute BDDs for each mode
  const int32_t modeCount = (int32_t) mAttribute_mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GALGAS_lstring> modeNamesArray (modeCount, GALGAS_lstring () COMMA_HERE) ;
  cEnumerator_M_5F_modesMap currentMode (mAttribute_mModeMap, kEnumeration_up) ;
  {int32_t index = 0 ;
    while (currentMode.hasCurrentObject ()) {
      modeNamesArray (index COMMA_HERE) = currentMode.current_lkey (HERE) ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode.current_mModeDefinition (HERE).ptr ()->computeFromExpression (inCompiler,
                                                              ioSaraSystemArray,
                                                              variablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode.gotoNextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), variablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint32_t * substitutionArray = NULL ;
  macroMyNewPODArray (substitutionArray, uint32_t, variablesCount + variablesCount) ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] =  (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  for (int32_t mode=0 ; mode<modeCount ; mode++) {
    for (int32_t testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
     //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (leftAccessiblesStates != (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (intersection != (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (rightAccessiblesStates != (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (intersection != (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)) == (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)) == (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        inCompiler->semanticErrorAtLocation (modeNamesArray (testedMode COMMA_HERE).mAttribute_location, errorMessage COMMA_HERE) ;
      }
    }
  }
  macroMyDeletePODArray (substitutionArray) ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  machine.mInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  machine.mTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  machine.mTransitionRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (int32_t mode=1 ; mode < modeCount ; mode++) {
    machine.mInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    machine.mTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    machine.mTransitionRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  for (int32_t sourceMode=0 ; sourceMode < modeCount ; sourceMode++) {
    for (int32_t targetMode=0 ; targetMode < modeCount ; targetMode++) {
      if (sourceMode != targetMode) {
      //--- Is theses transitions accepted ?
        bool isAccepted = true ;
        cEnumerator_ListForModes currentExclusion (mAttribute_mExclusionList, kEnumeration_up) ;
        while ((currentExclusion.hasCurrentObject ()) && isAccepted) {
          isAccepted = (sourceMode != (int32_t) currentExclusion.current_mSourceMode (HERE).uintValue ()) || (targetMode != (int32_t) currentExclusion.current_mTargetMode (HERE).uintValue ()) ;
          currentExclusion.gotoNextObject () ;
        }
      //--- If accepted, add transition
        if (isAccepted) {
        //--- Add filtered transitions from terminal states to initial states
          addFilteredTransitions (machine.mTransitionRelationBDD,
                                  accessibilityRelationStatesArray (sourceMode COMMA_HERE),
                                  terminalStatesArray (sourceMode COMMA_HERE),
                                  (int32_t) variablesCount,
                                  (int32_t) inputVariablesCount,
                                  initialStatesArray (targetMode COMMA_HERE)) ;
        }
      }
    }
  }
//---------- Compute accessible states
  if (variablesCount > 0) {
    macroMyNewPODArray (substitutionArray, uint32_t, variablesCount + variablesCount) ;
  }
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] =  (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray,  (variablesCount + variablesCount) COMMA_HERE) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (machine.mAccessibleStatesBDD != (newlyAccessibleStates)) ;
  macroMyDeletePODArray (substitutionArray) ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray ((int32_t)  (variablesCount + variablesCount), "" COMMA_HERE) ;
  for (int32_t i=0 ; i<(int32_t) variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray ((int32_t) variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const int32_t outputVariablesCount = (int32_t) (variablesCount - inputAndInternalVariablesCount) ;
  const int32_t internalVariablesCount = (int32_t) (inputAndInternalVariablesCount - inputVariablesCount) ;
  co << "  "
     << cStringWithSigned (inputVariablesCount) << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount) << " internal variable" << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount) << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n" ;
  uint64_t n = machine.mInitialStatesBDD.valueCount64 (variablesCount) ;
  uint32_t nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mInitialStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mTerminalStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount64 (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " accessible state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    printBDD (machine.mAccessibleStatesBDD, machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (uint32_t i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD (i, false).equalTo (C_BDD ( (variablesCount + i), false)) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source ("
     << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount64 ( (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned (n) << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    printBDD (t, transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*
