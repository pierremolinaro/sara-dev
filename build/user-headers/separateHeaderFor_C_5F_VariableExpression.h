//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_VariableExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_VariableExpression : public cPtr_AC_5F_boolExpression {
//--- START OF USER ZONE 2

  public : virtual C_BDD computeBDD (C_Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_uint mProperty_mInputVarIndex ;

//--- Constructor
  public : cPtr_C_5F_VariableExpression (const GALGAS_uint & in_mInputVarIndex
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mInputVarIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInputVarIndex (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

