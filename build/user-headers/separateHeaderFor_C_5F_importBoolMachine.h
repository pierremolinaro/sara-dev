//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_importBoolMachine class
//
//--------------------------------------------------------------------------------------------------

class cPtr_C_5F_importBoolMachine : public cPtr_AC_5F_boolExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- START OF USER ZONE 2

  public : virtual BinaryDecisionDiagram computeBDD (Compiler * inCompiler,
                                     const TC_Array <C_saraMachine> & inSaraSystemArray,
                                     const uint32_t inVariablesCount,
                                     const uint32_t inBDDslotOffset) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_uint mProperty_mIndexOfImportedMachine ;
  public: GALGAS_location mProperty_mErrorLocation ;
  public: GALGAS_L_5F_translationVector mProperty_mTranslationVector ;

//--- Constructor
  public: cPtr_C_5F_importBoolMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                       const GALGAS_location & in_mErrorLocation,
                                       const GALGAS_L_5F_translationVector & in_mTranslationVector
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

