//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @C_substractiveModalCompositionComponent class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_C_5F_substractiveModalCompositionComponent : public cPtr_AC_5F_machineDefinition {
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_M_5F_modesMap mProperty_mModeMap ;
  public : GALGAS_ListForModes mProperty_mExclusionList ;

//--- Constructor
  public : cPtr_C_5F_substractiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                            const GALGAS_ListForModes & in_mExclusionList
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_M_5F_modesMap getter_mModeMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ListForModes getter_mExclusionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

