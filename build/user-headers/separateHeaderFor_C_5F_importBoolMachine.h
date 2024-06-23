//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_importBoolMachine class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_importBoolMachine : public cPtr_AC_5F_boolExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_importBoolMachine_init_21__21__21_ (const class GGS_uint & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        const class GGS_L_5F_translationVector & inOperand2,
                                                        Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual BinaryDecisionDiagram computeBDD (Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_uint mProperty_mIndexOfImportedMachine ;
  public: GGS_location mProperty_mErrorLocation ;
  public: GGS_L_5F_translationVector mProperty_mTranslationVector ;


//--- Default constructor
  public: cPtr_C_5F_importBoolMachine (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_importBoolMachine (const GGS_uint & in_mIndexOfImportedMachine,
                                       const GGS_location & in_mErrorLocation,
                                       const GGS_L_5F_translationVector & in_mTranslationVector,
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

