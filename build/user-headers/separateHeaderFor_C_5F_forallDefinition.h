//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_forallDefinition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_forallDefinition : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_forallDefinition_init_21__21__21_ (const class GGS_uint & inOperand0,
                                                       const class GGS_uint & inOperand1,
                                                       const class GGS_AC_5F_machineDefinition & inOperand2,
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
  public: GGS_uint mProperty_mPreviousVariableCount ;
  public: GGS_uint mProperty_mTotalVariableCount ;
  public: GGS_AC_5F_machineDefinition mProperty_mOperand ;


//--- Default constructor
  public: cPtr_C_5F_forallDefinition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_forallDefinition (const GGS_uint & in_mPreviousVariableCount,
                                      const GGS_uint & in_mTotalVariableCount,
                                      const GGS_AC_5F_machineDefinition & in_mOperand
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

