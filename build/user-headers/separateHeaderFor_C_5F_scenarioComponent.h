//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @C_scenarioComponent class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_C_5F_scenarioComponent : public cPtr_AC_5F_job {
//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_uint mAttribute_mMachineIndex ;
  public : GALGAS_uint mAttribute_mInputVariableCount ;
  public : GALGAS_uint mAttribute_mInputAndInternalVariableCount ;
  public : GALGAS_M_5F_variablesMap mAttribute_mVariablesMap ;
  public : GALGAS_L_5F_scenarioList mAttribute_mScenarioList ;

//--- Constructor
  public : cPtr_C_5F_scenarioComponent (const GALGAS_uint & in_mMachineIndex,
                                        const GALGAS_uint & in_mInputVariableCount,
                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                        const GALGAS_L_5F_scenarioList & in_mScenarioList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_scenarioList getter_mScenarioList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

