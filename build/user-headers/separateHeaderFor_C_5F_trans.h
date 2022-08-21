//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_trans class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_trans : public cPtr_AC_5F_machineDefinition {

//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_AC_5F_boolExpression mProperty_mSourceStateExpression ;
  public: GALGAS_AC_5F_boolExpression mProperty_mTargetStateExpression ;

//--- Constructor
  public: cPtr_C_5F_trans (const GALGAS_AC_5F_boolExpression & in_mSourceStateExpression,
                           const GALGAS_AC_5F_boolExpression & in_mTargetStateExpression
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

