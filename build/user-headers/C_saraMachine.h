#ifndef C_saraMachine_DEFINED
#define C_saraMachine_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "BinaryDecisionDiagram.h"

//---------------------------------------------------------------------------------------------------------------------*

class C_saraMachine {
  public : C_saraMachine (void) ;
  public : String mMachineName ;
  public : uint32_t mInputVariablesCount ;
  public : uint32_t mInputAndInternalVariablesCount ;
  public : TC_Array <String> mNamesArray ;
  public : BinaryDecisionDiagram mInitialStatesBDD ;
  public : BinaryDecisionDiagram mTerminalStatesBDD ;
  public : BinaryDecisionDiagram mTransitionRelationBDD ;
  public : BinaryDecisionDiagram mAccessibleStatesBDD ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
