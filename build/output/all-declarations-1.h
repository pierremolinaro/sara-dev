#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_weakModalComposition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_weakModalComposition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_weakModalComposition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_weakModalComposition_2E_weak (const class GGS_C_5F_weakModalComposition & inSource) ;

  public: GGS_C_5F_weakModalComposition_2E_weak & operator = (const class GGS_C_5F_weakModalComposition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_weakModalComposition_2E_weak init_nil (void) {
    GGS_C_5F_weakModalComposition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_weakModalComposition bang_C_5F_weakModalComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_weakModalComposition unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_weakModalComposition_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_weakModalComposition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_weakModalComposition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_fullSaturationOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_fullSaturationOperation_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_fullSaturationOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_fullSaturationOperation_2E_weak (const class GGS_C_5F_fullSaturationOperation & inSource) ;

  public: GGS_C_5F_fullSaturationOperation_2E_weak & operator = (const class GGS_C_5F_fullSaturationOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_fullSaturationOperation_2E_weak init_nil (void) {
    GGS_C_5F_fullSaturationOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_fullSaturationOperation bang_C_5F_fullSaturationOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_fullSaturationOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_fullSaturationOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_fullSaturationOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_fullSaturationOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_complementationOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_complementationOperation_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_complementationOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_complementationOperation_2E_weak (const class GGS_C_5F_complementationOperation & inSource) ;

  public: GGS_C_5F_complementationOperation_2E_weak & operator = (const class GGS_C_5F_complementationOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_complementationOperation_2E_weak init_nil (void) {
    GGS_C_5F_complementationOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_complementationOperation bang_C_5F_complementationOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_complementationOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_complementationOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_complementationOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_complementationOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_suppressTerminalStatesOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_suppressTerminalStatesOperation_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_suppressTerminalStatesOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_suppressTerminalStatesOperation_2E_weak (const class GGS_C_5F_suppressTerminalStatesOperation & inSource) ;

  public: GGS_C_5F_suppressTerminalStatesOperation_2E_weak & operator = (const class GGS_C_5F_suppressTerminalStatesOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_suppressTerminalStatesOperation_2E_weak init_nil (void) {
    GGS_C_5F_suppressTerminalStatesOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_suppressTerminalStatesOperation bang_C_5F_suppressTerminalStatesOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_suppressTerminalStatesOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_suppressTerminalStatesOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_suppressTerminalStatesOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_suppressTerminalStatesOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_suppressInitialStatesOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_suppressInitialStatesOperation_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_suppressInitialStatesOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_suppressInitialStatesOperation_2E_weak (const class GGS_C_5F_suppressInitialStatesOperation & inSource) ;

  public: GGS_C_5F_suppressInitialStatesOperation_2E_weak & operator = (const class GGS_C_5F_suppressInitialStatesOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_suppressInitialStatesOperation_2E_weak init_nil (void) {
    GGS_C_5F_suppressInitialStatesOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_suppressInitialStatesOperation bang_C_5F_suppressInitialStatesOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_suppressInitialStatesOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_suppressInitialStatesOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_suppressInitialStatesOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_suppressInitialStatesOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AC_5F_job_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_job_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_AC_5F_job_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_AC_5F_job_2E_weak (const class GGS_AC_5F_job & inSource) ;

  public: GGS_AC_5F_job_2E_weak & operator = (const class GGS_AC_5F_job & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_AC_5F_job_2E_weak init_nil (void) {
    GGS_AC_5F_job_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_AC_5F_job bang_AC_5F_job_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_AC_5F_job unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AC_5F_job_2E_weak extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AC_5F_job_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_job_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_job_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDisplayStates_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayStates_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayStates_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDisplayStates_2E_weak (const class GGS_C_5F_machineDisplayStates & inSource) ;

  public: GGS_C_5F_machineDisplayStates_2E_weak & operator = (const class GGS_C_5F_machineDisplayStates & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDisplayStates_2E_weak init_nil (void) {
    GGS_C_5F_machineDisplayStates_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDisplayStates bang_C_5F_machineDisplayStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDisplayStates unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayStates_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayStates_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayStates_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDisplayInitialStates_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayInitialStates_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayInitialStates_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDisplayInitialStates_2E_weak (const class GGS_C_5F_machineDisplayInitialStates & inSource) ;

  public: GGS_C_5F_machineDisplayInitialStates_2E_weak & operator = (const class GGS_C_5F_machineDisplayInitialStates & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDisplayInitialStates_2E_weak init_nil (void) {
    GGS_C_5F_machineDisplayInitialStates_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDisplayInitialStates bang_C_5F_machineDisplayInitialStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDisplayInitialStates unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayInitialStates_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayInitialStates_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayInitialStates_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDisplayTerminalStates_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayTerminalStates_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayTerminalStates_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDisplayTerminalStates_2E_weak (const class GGS_C_5F_machineDisplayTerminalStates & inSource) ;

  public: GGS_C_5F_machineDisplayTerminalStates_2E_weak & operator = (const class GGS_C_5F_machineDisplayTerminalStates & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDisplayTerminalStates_2E_weak init_nil (void) {
    GGS_C_5F_machineDisplayTerminalStates_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDisplayTerminalStates bang_C_5F_machineDisplayTerminalStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDisplayTerminalStates unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayTerminalStates_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayTerminalStates_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayTerminalStates_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDisplayTransitions_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayTransitions_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayTransitions_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDisplayTransitions_2E_weak (const class GGS_C_5F_machineDisplayTransitions & inSource) ;

  public: GGS_C_5F_machineDisplayTransitions_2E_weak & operator = (const class GGS_C_5F_machineDisplayTransitions & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDisplayTransitions_2E_weak init_nil (void) {
    GGS_C_5F_machineDisplayTransitions_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDisplayTransitions bang_C_5F_machineDisplayTransitions_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDisplayTransitions unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayTransitions_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayTransitions_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayTransitions_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineCheck_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineCheck_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineCheck_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineCheck_2E_weak (const class GGS_C_5F_machineCheck & inSource) ;

  public: GGS_C_5F_machineCheck_2E_weak & operator = (const class GGS_C_5F_machineCheck & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineCheck_2E_weak init_nil (void) {
    GGS_C_5F_machineCheck_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineCheck bang_C_5F_machineCheck_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineCheck unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineCheck_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineCheck_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineCheck_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheck_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineCheckIdentical_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineCheckIdentical_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineCheckIdentical_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineCheckIdentical_2E_weak (const class GGS_C_5F_machineCheckIdentical & inSource) ;

  public: GGS_C_5F_machineCheckIdentical_2E_weak & operator = (const class GGS_C_5F_machineCheckIdentical & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineCheckIdentical_2E_weak init_nil (void) {
    GGS_C_5F_machineCheckIdentical_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineCheckIdentical bang_C_5F_machineCheckIdentical_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineCheckIdentical unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineCheckIdentical_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineCheckIdentical_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineCheckIdentical_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineComponent_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineComponent_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineComponent_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineComponent_2E_weak (const class GGS_C_5F_machineComponent & inSource) ;

  public: GGS_C_5F_machineComponent_2E_weak & operator = (const class GGS_C_5F_machineComponent & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineComponent_2E_weak init_nil (void) {
    GGS_C_5F_machineComponent_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineComponent bang_C_5F_machineComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineComponent unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineComponent_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineComponent_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineComponent_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineComponent_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDefinedByAdditiveModalComp_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak (const class GGS_C_5F_machineDefinedByAdditiveModalComp & inSource) ;

  public: GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak & operator = (const class GGS_C_5F_machineDefinedByAdditiveModalComp & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak init_nil (void) {
    GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDefinedByAdditiveModalComp bang_C_5F_machineDefinedByAdditiveModalComp_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDefinedByAdditiveModalComp unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_machineDefinedBySubstractiveModalComp_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (const class GGS_C_5F_machineDefinedBySubstractiveModalComp & inSource) ;

  public: GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak & operator = (const class GGS_C_5F_machineDefinedBySubstractiveModalComp & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak init_nil (void) {
    GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp bang_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_inputConfigurationForScenario_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_inputConfigurationForScenario_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_luint mProperty_mInputValue ;
  public: inline GGS_luint readProperty_mInputValue (void) const {
    return mProperty_mInputValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_inputConfigurationForScenario_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_luint & in_mInputValue) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_inputConfigurationForScenario_2E_element & operator = (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_inputConfigurationForScenario_2E_element init_21_ (const class GGS_luint & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_inputConfigurationForScenario_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_inputScenario_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_inputScenario_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_L_5F_inputConfigurationForScenario mProperty_mInputConfiguration ;
  public: inline GGS_L_5F_inputConfigurationForScenario readProperty_mInputConfiguration (void) const {
    return mProperty_mInputConfiguration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_inputScenario_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputConfiguration (const GGS_L_5F_inputConfigurationForScenario & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputConfiguration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputScenario_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_inputScenario_2E_element & operator = (const GGS_L_5F_inputScenario_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_inputScenario_2E_element init_21_ (const class GGS_L_5F_inputConfigurationForScenario & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_inputScenario_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_scenarioList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_scenarioList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mScenarioTitle ;
  public: inline GGS_lstring readProperty_mScenarioTitle (void) const {
    return mProperty_mScenarioTitle ;
  }

  public: GGS_L_5F_inputScenario mProperty_mInputScenario ;
  public: inline GGS_L_5F_inputScenario readProperty_mInputScenario (void) const {
    return mProperty_mInputScenario ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_scenarioList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScenarioTitle (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScenarioTitle = inValue ;
  }

  public: inline void setter_setMInputScenario (const GGS_L_5F_inputScenario & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputScenario = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_scenarioList_2E_element (const GGS_lstring & in_mScenarioTitle,
                                            const GGS_L_5F_inputScenario & in_mInputScenario) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_scenarioList_2E_element (const GGS_L_5F_scenarioList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_scenarioList_2E_element & operator = (const GGS_L_5F_scenarioList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_scenarioList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_L_5F_inputScenario & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_scenarioList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_scenarioComponent_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_scenarioComponent_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_scenarioComponent_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_scenarioComponent_2E_weak (const class GGS_C_5F_scenarioComponent & inSource) ;

  public: GGS_C_5F_scenarioComponent_2E_weak & operator = (const class GGS_C_5F_scenarioComponent & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_scenarioComponent_2E_weak init_nil (void) {
    GGS_C_5F_scenarioComponent_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_scenarioComponent bang_C_5F_scenarioComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_scenarioComponent unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_scenarioComponent_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_scenarioComponent_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_scenarioComponent_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDisplayBDDstats_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeDisplayBDDstats_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeDisplayBDDstats_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeDisplayBDDstats_2E_weak (const class GGS_typeDisplayBDDstats & inSource) ;

  public: GGS_typeDisplayBDDstats_2E_weak & operator = (const class GGS_typeDisplayBDDstats & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeDisplayBDDstats_2E_weak init_nil (void) {
    GGS_typeDisplayBDDstats_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeDisplayBDDstats bang_typeDisplayBDDstats_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeDisplayBDDstats unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDisplayBDDstats_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDisplayBDDstats_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDisplayBDDstats_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_jobList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_jobList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_AC_5F_job mProperty_mComponent ;
  public: inline GGS_AC_5F_job readProperty_mComponent (void) const {
    return mProperty_mComponent ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_jobList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMComponent (const GGS_AC_5F_job & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComponent = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_jobList_2E_element (const GGS_AC_5F_job & in_mComponent) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_jobList_2E_element (const GGS_L_5F_jobList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_jobList_2E_element & operator = (const GGS_L_5F_jobList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_jobList_2E_element init_21_ (const class GGS_AC_5F_job & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_jobList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_machinesMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_machinesMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_uint mProperty_mInputVariableCount ;
  public: inline GGS_uint readProperty_mInputVariableCount (void) const {
    return mProperty_mInputVariableCount ;
  }

  public: GGS_uint mProperty_mInputAndInternalVariableCount ;
  public: inline GGS_uint readProperty_mInputAndInternalVariableCount (void) const {
    return mProperty_mInputAndInternalVariableCount ;
  }

  public: GGS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: inline GGS_M_5F_variablesMap readProperty_mVariablesMap (void) const {
    return mProperty_mVariablesMap ;
  }

  public: GGS_stringlist mProperty_mNameList ;
  public: inline GGS_stringlist readProperty_mNameList (void) const {
    return mProperty_mNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_M_5F_machinesMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMInputVariableCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputVariableCount = inValue ;
  }

  public: inline void setter_setMInputAndInternalVariableCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputAndInternalVariableCount = inValue ;
  }

  public: inline void setter_setMVariablesMap (const GGS_M_5F_variablesMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVariablesMap = inValue ;
  }

  public: inline void setter_setMNameList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_M_5F_machinesMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mIndex,
                                           const GGS_uint & in_mInputVariableCount,
                                           const GGS_uint & in_mInputAndInternalVariableCount,
                                           const GGS_M_5F_variablesMap & in_mVariablesMap,
                                           const GGS_stringlist & in_mNameList) ;

//--------------------------------- Copy constructor
  public: GGS_M_5F_machinesMap_2E_element (const GGS_M_5F_machinesMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_M_5F_machinesMap_2E_element & operator = (const GGS_M_5F_machinesMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_machinesMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_uint & inOperand1,
                                                                               const class GGS_uint & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               const class GGS_M_5F_variablesMap & inOperand4,
                                                                               const class GGS_stringlist & inOperand5,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_machinesMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: M_machinesMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_machinesMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_M_5F_machinesMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_M_5F_machinesMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_M_5F_machinesMap_2E_element_3F_ (const GGS_M_5F_machinesMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_M_5F_machinesMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_M_5F_machinesMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_machinesMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR sara_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_sara_5F_grammar : public cParser_sara_5F_parser {
//------------------------------------- 'component' non terminal
//--- 'parse' label
  public: virtual void nt_component_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_component_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_component_ (GGS_semanticContext & ioArgument0,
                                      Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_ (const GGS_semanticContext inArgument0,
                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                     GGS_AC_5F_machineDefinition & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_factor' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_factor_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_factor_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_factor_ (const GGS_semanticContext inArgument0,
                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                               Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_term' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_term_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_term_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_term_ (const GGS_semanticContext inArgument0,
                                                             GGS_M_5F_variablesMap & ioArgument1,
                                                             GGS_AC_5F_machineDefinition & outArgument2,
                                                             Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'explicit_automaton' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_automaton_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_automaton_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_automaton_ (const GGS_semanticContext inArgument0,
                                                  GGS_M_5F_variablesMap & ioArgument1,
                                                  GGS_AC_5F_machineDefinition & outArgument2,
                                                  Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_and_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_and_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_and_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_and_5F_expression_ (const GGS_semanticContext inArgument0,
                                                    GGS_M_5F_variablesMap & ioArgument1,
                                                    GGS_AC_5F_boolExpression & outArgument2,
                                                    Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_bool_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_bool_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_bool_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_bool_5F_expression_ (const GGS_semanticContext inArgument0,
                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                     GGS_AC_5F_boolExpression & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_primary' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_primary_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_primary_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_primary_ (const GGS_semanticContext inArgument0,
                                          GGS_M_5F_variablesMap & ioArgument1,
                                          GGS_AC_5F_boolExpression & outArgument2,
                                          Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompadd_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompadd_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompadd_5F_definition_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompadd_5F_definition_ (const GGS_semanticContext inArgument0,
                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                       GGS_M_5F_modesMap & outArgument2,
                                                       GGS_ListForModes & outArgument3,
                                                       Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompsub_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompsub_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompsub_5F_definition_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompsub_5F_definition_ (const GGS_semanticContext inArgument0,
                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                       GGS_M_5F_modesMap & outArgument2,
                                                       GGS_ListForModes & outArgument3,
                                                       Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (Lexique_sara_5F_scanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

  public: virtual int32_t select_sara_5F_parser_0 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_1 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_2 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_3 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_4 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_5 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_6 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_7 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_8 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_9 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_10 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_11 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_12 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_13 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_14 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_15 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_16 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_17 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_18 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_19 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_20 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_21 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_22 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_23 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_24 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_25 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_26 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_27 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_28 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_29 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_30 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_31 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_32 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_33 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_34 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_35 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_36 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_37 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_38 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_39 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_40 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_41 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_42 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_43 (Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_44 (Lexique_sara_5F_scanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ;

extern BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

