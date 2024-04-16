#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_scenarioComponent reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_scenarioComponent : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_scenarioComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_scenarioComponent (const class cPtr_C_5F_scenarioComponent * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GALGAS_uint & inValue) ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;
  public: void setProperty_mInputVariableCount (const GALGAS_uint & inValue) ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;
  public: void setProperty_mInputAndInternalVariableCount (const GALGAS_uint & inValue) ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;
  public: void setProperty_mVariablesMap (const GALGAS_M_5F_variablesMap & inValue) ;

  public: class GALGAS_L_5F_scenarioList readProperty_mScenarioList (void) const ;
  public: void setProperty_mScenarioList (const GALGAS_L_5F_scenarioList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_C_5F_scenarioComponent init_21__21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         const class GALGAS_uint & inOperand2,
                                                                         const class GALGAS_M_5F_variablesMap & inOperand3,
                                                                         const class GALGAS_L_5F_scenarioList & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_scenarioComponent extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_scenarioComponent class_func_new (const class GALGAS_uint & inOperand0,
                                                                     const class GALGAS_uint & inOperand1,
                                                                     const class GALGAS_uint & inOperand2,
                                                                     const class GALGAS_M_5F_variablesMap & inOperand3,
                                                                     const class GALGAS_L_5F_scenarioList & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_scenarioComponent class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;

#include "separateHeaderFor_C_5F_scenarioComponent.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_scenarioComponent_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_scenarioComponent_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_scenarioComponent_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_scenarioComponent_2D_weak (const class GALGAS_C_5F_scenarioComponent & inSource) ;

  public: GALGAS_C_5F_scenarioComponent_2D_weak & operator = (const class GALGAS_C_5F_scenarioComponent & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_scenarioComponent bang_C_5F_scenarioComponent_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_scenarioComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_scenarioComponent_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_C_5F_scenarioComponent_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_scenarioComponent_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDisplayBDDstats : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_typeDisplayBDDstats (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typeDisplayBDDstats (const class cPtr_typeDisplayBDDstats * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeDisplayBDDstats init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDisplayBDDstats extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDisplayBDDstats class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDisplayBDDstats class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ;

#include "separateHeaderFor_typeDisplayBDDstats.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDisplayBDDstats_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeDisplayBDDstats_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeDisplayBDDstats_2D_weak (const class GALGAS_typeDisplayBDDstats & inSource) ;

  public: GALGAS_typeDisplayBDDstats_2D_weak & operator = (const class GALGAS_typeDisplayBDDstats & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeDisplayBDDstats bang_typeDisplayBDDstats_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDisplayBDDstats_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDisplayBDDstats_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeDisplayBDDstats_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDisplayBDDstats_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_jobList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_jobList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_jobList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_jobList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_AC_5F_job & in_mComponent
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_L_5F_jobList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_jobList extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_jobList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_jobList class_func_listWithValue (const class GALGAS_AC_5F_job & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_jobList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_AC_5F_job & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_jobList add_operation (const GALGAS_L_5F_jobList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_AC_5F_job constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_AC_5F_job constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_AC_5F_job & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_AC_5F_job & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_AC_5F_job & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComponentAtIndex (class GALGAS_AC_5F_job constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_AC_5F_job & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_AC_5F_job & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AC_5F_job getter_mComponentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_L_5F_jobList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_L_5F_jobList ;
 
} ; // End of GALGAS_L_5F_jobList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_jobList : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_AC_5F_job current_mComponent (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_jobList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_jobList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_jobList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_AC_5F_job mProperty_mComponent ;
  public: inline GALGAS_AC_5F_job readProperty_mComponent (void) const {
    return mProperty_mComponent ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_jobList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMComponent (const GALGAS_AC_5F_job & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComponent = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_L_5F_jobList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & in_mComponent) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_L_5F_jobList_2D_element init_21_ (const class GALGAS_AC_5F_job & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_jobList_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_jobList_2D_element class_func_new (const class GALGAS_AC_5F_job & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_jobList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_machinesMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_machinesMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_machinesMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_machinesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_M_5F_machinesMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) ;
  public: GALGAS_M_5F_machinesMap & operator = (const GALGAS_M_5F_machinesMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_M_5F_machinesMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_machinesMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_machinesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_M_5F_machinesMap class_func_mapWithMapToOverride (const class GALGAS_M_5F_machinesMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_M_5F_variablesMap & inOperand4,
                                                     const class GALGAS_stringlist & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_M_5F_machinesMap add_operation (const GALGAS_M_5F_machinesMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_M_5F_variablesMap constinArgument4,
                                                  class GALGAS_stringlist constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_M_5F_variablesMap & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameListForKey (class GALGAS_stringlist constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMapForKey (class GALGAS_M_5F_variablesMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_M_5F_variablesMap & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNameListForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_machinesMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_M_5F_variablesMap & outOperand4,
                                                    class GALGAS_stringlist & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_machinesMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_M_5F_machinesMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_M_5F_machinesMap ;
 
} ; // End of GALGAS_M_5F_machinesMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_machinesMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mInputVariableCount (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mInputAndInternalVariableCount (LOCATION_ARGS) const ;
  public: class GALGAS_M_5F_variablesMap current_mVariablesMap (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_M_5F_machinesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@M_machinesMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_machinesMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_uint mProperty_mInputVariableCount ;
  public: GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public: GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GALGAS_stringlist mProperty_mNameList ;

//--- Constructors
  public: cMapElement_M_5F_machinesMap (const GALGAS_M_5F_machinesMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_M_5F_machinesMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mInputVariableCount,
                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                        const GALGAS_stringlist & in_mNameList
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_5F_machinesMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_machinesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_uint mProperty_mInputVariableCount ;
  public: inline GALGAS_uint readProperty_mInputVariableCount (void) const {
    return mProperty_mInputVariableCount ;
  }

  public: GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public: inline GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const {
    return mProperty_mInputAndInternalVariableCount ;
  }

  public: GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: inline GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const {
    return mProperty_mVariablesMap ;
  }

  public: GALGAS_stringlist mProperty_mNameList ;
  public: inline GALGAS_stringlist readProperty_mNameList (void) const {
    return mProperty_mNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_M_5F_machinesMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMInputVariableCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputVariableCount = inValue ;
  }

  public: inline void setter_setMInputAndInternalVariableCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputAndInternalVariableCount = inValue ;
  }

  public: inline void setter_setMVariablesMap (const GALGAS_M_5F_variablesMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVariablesMap = inValue ;
  }

  public: inline void setter_setMNameList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_M_5F_machinesMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_M_5F_machinesMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex,
                                              const GALGAS_uint & in_mInputVariableCount,
                                              const GALGAS_uint & in_mInputAndInternalVariableCount,
                                              const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                              const GALGAS_stringlist & in_mNameList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_M_5F_machinesMap_2D_element init_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2,
                                                                                  const class GALGAS_uint & inOperand3,
                                                                                  const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                                  const class GALGAS_stringlist & inOperand5,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_machinesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_machinesMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1,
                                                                          const class GALGAS_uint & inOperand2,
                                                                          const class GALGAS_uint & inOperand3,
                                                                          const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                          const class GALGAS_stringlist & inOperand5,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_M_5F_machinesMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_L_5F_jobList mProperty_componentsMap ;
  public: inline GALGAS_L_5F_jobList readProperty_componentsMap (void) const {
    return mProperty_componentsMap ;
  }

  public: GALGAS_M_5F_machinesMap mProperty_machinesMap ;
  public: inline GALGAS_M_5F_machinesMap readProperty_machinesMap (void) const {
    return mProperty_machinesMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setComponentsMap (const GALGAS_L_5F_jobList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_componentsMap = inValue ;
  }

  public: inline void setter_setMachinesMap (const GALGAS_M_5F_machinesMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_machinesMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_L_5F_jobList & in_componentsMap,
                                  const GALGAS_M_5F_machinesMap & in_machinesMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticContext init_21__21_ (const class GALGAS_L_5F_jobList & inOperand0,
                                                      const class GALGAS_M_5F_machinesMap & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticContext class_func_new (const class GALGAS_L_5F_jobList & inOperand0,
                                                              const class GALGAS_M_5F_machinesMap & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'sara_parser' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_sara_5F_parser {
//--- Virtual destructor
  public: virtual ~ cParser_sara_5F_parser (void) { }

//--- Non terminal declarations
  protected: virtual void nt_component_ (class GALGAS_semanticContext & ioArgument0,
                                         class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                        class GALGAS_M_5F_variablesMap & ioArgument1,
                                                        class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_ (const class GALGAS_semanticContext constinArgument0,
                                                                  class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                  class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                  class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_ (const class GALGAS_semanticContext constinArgument0,
                                                                class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_ (const class GALGAS_semanticContext constinArgument0,
                                                     class GALGAS_M_5F_variablesMap & ioArgument1,
                                                     class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                     class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                       class GALGAS_M_5F_variablesMap & ioArgument1,
                                                       class GALGAS_AC_5F_boolExpression & outArgument2,
                                                       class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                        class GALGAS_M_5F_variablesMap & ioArgument1,
                                                        class GALGAS_AC_5F_boolExpression & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_ (const class GALGAS_semanticContext constinArgument0,
                                             class GALGAS_M_5F_variablesMap & ioArgument1,
                                             class GALGAS_AC_5F_boolExpression & outArgument2,
                                             class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                          class GALGAS_M_5F_variablesMap & ioArgument1,
                                                          class GALGAS_M_5F_modesMap & outArgument2,
                                                          class GALGAS_ListForModes & outArgument3,
                                                          class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                          class GALGAS_M_5F_variablesMap & ioArgument1,
                                                          class GALGAS_M_5F_modesMap & outArgument2,
                                                          class GALGAS_ListForModes & outArgument3,
                                                          class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_sara_5F_parser_start_5F_symbol_i0_ (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_start_5F_symbol_i0_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_start_5F_symbol_i0_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GALGAS_semanticContext constinArgument0,
                                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GALGAS_semanticContext constinArgument0,
                                                                    GALGAS_M_5F_variablesMap & ioArgument1,
                                                                    GALGAS_AC_5F_boolExpression & outArgument2,
                                                                    Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_ (const GALGAS_semanticContext constinArgument0,
                                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                                     GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GALGAS_semanticContext constinArgument0,
                                                                             GALGAS_M_5F_variablesMap & ioArgument1,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                             Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GALGAS_semanticContext constinArgument0,
                                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                                       GALGAS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GALGAS_semanticContext constinArgument0,
                                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                                       GALGAS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GALGAS_semanticContext constinArgument0,
                                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GALGAS_semanticContext constinArgument0,
                                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GALGAS_semanticContext constinArgument0,
                                                                  GALGAS_M_5F_variablesMap & ioArgument1,
                                                                  GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                  Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (Lexique_sara_5F_scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_sara_5F_parser_0 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_1 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_2 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_3 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_4 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_5 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_6 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_7 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_8 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_9 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_10 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_11 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_12 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_13 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_14 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_15 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_16 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_17 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_18 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_19 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_20 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_21 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_22 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_23 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_24 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_25 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_26 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_27 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_28 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_29 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_30 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_31 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_32 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_33 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_34 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_35 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_36 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_37 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_38 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_39 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_40 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_41 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_42 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_43 (Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_44 (Lexique_sara_5F_scanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performComputations?'
//
//--------------------------------------------------------------------------------------------------

void routine_performComputations_3F_ (const class GALGAS_L_5F_jobList constinArgument0,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

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
  public: virtual void nt_component_ (GALGAS_semanticContext & ioArgument0,
                                      Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                     GALGAS_AC_5F_machineDefinition & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_factor' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_factor_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_factor_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_factor_ (const GALGAS_semanticContext inArgument0,
                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                               Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_term' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_term_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_term_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext inArgument0,
                                                             GALGAS_M_5F_variablesMap & ioArgument1,
                                                             GALGAS_AC_5F_machineDefinition & outArgument2,
                                                             Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'explicit_automaton' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_automaton_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_automaton_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_automaton_ (const GALGAS_semanticContext inArgument0,
                                                  GALGAS_M_5F_variablesMap & ioArgument1,
                                                  GALGAS_AC_5F_machineDefinition & outArgument2,
                                                  Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_and_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_and_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_and_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                    GALGAS_M_5F_variablesMap & ioArgument1,
                                                    GALGAS_AC_5F_boolExpression & outArgument2,
                                                    Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_bool_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_bool_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_bool_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_primary' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_primary_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_primary_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_primary_ (const GALGAS_semanticContext inArgument0,
                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                          Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompadd_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompadd_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompadd_5F_definition_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                       GALGAS_ListForModes & outArgument3,
                                                       Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompsub_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompsub_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompsub_5F_definition_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                       GALGAS_ListForModes & outArgument3,
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
                                                  GALGAS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString
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

void routine_println_3F_ (const class GALGAS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GALGAS_string constinArgument0,
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

