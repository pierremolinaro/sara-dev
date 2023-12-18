//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Pointer class for @typeUse_AND class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_typeUse_5F_AND : public cPtr_AC_5F_job {
//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const ;

//--- END OF USER ZONE 2
//--- Attributes

//--- Constructor
  public : cPtr_typeUse_5F_AND (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

