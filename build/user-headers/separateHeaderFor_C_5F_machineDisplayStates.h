//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_machineDisplayStates class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineDisplayStates : public cPtr_AC_5F_job {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_machineDisplayStates_init_21_ (const class GGS_uint & inOperand0,
                                                   Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_uint mProperty_mMachineIndex ;


//--- Default constructor
  public: cPtr_C_5F_machineDisplayStates (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_machineDisplayStates (const GGS_uint & in_mMachineIndex
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

