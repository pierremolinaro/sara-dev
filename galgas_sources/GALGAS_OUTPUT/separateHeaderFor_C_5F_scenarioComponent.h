//---------------------------------------------------------------------------*
//                                                                           *
//            File 'separateHeaderFor_C_5F_scenarioComponent.h'              *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                     october 30th, 2010, at 11h32'46"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*
//                                                                           *
//               Pointer class for @C_scenarioComponent class                *
//                                                                           *
//---------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const PMSInt32 inIndentation) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;
