//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Pointer class for @C_orExpression class                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_orExpression : public cPtr_AC_5F_boolExpression {
//--- START OF USER ZONE 2

  public : virtual C_BDD computeBDD (C_Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_AC_5F_boolExpression mAttribute_mLeftExpression ;
  public : GALGAS_AC_5F_boolExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_C_5F_orExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                   const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

