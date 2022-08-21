//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_existsDefinition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_existsDefinition : public cPtr_AC_5F_machineDefinition {

//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_uint mProperty_mPreviousVariableCount ;
  public: GALGAS_uint mProperty_mTotalVariableCount ;
  public: GALGAS_AC_5F_machineDefinition mProperty_mOperand ;

//--- Constructor
  public: cPtr_C_5F_existsDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                      const GALGAS_uint & in_mTotalVariableCount,
                                      const GALGAS_AC_5F_machineDefinition & in_mOperand
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

