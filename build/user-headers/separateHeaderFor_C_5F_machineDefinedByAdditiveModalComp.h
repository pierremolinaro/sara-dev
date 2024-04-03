//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_machineDefinedByAdditiveModalComp class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineDefinedByAdditiveModalComp : public cPtr_AC_5F_job {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_lstring mProperty_mMachineName ;
  public: GALGAS_uint mProperty_mMachineIndex ;
  public: GALGAS_uint mProperty_mInputVariableCount ;
  public: GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public: GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GALGAS_M_5F_modesMap mProperty_mModeMap ;
  public: GALGAS_ListForModes mProperty_mInclusionList ;


//--- Default constructor
  public: cPtr_C_5F_machineDefinedByAdditiveModalComp (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_machineDefinedByAdditiveModalComp (const GALGAS_lstring & in_mMachineName,
                                                       const GALGAS_uint & in_mMachineIndex,
                                                       const GALGAS_uint & in_mInputVariableCount,
                                                       const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                       const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                       const GALGAS_M_5F_modesMap & in_mModeMap,
                                                       const GALGAS_ListForModes & in_mInclusionList
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

