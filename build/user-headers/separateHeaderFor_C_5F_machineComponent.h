//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @C_machineComponent class
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineComponent : public cPtr_AC_5F_job {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_machineComponent_init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       const class GGS_uint & inOperand3,
                                                                       const class GGS_M_5F_variablesMap & inOperand4,
                                                                       const class GGS_stringlist & inOperand5,
                                                                       const class GGS_AC_5F_machineDefinition & inOperand6,
                                                                       Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 GenericArray <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_lstring mProperty_mMachineName ;
  public: GGS_uint mProperty_mMachineIndex ;
  public: GGS_uint mProperty_mInputVariableCount ;
  public: GGS_uint mProperty_mInputAndInternalVariableCount ;
  public: GGS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GGS_stringlist mProperty_mNameList ;
  public: GGS_AC_5F_machineDefinition mProperty_mDefinition ;


//--- Default constructor
  public: cPtr_C_5F_machineComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_machineComponent (const GGS_lstring & in_mMachineName,
                                      const GGS_uint & in_mMachineIndex,
                                      const GGS_uint & in_mInputVariableCount,
                                      const GGS_uint & in_mInputAndInternalVariableCount,
                                      const GGS_M_5F_variablesMap & in_mVariablesMap,
                                      const GGS_stringlist & in_mNameList,
                                      const GGS_AC_5F_machineDefinition & in_mDefinition,
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

