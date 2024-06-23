//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @AC_machineDefinition class
//
//--------------------------------------------------------------------------------------------------

class cPtr_AC_5F_machineDefinition : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void AC_5F_machineDefinition_init (Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               BinaryDecisionDiagram & outInitialStatesBDD,
                                               BinaryDecisionDiagram & outTerminalStatesBDD,
                                               BinaryDecisionDiagram & outAccessibilityRelationBDD) const = 0 ;

//--- END OF USER ZONE 2
//--- Properties



//--- Constructor
  public: cPtr_AC_5F_machineDefinition (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

