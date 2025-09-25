//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @C_equalExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_equalExpression : public cPtr_AC_5F_boolExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_equalExpression_init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                  const class GGS_AC_5F_boolExpression & inOperand1,
                                                  Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual BinaryDecisionDiagram computeBDD (Compiler * inCompiler,
                                     const GenericArray <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_AC_5F_boolExpression mProperty_mLeftExpression ;
  public: GGS_AC_5F_boolExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_C_5F_equalExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_equalExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                     const GGS_AC_5F_boolExpression & in_mRightExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

