//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @C_machineCheck class
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineCheck : public cPtr_AC_5F_job {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_machineCheck_init_21__21_ (const class GGS_uint & inOperand0,
                                               const class GGS_bool & inOperand1,
                                               Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 GenericArray <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_uint mProperty_mMachineIndex ;
  public: GGS_bool mProperty_mCheckMachineIsBoolean ;


//--- Default constructor
  public: cPtr_C_5F_machineCheck (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_machineCheck (const GGS_uint & in_mMachineIndex,
                                  const GGS_bool & in_mCheckMachineIsBoolean,
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

