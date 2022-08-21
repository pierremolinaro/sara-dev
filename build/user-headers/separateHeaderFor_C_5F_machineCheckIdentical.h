//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @C_machineCheckIdentical class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_C_5F_machineCheckIdentical : public cPtr_AC_5F_job {

//--- START OF USER ZONE 2

  public : virtual void compute (C_Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_uint mProperty_mMachineIndex_31_ ;
  public: GALGAS_uint mProperty_mMachineIndex_32_ ;

//--- Constructor
  public: cPtr_C_5F_machineCheckIdentical (const GALGAS_uint & in_mMachineIndex_31_,
                                           const GALGAS_uint & in_mMachineIndex_32_
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

