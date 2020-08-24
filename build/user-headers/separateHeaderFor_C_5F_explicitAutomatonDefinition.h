//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_explicitAutomatonDefinition class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : GALGAS_M_5F_stateMap mProperty_mStatesMap ;
  public : GALGAS_L_5F_statesDefinitionList mProperty_mInitialStatesDefinitionList ;
  public : GALGAS_L_5F_statesDefinitionList mProperty_mTerminalStatesDefinitionList ;
  public : GALGAS_L_5F_stateDefinition mProperty_mStateDefinitionList ;
  public : GALGAS_location mProperty_mEndOfDefinition ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_M_5F_stateMap getter_mStatesMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStatesMap (GALGAS_M_5F_stateMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList getter_mInitialStatesDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInitialStatesDefinitionList (GALGAS_L_5F_statesDefinitionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList getter_mTerminalStatesDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTerminalStatesDefinitionList (GALGAS_L_5F_statesDefinitionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_stateDefinition getter_mStateDefinitionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStateDefinitionList (GALGAS_L_5F_stateDefinition inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfDefinition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfDefinition (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

