//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @C_explicitAutomatonDefinition class
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_explicitAutomatonDefinition : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_explicitAutomatonDefinition_init_21__21__21__21__21_ (const class GGS_M_5F_stateMap & inOperand0,
                                                                          const class GGS_L_5F_statesDefinitionList & inOperand1,
                                                                          const class GGS_L_5F_statesDefinitionList & inOperand2,
                                                                          const class GGS_L_5F_stateDefinition & inOperand3,
                                                                          const class GGS_location & inOperand4,
                                                                          Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               BinaryDecisionDiagram & outInitialStatesBDD,
                                               BinaryDecisionDiagram & outTerminalStatesBDD,
                                               BinaryDecisionDiagram & outAccessibilityRelationBDD) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_M_5F_stateMap mProperty_mStatesMap ;
  public: GGS_L_5F_statesDefinitionList mProperty_mInitialStatesDefinitionList ;
  public: GGS_L_5F_statesDefinitionList mProperty_mTerminalStatesDefinitionList ;
  public: GGS_L_5F_stateDefinition mProperty_mStateDefinitionList ;
  public: GGS_location mProperty_mEndOfDefinition ;


//--- Default constructor
  public: cPtr_C_5F_explicitAutomatonDefinition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_explicitAutomatonDefinition (const GGS_M_5F_stateMap & in_mStatesMap,
                                                 const GGS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                 const GGS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                 const GGS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                 const GGS_location & in_mEndOfDefinition,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

