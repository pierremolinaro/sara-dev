//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Pointer class for @C_forallDefinition class                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_forallDefinition : public cPtr_AC_5F_machineDefinition {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_uint mAttribute_mPreviousVariableCount ;
  public : GALGAS_uint mAttribute_mTotalVariableCount ;
  public : GALGAS_AC_5F_machineDefinition mAttribute_mOperand ;

//--- Constructor
  public : cPtr_C_5F_forallDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                       const GALGAS_uint & in_mTotalVariableCount,
                                       const GALGAS_AC_5F_machineDefinition & in_mOperand
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPreviousVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mTotalVariableCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

