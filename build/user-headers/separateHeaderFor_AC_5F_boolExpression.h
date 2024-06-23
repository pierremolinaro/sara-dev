//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @AC_boolExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_AC_5F_boolExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void AC_5F_boolExpression_init (Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual BinaryDecisionDiagram computeBDD (Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const = 0 ;

//--- END OF USER ZONE 2
//--- Properties



//--- Constructor
  public: cPtr_AC_5F_boolExpression (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

