//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @typeResize_AND_cache class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_typeResize_5F_AND_5F_cache : public cPtr_AC_5F_job {
//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_luint mProperty_mNewSize ;

//--- Constructor
  public : cPtr_typeResize_5F_AND_5F_cache (const GALGAS_luint & in_mNewSize
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mNewSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

