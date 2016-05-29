//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Pointer class for @AC_machineDefinition class                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_AC_5F_machineDefinition : public acPtr_class {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const = 0 ;

//--- END OF USER ZONE 2
//--- Attributes

//--- Constructor
  public : cPtr_AC_5F_machineDefinition (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

