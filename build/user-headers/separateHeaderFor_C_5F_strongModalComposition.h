//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_strongModalComposition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_strongModalComposition : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_strongModalComposition_init_21__21__21_ (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                             const class GALGAS_location & inOperand1,
                                                             const class GALGAS_AC_5F_machineDefinition & inOperand2,
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
  public: GALGAS_AC_5F_machineDefinition mProperty_mLeftOperand ;
  public: GALGAS_location mProperty_mErrorLocation ;
  public: GALGAS_AC_5F_machineDefinition mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_C_5F_strongModalComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_strongModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                            const GALGAS_location & in_mErrorLocation,
                                            const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

