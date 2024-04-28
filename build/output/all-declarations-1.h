#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_scenarioComponent_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_scenarioComponent_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_scenarioComponent_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_scenarioComponent_2E_weak (const class GGS_C_5F_scenarioComponent & inSource) ;

  public: GGS_C_5F_scenarioComponent_2E_weak & operator = (const class GGS_C_5F_scenarioComponent & inSource) ;

//--------------------------------- Bang operator
  public: GGS_C_5F_scenarioComponent bang_C_5F_scenarioComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_C_5F_scenarioComponent_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDisplayBDDstats : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_typeDisplayBDDstats (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeDisplayBDDstats (const class cPtr_typeDisplayBDDstats * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDisplayBDDstats init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDisplayBDDstats extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDisplayBDDstats class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDisplayBDDstats & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDisplayBDDstats class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ;

#include "separateHeaderFor_typeDisplayBDDstats.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDisplayBDDstats_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDisplayBDDstats_2E_weak : public GGS_AC_5F_job_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeDisplayBDDstats_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeDisplayBDDstats_2E_weak (const class GGS_typeDisplayBDDstats & inSource) ;

  public: GGS_typeDisplayBDDstats_2E_weak & operator = (const class GGS_typeDisplayBDDstats & inSource) ;

//--------------------------------- Bang operator
  public: GGS_typeDisplayBDDstats bang_typeDisplayBDDstats_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDisplayBDDstats_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_jobList list
//
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_jobList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_L_5F_jobList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_L_5F_jobList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_AC_5F_job & in_mComponent
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_jobList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_jobList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_jobList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_L_5F_jobList class_func_listWithValue (const class GGS_AC_5F_job & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_L_5F_jobList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_AC_5F_job & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_L_5F_jobList add_operation (const GGS_L_5F_jobList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_AC_5F_job constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_AC_5F_job constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_AC_5F_job & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_AC_5F_job & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_AC_5F_job & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComponentAtIndex (class GGS_AC_5F_job constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_AC_5F_job & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_AC_5F_job & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AC_5F_job getter_mComponentAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_jobList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_jobList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_jobList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_L_5F_jobList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_L_5F_jobList ;
 
} ; // End of GGS_L_5F_jobList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_jobList : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_jobList (const GGS_L_5F_jobList & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_AC_5F_job current_mComponent (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_jobList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_jobList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_L_5F_jobList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_jobList_2E_element (const GGS_AC_5F_job & in_mComponent) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_jobList_2E_element class_func_new (const class GGS_AC_5F_job & inOperand0,
                                                                   class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_L_5F_jobList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_machinesMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_machinesMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_machinesMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_M_5F_machinesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_M_5F_machinesMap (void) ;

//--------------------------------- Handle copy
  public: GGS_M_5F_machinesMap (const GGS_M_5F_machinesMap & inSource) ;
  public: GGS_M_5F_machinesMap & operator = (const GGS_M_5F_machinesMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_machinesMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_machinesMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_machinesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_M_5F_machinesMap class_func_mapWithMapToOverride (const class GGS_M_5F_machinesMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_uint & inOperand3,
                                                     const class GGS_M_5F_variablesMap & inOperand4,
                                                     const class GGS_stringlist & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_M_5F_machinesMap add_operation (const GGS_M_5F_machinesMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  class GGS_M_5F_variablesMap constinArgument4,
                                                  class GGS_stringlist constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_M_5F_variablesMap & outArgument4,
                                                  class GGS_stringlist & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCountForKey (class GGS_uint constinArgument0,
                                                                                class GGS_string constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCountForKey (class GGS_uint constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameListForKey (class GGS_stringlist constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMapForKey (class GGS_M_5F_variablesMap constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_M_5F_variablesMap & outArgument4,
                                                  class GGS_stringlist & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mInputAndInternalVariableCountForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mInputVariableCountForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mNameListForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_M_5F_variablesMap getter_mVariablesMapForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_M_5F_machinesMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_M_5F_machinesMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_machinesMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_M_5F_machinesMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_M_5F_machinesMap ;
 
} ; // End of GGS_M_5F_machinesMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_machinesMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_machinesMap (const GGS_M_5F_machinesMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInputVariableCount (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInputAndInternalVariableCount (LOCATION_ARGS) const ;
  public: class GGS_M_5F_variablesMap current_mVariablesMap (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_M_5F_machinesMap_2E_element current (LOCATION_ARGS) const ;
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
  public: GGS_uint mProperty_mIndex ;
  public: GGS_uint mProperty_mInputVariableCount ;
  public: GGS_uint mProperty_mInputAndInternalVariableCount ;
  public: GGS_M_5F_variablesMap mProperty_mVariablesMap ;
  public: GGS_stringlist mProperty_mNameList ;

//--- Constructors
  public: cMapElement_M_5F_machinesMap (const GGS_M_5F_machinesMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_M_5F_machinesMap (const GGS_lstring & inKey,
                                        const GGS_uint & in_mIndex,
                                        const GGS_uint & in_mInputVariableCount,
                                        const GGS_uint & in_mInputAndInternalVariableCount,
                                        const GGS_M_5F_variablesMap & in_mVariablesMap,
                                        const GGS_stringlist & in_mNameList
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
// Phase 1: @M_5F_machinesMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_M_5F_machinesMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_M_5F_machinesMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mIndex,
                                           const GGS_uint & in_mInputVariableCount,
                                           const GGS_uint & in_mInputAndInternalVariableCount,
                                           const GGS_M_5F_variablesMap & in_mVariablesMap,
                                           const GGS_stringlist & in_mNameList) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_machinesMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       const class GGS_uint & inOperand3,
                                                                       const class GGS_M_5F_variablesMap & inOperand4,
                                                                       const class GGS_stringlist & inOperand5,
                                                                       class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_M_5F_machinesMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: M_machinesMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_machinesMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_M_5F_machinesMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_M_5F_machinesMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_M_5F_machinesMap_2E_element_3F_ (const GGS_M_5F_machinesMap_2E_element & inValue) ;
  public: static GGS_M_5F_machinesMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_M_5F_machinesMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_L_5F_jobList mProperty_componentsMap ;
  public: inline GGS_L_5F_jobList readProperty_componentsMap (void) const {
    return mProperty_componentsMap ;
  }

  public: GGS_M_5F_machinesMap mProperty_machinesMap ;
  public: inline GGS_M_5F_machinesMap readProperty_machinesMap (void) const {
    return mProperty_machinesMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setComponentsMap (const GGS_L_5F_jobList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_componentsMap = inValue ;
  }

  public: inline void setter_setMachinesMap (const GGS_M_5F_machinesMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_machinesMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_L_5F_jobList & in_componentsMap,
                               const GGS_M_5F_machinesMap & in_machinesMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init_21__21_ (const class GGS_L_5F_jobList & inOperand0,
                                                   const class GGS_M_5F_machinesMap & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticContext class_func_new (const class GGS_L_5F_jobList & inOperand0,
                                                           const class GGS_M_5F_machinesMap & inOperand1,
                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticContext class


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
  protected: virtual void nt_component_ (class GGS_semanticContext & ioArgument0,
                                         class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_component_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                        class GGS_M_5F_variablesMap & ioArgument1,
                                                        class GGS_AC_5F_machineDefinition & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_ (const class GGS_semanticContext constinArgument0,
                                                                  class GGS_M_5F_variablesMap & ioArgument1,
                                                                  class GGS_AC_5F_machineDefinition & outArgument2,
                                                                  class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_ (const class GGS_semanticContext constinArgument0,
                                                                class GGS_M_5F_variablesMap & ioArgument1,
                                                                class GGS_AC_5F_machineDefinition & outArgument2,
                                                                class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_ (const class GGS_semanticContext constinArgument0,
                                                     class GGS_M_5F_variablesMap & ioArgument1,
                                                     class GGS_AC_5F_machineDefinition & outArgument2,
                                                     class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                       class GGS_M_5F_variablesMap & ioArgument1,
                                                       class GGS_AC_5F_boolExpression & outArgument2,
                                                       class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                        class GGS_M_5F_variablesMap & ioArgument1,
                                                        class GGS_AC_5F_boolExpression & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_ (const class GGS_semanticContext constinArgument0,
                                             class GGS_M_5F_variablesMap & ioArgument1,
                                             class GGS_AC_5F_boolExpression & outArgument2,
                                             class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_ (const class GGS_semanticContext constinArgument0,
                                                          class GGS_M_5F_variablesMap & ioArgument1,
                                                          class GGS_M_5F_modesMap & outArgument2,
                                                          class GGS_ListForModes & outArgument3,
                                                          class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_parse (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_ (const class GGS_semanticContext constinArgument0,
                                                          class GGS_M_5F_variablesMap & ioArgument1,
                                                          class GGS_M_5F_modesMap & outArgument2,
                                                          class GGS_ListForModes & outArgument3,
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

  protected: void rule_sara_5F_parser_component_i1_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GGS_semanticContext constinArgument0,
                                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                                     GGS_AC_5F_boolExpression & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GGS_semanticContext constinArgument0,
                                                                    GGS_M_5F_variablesMap & ioArgument1,
                                                                    GGS_AC_5F_boolExpression & outArgument2,
                                                                    Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_ (const GGS_semanticContext constinArgument0,
                                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                                     GGS_AC_5F_machineDefinition & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GGS_semanticContext constinArgument0,
                                                                             GGS_M_5F_variablesMap & ioArgument1,
                                                                             GGS_AC_5F_machineDefinition & outArgument2,
                                                                             Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GGS_semanticContext constinArgument0,
                                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                                       GGS_M_5F_modesMap & outArgument2,
                                                                       GGS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GGS_semanticContext constinArgument0,
                                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                                       GGS_M_5F_modesMap & outArgument2,
                                                                       GGS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GGS_semanticContext constinArgument0,
                                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GGS_semanticContext constinArgument0,
                                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GGS_semanticContext constinArgument0,
                                                                  GGS_M_5F_variablesMap & ioArgument1,
                                                                  GGS_AC_5F_machineDefinition & outArgument2,
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

void routine_performComputations_3F_ (const class GGS_L_5F_jobList constinArgument0,
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

