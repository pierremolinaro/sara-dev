//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @C_machineComponent class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_C_5F_machineComponent : public cPtr_AC_5F_job {
//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_lstring mProperty_mMachineName ;
  public : GALGAS_uint mProperty_mMachineIndex ;
  public : GALGAS_uint mProperty_mInputVariableCount ;
  public : GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public : GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public : GALGAS_stringlist mProperty_mNameList ;
  public : GALGAS_AC_5F_machineDefinition mProperty_mDefinition ;

//--- Constructor
  public : cPtr_C_5F_machineComponent (const GALGAS_lstring & in_mMachineName,
                                       const GALGAS_uint & in_mMachineIndex,
                                       const GALGAS_uint & in_mInputVariableCount,
                                       const GALGAS_uint & in_mInputAndInternalVariableCount,
                                       const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                       const GALGAS_stringlist & in_mNameList,
                                       const GALGAS_AC_5F_machineDefinition & in_mDefinition
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mNameList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_machineDefinition getter_mDefinition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

