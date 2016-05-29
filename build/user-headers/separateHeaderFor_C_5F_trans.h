//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Pointer class for @C_trans class                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_trans : public cPtr_AC_5F_machineDefinition {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_AC_5F_boolExpression mAttribute_mSourceStateExpression ;
  public : GALGAS_AC_5F_boolExpression mAttribute_mTargetStateExpression ;

//--- Constructor
  public : cPtr_C_5F_trans (const GALGAS_AC_5F_boolExpression & in_mSourceStateExpression,
                            const GALGAS_AC_5F_boolExpression & in_mTargetStateExpression
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_boolExpression getter_mSourceStateExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_AC_5F_boolExpression getter_mTargetStateExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

