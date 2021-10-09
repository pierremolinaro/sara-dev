//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_suppressTerminalStatesOperation class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_suppressTerminalStatesOperation : public cPtr_AC_5F_machineDefinition {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public: GALGAS_AC_5F_machineDefinition mProperty_mOperand ;

//--- Constructor
  public: cPtr_C_5F_suppressTerminalStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

