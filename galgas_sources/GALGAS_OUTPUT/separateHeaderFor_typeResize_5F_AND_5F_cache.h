//---------------------------------------------------------------------------*
//                                                                           *
//          File 'separateHeaderFor_typeResize_5F_AND_5F_cache.h'            *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                     october 30th, 2010, at 11h32'46"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*
//                                                                           *
//               Pointer class for @typeResize_AND_cache class               *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_typeResize_5F_AND_5F_cache : public cPtr_AC_5F_job {

//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2

//--- Attributes
  public : GALGAS_luint mAttribute_mNewSize ;

//--- Constructor
  public : cPtr_typeResize_5F_AND_5F_cache (const GALGAS_luint & in_mNewSize
                                            COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const PMSInt32 inIndentation) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;
