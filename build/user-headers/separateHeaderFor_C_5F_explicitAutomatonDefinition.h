//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_explicitAutomatonDefinition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_explicitAutomatonDefinition : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               BinaryDecisionDiagram & outInitialStatesBDD,
                                               BinaryDecisionDiagram & outTerminalStatesBDD,
                                               BinaryDecisionDiagram & outAccessibilityRelationBDD) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_M_5F_stateMap mProperty_mStatesMap ;
  public: GALGAS_L_5F_statesDefinitionList mProperty_mInitialStatesDefinitionList ;
  public: GALGAS_L_5F_statesDefinitionList mProperty_mTerminalStatesDefinitionList ;
  public: GALGAS_L_5F_stateDefinition mProperty_mStateDefinitionList ;
  public: GALGAS_location mProperty_mEndOfDefinition ;

//--- Constructor
  public: cPtr_C_5F_explicitAutomatonDefinition (const GALGAS_M_5F_stateMap & in_mStatesMap,
                                                 const GALGAS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                 const GALGAS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                 const GALGAS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                 const GALGAS_location & in_mEndOfDefinition
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

