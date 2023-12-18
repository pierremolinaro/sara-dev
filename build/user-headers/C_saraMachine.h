#ifndef C_saraMachine_DEFINED
#define C_saraMachine_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "bdd/C_BDD.h"

//---------------------------------------------------------------------------------------------------------------------*

class C_saraMachine {
  public : C_saraMachine (void) ;
  public : String mMachineName ;
  public : uint32_t mInputVariablesCount ;
  public : uint32_t mInputAndInternalVariablesCount ;
  public : TC_Array <String> mNamesArray ;
  public : C_BDD mInitialStatesBDD ;
  public : C_BDD mTerminalStatesBDD ;
  public : C_BDD mTransitionRelationBDD ;
  public : C_BDD mAccessibleStatesBDD ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
