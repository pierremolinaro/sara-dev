//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_machineDefinedBySubstractiveModalComp class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineDefinedBySubstractiveModalComp : public cPtr_AC_5F_job {
//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_lstring mProperty_mMachineName ;
  public: GALGAS_uint mProperty_mMachineIndex ;
  public: GALGAS_uint mProperty_mInputVariableCount ;
  public: GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public: GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GALGAS_M_5F_modesMap mProperty_mModeMap ;
  public: GALGAS_ListForModes mProperty_mExclusionList ;

//--- Constructor
  public: cPtr_C_5F_machineDefinedBySubstractiveModalComp (const GALGAS_lstring & in_mMachineName,
                                                           const GALGAS_uint & in_mMachineIndex,
                                                           const GALGAS_uint & in_mInputVariableCount,
                                                           const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                           const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                           const GALGAS_M_5F_modesMap & in_mModeMap,
                                                           const GALGAS_ListForModes & in_mExclusionList
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

