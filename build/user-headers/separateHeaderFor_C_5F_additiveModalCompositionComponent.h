//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_additiveModalCompositionComponent class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_additiveModalCompositionComponent : public cPtr_AC_5F_machineDefinition {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void C_5F_additiveModalCompositionComponent_init_21__21_ (const class GALGAS_M_5F_modesMap & inOperand0,
                                                                    const class GALGAS_ListForModes & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (Compiler * inCompiler,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint32_t inVariablesCount,
                                               BinaryDecisionDiagram & outInitialStatesBDD,
                                               BinaryDecisionDiagram & outTerminalStatesBDD,
                                               BinaryDecisionDiagram & outAccessibilityRelationBDD) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_M_5F_modesMap mProperty_mModeMap ;
  public: GALGAS_ListForModes mProperty_mInclusionList ;


//--- Default constructor
  public: cPtr_C_5F_additiveModalCompositionComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_C_5F_additiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                       const GALGAS_ListForModes & in_mInclusionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

