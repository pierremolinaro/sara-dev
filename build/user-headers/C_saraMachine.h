#ifndef C_saraMachine_DEFINED
#define C_saraMachine_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "bdd/C_BDD.h"

//---------------------------------------------------------------------------------------------------------------------*

class C_saraMachine {
  public : C_saraMachine (void) ;
  public : C_String mMachineName ;
  public : uint32_t mInputVariablesCount ;
  public : uint32_t mInputAndInternalVariablesCount ;
  public : TC_Array <C_String> mNamesArray ;
  public : C_BDD mInitialStatesBDD ;
  public : C_BDD mTerminalStatesBDD ;
  public : C_BDD mTransitionRelationBDD ;
  public : C_BDD mAccessibleStatesBDD ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
