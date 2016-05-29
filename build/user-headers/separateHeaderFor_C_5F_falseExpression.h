//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Pointer class for @C_falseExpression class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_falseExpression : public cPtr_AC_5F_boolExpression {
//--- START OF USER ZONE 2

  public : virtual C_BDD computeBDD (C_Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const ;

//--- END OF USER ZONE 2
//--- Attributes

//--- Constructor
  public : cPtr_C_5F_falseExpression (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

