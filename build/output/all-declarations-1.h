#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_scenarioComponent reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_C_5F_scenarioComponent : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_scenarioComponent (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_C_5F_scenarioComponent constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_scenarioComponent (const class cPtr_C_5F_scenarioComponent * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;

  public: class GALGAS_L_5F_scenarioList readProperty_mScenarioList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_scenarioComponent extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_C_5F_scenarioComponent constructor_new (const class GALGAS_uint & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_uint & inOperand2,
                                                                      const class GALGAS_M_5F_variablesMap & inOperand3,
                                                                      const class GALGAS_L_5F_scenarioList & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCount (class GALGAS_uint inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScenarioList (class GALGAS_L_5F_scenarioList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMap (class GALGAS_M_5F_variablesMap inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_scenarioComponent class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;

#include "separateHeaderFor_C_5F_scenarioComponent.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_scenarioComponent_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_C_5F_scenarioComponent_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_scenarioComponent_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_C_5F_scenarioComponent_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_scenarioComponent_2D_weak (const class GALGAS_C_5F_scenarioComponent & inSource) ;

  public: GALGAS_C_5F_scenarioComponent_2D_weak & operator = (const class GALGAS_C_5F_scenarioComponent & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_scenarioComponent bang_C_5F_scenarioComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_scenarioComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_C_5F_scenarioComponent_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_scenarioComponent_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_scenarioComponent_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeDisplayBDDstats : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_typeDisplayBDDstats (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeDisplayBDDstats constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typeDisplayBDDstats (const class cPtr_typeDisplayBDDstats * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDisplayBDDstats extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeDisplayBDDstats constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDisplayBDDstats class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ;

#include "separateHeaderFor_typeDisplayBDDstats.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeDisplayBDDstats_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeDisplayBDDstats_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeDisplayBDDstats_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeDisplayBDDstats_2D_weak (const class GALGAS_typeDisplayBDDstats & inSource) ;

  public: GALGAS_typeDisplayBDDstats_2D_weak & operator = (const class GALGAS_typeDisplayBDDstats & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeDisplayBDDstats bang_typeDisplayBDDstats_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDisplayBDDstats_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeDisplayBDDstats_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeDisplayBDDstats_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDisplayBDDstats_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @L_jobList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_L_5F_jobList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_jobList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_jobList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_AC_5F_job & in_mComponent
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_jobList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_L_5F_jobList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_jobList constructor_listWithValue (const class GALGAS_AC_5F_job & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_jobList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_AC_5F_job & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_jobList add_operation (const GALGAS_L_5F_jobList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_L_5F_jobList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_AC_5F_job constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_AC_5F_job & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_AC_5F_job & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_AC_5F_job & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComponentAtIndex (class GALGAS_AC_5F_job constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_AC_5F_job & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_AC_5F_job & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AC_5F_job getter_mComponentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_jobList ;
 
} ; // End of GALGAS_L_5F_jobList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_jobList : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_AC_5F_job current_mComponent (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_jobList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_jobList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_jobList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & in_mComponent) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_jobList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_L_5F_jobList_2D_element constructor_new (const class GALGAS_AC_5F_job & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_jobList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_jobList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @M_machinesMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_M_5F_machinesMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_machinesMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_M_5F_machinesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_M_5F_machinesMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) ;
  public: GALGAS_M_5F_machinesMap & operator = (const GALGAS_M_5F_machinesMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_machinesMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_M_5F_machinesMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_M_5F_machinesMap constructor_mapWithMapToOverride (const class GALGAS_M_5F_machinesMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_M_5F_variablesMap & inOperand4,
                                                     const class GALGAS_stringlist & inOperand5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_M_5F_machinesMap add_operation (const GALGAS_M_5F_machinesMap & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_M_5F_variablesMap constinArgument4,
                                                  class GALGAS_stringlist constinArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_M_5F_variablesMap & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameListForKey (class GALGAS_stringlist constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMapForKey (class GALGAS_M_5F_variablesMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_M_5F_variablesMap & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNameListForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_machinesMap getter_overriddenMap (C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_machinesMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_machinesMap ;
 
} ; // End of GALGAS_M_5F_machinesMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_machinesMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@M_machinesMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_M_5F_machinesMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_uint mProperty_mInputVariableCount ;
  public: GALGAS_uint mProperty_mInputAndInternalVariableCount ;
  public: GALGAS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GALGAS_stringlist mProperty_mNameList ;

//--- Constructor
  public: cMapElement_M_5F_machinesMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mInputVariableCount,
                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                        const GALGAS_stringlist & in_mNameList
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @M_5F_machinesMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_M_5F_machinesMap_2D_element constructor_default (LOCATION_ARGS) ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_M_5F_machinesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_M_5F_machinesMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex,
                                              const GALGAS_uint & in_mInputVariableCount,
                                              const GALGAS_uint & in_mInputAndInternalVariableCount,
                                              const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                              const GALGAS_stringlist & in_mNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_machinesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_M_5F_machinesMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1,
                                                                           const class GALGAS_uint & inOperand2,
                                                                           const class GALGAS_uint & inOperand3,
                                                                           const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                           const class GALGAS_stringlist & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_M_5F_machinesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_M_5F_machinesMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setComponentsMap (const GALGAS_L_5F_jobList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_componentsMap = inValue ;
  }

  public: inline void setter_setMachinesMap (const GALGAS_M_5F_machinesMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_machinesMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_L_5F_jobList & in_componentsMap,
                                  const GALGAS_M_5F_machinesMap & in_machinesMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticContext constructor_new (const class GALGAS_L_5F_jobList & inOperand0,
                                                               const class GALGAS_M_5F_machinesMap & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'sara_parser' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_sara_5F_parser {
//--- Virtual destructor
  public: virtual ~ cParser_sara_5F_parser (void) {}

//--- Non terminal declarations
  protected: virtual void nt_component_ (class GALGAS_semanticContext & ioArgument0,
                                         class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                        class GALGAS_M_5F_variablesMap & ioArgument1,
                                                        class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                        class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_ (const class GALGAS_semanticContext constinArgument0,
                                                                  class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                  class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                  class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_ (const class GALGAS_semanticContext constinArgument0,
                                                                class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_ (const class GALGAS_semanticContext constinArgument0,
                                                     class GALGAS_M_5F_variablesMap & ioArgument1,
                                                     class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                     class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                       class GALGAS_M_5F_variablesMap & ioArgument1,
                                                       class GALGAS_AC_5F_boolExpression & outArgument2,
                                                       class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                        class GALGAS_M_5F_variablesMap & ioArgument1,
                                                        class GALGAS_AC_5F_boolExpression & outArgument2,
                                                        class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_ (const class GALGAS_semanticContext constinArgument0,
                                             class GALGAS_M_5F_variablesMap & ioArgument1,
                                             class GALGAS_AC_5F_boolExpression & outArgument2,
                                             class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                          class GALGAS_M_5F_variablesMap & ioArgument1,
                                                          class GALGAS_M_5F_modesMap & outArgument2,
                                                          class GALGAS_ListForModes & outArgument3,
                                                          class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                          class GALGAS_M_5F_variablesMap & ioArgument1,
                                                          class GALGAS_M_5F_modesMap & outArgument2,
                                                          class GALGAS_ListForModes & outArgument3,
                                                          class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_sara_5F_parser_start_5F_symbol_i0_ (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_start_5F_symbol_i0_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_start_5F_symbol_i0_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument0,
                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GALGAS_semanticContext constinArgument0,
                                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GALGAS_semanticContext constinArgument0,
                                                                    GALGAS_M_5F_variablesMap & ioArgument1,
                                                                    GALGAS_AC_5F_boolExpression & outArgument2,
                                                                    C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_ (const GALGAS_semanticContext constinArgument0,
                                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                                          C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_ (const GALGAS_semanticContext constinArgument0,
                                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                                     GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GALGAS_semanticContext constinArgument0,
                                                                             GALGAS_M_5F_variablesMap & ioArgument1,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                             C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GALGAS_semanticContext constinArgument0,
                                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                                       GALGAS_ListForModes & outArgument3,
                                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GALGAS_semanticContext constinArgument0,
                                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                                       GALGAS_ListForModes & outArgument3,
                                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GALGAS_semanticContext constinArgument0,
                                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                               C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GALGAS_semanticContext constinArgument0,
                                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                               C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GALGAS_semanticContext constinArgument0,
                                                                  GALGAS_M_5F_variablesMap & ioArgument1,
                                                                  GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                  C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (C_Lexique_sara_5F_scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected: virtual int32_t select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performComputations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performComputations (const class GALGAS_L_5F_jobList constinArgument0,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR sara_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_sara_5F_grammar : public cParser_sara_5F_parser {
//------------------------------------- 'component' non terminal
//--- 'parse' label
  public: virtual void nt_component_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_component_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_component_ (GALGAS_semanticContext & ioArgument0,
                                      C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                     GALGAS_AC_5F_machineDefinition & outArgument2,
                                                     C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_factor' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_factor_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_factor_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_factor_ (const GALGAS_semanticContext inArgument0,
                                                               GALGAS_M_5F_variablesMap & ioArgument1,
                                                               GALGAS_AC_5F_machineDefinition & outArgument2,
                                                               C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_term' non terminal
//--- 'parse' label
  public: virtual void nt_definition_5F_expression_5F_term_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_term_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext inArgument0,
                                                             GALGAS_M_5F_variablesMap & ioArgument1,
                                                             GALGAS_AC_5F_machineDefinition & outArgument2,
                                                             C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'explicit_automaton' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_automaton_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_automaton_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_automaton_ (const GALGAS_semanticContext inArgument0,
                                                  GALGAS_M_5F_variablesMap & ioArgument1,
                                                  GALGAS_AC_5F_machineDefinition & outArgument2,
                                                  C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_and_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_and_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_and_5F_expression_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                    GALGAS_M_5F_variablesMap & ioArgument1,
                                                    GALGAS_AC_5F_boolExpression & outArgument2,
                                                    C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_bool_expression' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_bool_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_bool_5F_expression_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                     C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_primary' non terminal
//--- 'parse' label
  public: virtual void nt_io_5F_primary_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_io_5F_primary_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_primary_ (const GALGAS_semanticContext inArgument0,
                                          GALGAS_M_5F_variablesMap & ioArgument1,
                                          GALGAS_AC_5F_boolExpression & outArgument2,
                                          C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompadd_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompadd_5F_definition_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompadd_5F_definition_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                       GALGAS_ListForModes & outArgument3,
                                                       C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompsub_definition' non terminal
//--- 'parse' label
  public: virtual void nt_modalcompsub_5F_definition_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_modalcompsub_5F_definition_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                       GALGAS_M_5F_variablesMap & ioArgument1,
                                                       GALGAS_M_5F_modesMap & outArgument2,
                                                       GALGAS_ListForModes & outArgument3,
                                                       C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

  public: virtual int32_t select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner *) ;

  public: virtual int32_t select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ;

extern C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'print'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_print (const class GALGAS_string constinArgument0,
                    class C_Compiler * inCompiler
                    COMMA_LOCATION_ARGS) ;

