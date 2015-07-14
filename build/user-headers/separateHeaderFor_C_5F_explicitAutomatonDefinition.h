//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @C_explicitAutomatonDefinition class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_C_5F_explicitAutomatonDefinition : public cPtr_AC_5F_machineDefinition {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_M_5F_stateMap mAttribute_mStatesMap ;
  public : GALGAS_L_5F_statesDefinitionList mAttribute_mInitialStatesDefinitionList ;
  public : GALGAS_L_5F_statesDefinitionList mAttribute_mTerminalStatesDefinitionList ;
  public : GALGAS_L_5F_stateDefinition mAttribute_mStateDefinitionList ;
  public : GALGAS_location mAttribute_mEndOfDefinition ;

//--- Constructor
  public : cPtr_C_5F_explicitAutomatonDefinition (const GALGAS_M_5F_stateMap & in_mStatesMap,
                                                  const GALGAS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                  const GALGAS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                  const GALGAS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                  const GALGAS_location & in_mEndOfDefinition
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_M_5F_stateMap reader_mStatesMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList reader_mInitialStatesDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList reader_mTerminalStatesDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_stateDefinition reader_mStateDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfDefinition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

