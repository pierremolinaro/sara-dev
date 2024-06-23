//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_orComposition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_orComposition : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_orComposition_init_21__21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                const class GGS_AC_5F_machineDefinition & inOperand1,
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
  public: GGS_AC_5F_machineDefinition mProperty_mLeftOperand ;
  public: GGS_AC_5F_machineDefinition mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_C_5F_orComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_orComposition (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                   const GGS_AC_5F_machineDefinition & in_mRightOperand,
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

