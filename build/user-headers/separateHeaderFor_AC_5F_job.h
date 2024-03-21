//--- START OF USER ZONE 1

#include "C_saraMachine.h"

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @AC_job class
//
//--------------------------------------------------------------------------------------------------

class cPtr_AC_5F_job : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- START OF USER ZONE 2

  public : virtual void compute (Compiler * inCompiler,
                                 TC_Array <C_saraMachine> & ioSaraSystemArray,
                                 const bool inDisplayBDDvaluesCount,
                                 const bool inDisplayBDDvalues) const = 0 ;

//--- END OF USER ZONE 2
//--- Properties

//--- Constructor
  public: cPtr_AC_5F_job (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

