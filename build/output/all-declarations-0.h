#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mValue_30_,
                                                 const class GALGAS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS__32_lstringlist class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS__32_lstringlist add_operation (const GALGAS__32_lstringlist & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_30_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_31_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GALGAS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS__32_lstringlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mValue_30_ ;
  public: inline GALGAS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GALGAS_lstring mProperty_mValue_31_ ;
  public: inline GALGAS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & in_mValue_30_,
                                             const GALGAS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS__32_lstringlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE sara_5F_scanner
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_sara_5F_scanner : public cToken {
  public: String mLexicalAttribute_identifierString ;
  public: uint32_t mLexicalAttribute_ulongValue ;

  public: cTokenFor_sara_5F_scanner (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_sara_5F_scanner : public Lexique {
//--- Constructors
  public: Lexique_sara_5F_scanner (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_sara_5F_scanner (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_sara_5F_scanner (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_literal_5F_string,
   kToken_machineIdf,
   kToken_literal_5F_integer,
   kToken_comment,
   kToken_auto,
   kToken_state,
   kToken_first,
   kToken_last,
   kToken_goto,
   kToken_true,
   kToken_false,
   kToken_nofirst,
   kToken_nolast,
   kToken_modalcompadd,
   kToken_exclude,
   kToken_modalcompsub,
   kToken_include,
   kToken_to,
   kToken_scenario,
   kToken_trans,
   kToken_display,
   kToken_bdd,
   kToken_bool,
   kToken_map,
   kToken_check,
   kToken_checkbool,
   kToken_checkidentical,
   kToken__2C_,
   kToken__3B_,
   kToken__3A_,
   kToken__7B_,
   kToken__7D_,
   kToken__2D__3E_,
   kToken__26_,
   kToken__7E_,
   kToken__3F_,
   kToken__21_,
   kToken__7C_,
   kToken__7C__7C_,
   kToken__2B_,
   kToken__28_,
   kToken__29_,
   kToken__3A__3D_,
   kToken__5E_,
   kToken__3D_,
   kToken__2A_,
   kToken__40_,
   kToken__2A__2A_} ;

//--- Key words table 'keyWordList'
  public: static int32_t search_into_keyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GALGAS_luint synthetizedAttribute_ulongValue (void) const ;


//--- Attribute access
  public: String attributeValue_identifierString (void) const ;
  public: uint32_t attributeValue_ulongValue (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_sara_5F_scanner & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 49 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_sara_5F_scanner & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_variablesMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_variablesMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_variablesMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_variablesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_M_5F_variablesMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inSource) ;
  public: GALGAS_M_5F_variablesMap & operator = (const GALGAS_M_5F_variablesMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_variablesMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_variablesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_M_5F_variablesMap class_func_mapWithMapToOverride (const class GALGAS_M_5F_variablesMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_M_5F_variablesMap add_operation (const GALGAS_M_5F_variablesMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_variablesMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_variablesMap ;
 
} ; // End of GALGAS_M_5F_variablesMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_variablesMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_M_5F_variablesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@M_variablesMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_variablesMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_M_5F_variablesMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mIndex
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_5F_variablesMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_variablesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_M_5F_variablesMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_M_5F_variablesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_M_5F_variablesMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mIndex) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_variablesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_variablesMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_M_5F_variablesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_M_5F_variablesMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_stateMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_stateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_stateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_stateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_M_5F_stateMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_M_5F_stateMap (const GALGAS_M_5F_stateMap & inSource) ;
  public: GALGAS_M_5F_stateMap & operator = (const GALGAS_M_5F_stateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_stateMap extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_stateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_M_5F_stateMap class_func_mapWithMapToOverride (const class GALGAS_M_5F_stateMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_M_5F_stateMap add_operation (const GALGAS_M_5F_stateMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_defineState (class GALGAS_lstring constinArgument0,
                                                    class GALGAS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_stateMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_stateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_stateMap ;
 
} ; // End of GALGAS_M_5F_stateMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_stateMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_stateMap (const GALGAS_M_5F_stateMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_M_5F_stateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@M_stateMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_stateMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_M_5F_stateMap (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mIndex
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_5F_stateMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_stateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_M_5F_stateMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_M_5F_stateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_M_5F_stateMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uint & in_mIndex) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_stateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_stateMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_uint & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_M_5F_stateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_M_5F_stateMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_translationVector list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_translationVector : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_translationVector (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_translationVector (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mTargetSlot
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_translationVector extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_translationVector class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_translationVector class_func_listWithValue (const class GALGAS_uint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_translationVector inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_translationVector add_operation (const GALGAS_L_5F_translationVector & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetSlotAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetSlotAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_translationVector ;
 
} ; // End of GALGAS_L_5F_translationVector class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_translationVector : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_translationVector (const GALGAS_L_5F_translationVector & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mTargetSlot (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_translationVector_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_translationVector_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_translationVector_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mTargetSlot ;
  public: inline GALGAS_uint readProperty_mTargetSlot (void) const {
    return mProperty_mTargetSlot ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_translationVector_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetSlot (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetSlot = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_translationVector_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_translationVector_2D_element (const GALGAS_uint & in_mTargetSlot) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_translationVector_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_translationVector_2D_element class_func_new (const class GALGAS_uint & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_translationVector_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_translationVector_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_boolExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_boolExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_boolExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_AC_5F_boolExpression (const class cPtr_AC_5F_boolExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_boolExpression extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_boolExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_boolExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression ;

#include "separateHeaderFor_AC_5F_boolExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_boolExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_boolExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_boolExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_AC_5F_boolExpression_2D_weak (const class GALGAS_AC_5F_boolExpression & inSource) ;

  public: GALGAS_AC_5F_boolExpression_2D_weak & operator = (const class GALGAS_AC_5F_boolExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_AC_5F_boolExpression bang_AC_5F_boolExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_boolExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AC_5F_boolExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_boolExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_boolExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_importBoolMachine reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_importBoolMachine : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_importBoolMachine (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_importBoolMachine (const class cPtr_C_5F_importBoolMachine * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mIndexOfImportedMachine (void) const ;

  public: class GALGAS_location readProperty_mErrorLocation (void) const ;

  public: class GALGAS_L_5F_translationVector readProperty_mTranslationVector (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_importBoolMachine extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_importBoolMachine class_func_new (const class GALGAS_uint & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_L_5F_translationVector & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_importBoolMachine & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocation (class GALGAS_location inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexOfImportedMachine (class GALGAS_uint inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTranslationVector (class GALGAS_L_5F_translationVector inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_importBoolMachine class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;

#include "separateHeaderFor_C_5F_importBoolMachine.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_importBoolMachine_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_importBoolMachine_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_importBoolMachine_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_importBoolMachine_2D_weak (const class GALGAS_C_5F_importBoolMachine & inSource) ;

  public: GALGAS_C_5F_importBoolMachine_2D_weak & operator = (const class GALGAS_C_5F_importBoolMachine & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_importBoolMachine bang_C_5F_importBoolMachine_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_importBoolMachine_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_importBoolMachine_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_importBoolMachine_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_importBoolMachine_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_andExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_andExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_andExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_andExpression (const class cPtr_C_5F_andExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_andExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_andExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                 const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_andExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_andExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_andExpression ;

#include "separateHeaderFor_C_5F_andExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_andExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_andExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_andExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_andExpression_2D_weak (const class GALGAS_C_5F_andExpression & inSource) ;

  public: GALGAS_C_5F_andExpression_2D_weak & operator = (const class GALGAS_C_5F_andExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_andExpression bang_C_5F_andExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_andExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_andExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_andExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_andExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_andExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_orExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_orExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_orExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_orExpression (const class cPtr_C_5F_orExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_orExpression extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_orExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_orExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_orExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orExpression ;

#include "separateHeaderFor_C_5F_orExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_orExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_orExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_orExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_orExpression_2D_weak (const class GALGAS_C_5F_orExpression & inSource) ;

  public: GALGAS_C_5F_orExpression_2D_weak & operator = (const class GALGAS_C_5F_orExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_orExpression bang_C_5F_orExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_orExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_orExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_orExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_orExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_xorExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_xorExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_xorExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_xorExpression (const class cPtr_C_5F_xorExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_xorExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_xorExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                 const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_xorExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_xorExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_xorExpression ;

#include "separateHeaderFor_C_5F_xorExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_xorExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_xorExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_xorExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_xorExpression_2D_weak (const class GALGAS_C_5F_xorExpression & inSource) ;

  public: GALGAS_C_5F_xorExpression_2D_weak & operator = (const class GALGAS_C_5F_xorExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_xorExpression bang_C_5F_xorExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_xorExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_xorExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_xorExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_xorExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_xorExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_impliesExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_impliesExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_impliesExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_impliesExpression (const class cPtr_C_5F_impliesExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_impliesExpression extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_impliesExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                     const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_impliesExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_impliesExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression ;

#include "separateHeaderFor_C_5F_impliesExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_impliesExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_impliesExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_impliesExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_impliesExpression_2D_weak (const class GALGAS_C_5F_impliesExpression & inSource) ;

  public: GALGAS_C_5F_impliesExpression_2D_weak & operator = (const class GALGAS_C_5F_impliesExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_impliesExpression bang_C_5F_impliesExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_impliesExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_impliesExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_impliesExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_impliesExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_equalExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_equalExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_equalExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_equalExpression (const class cPtr_C_5F_equalExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_equalExpression extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_equalExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                   const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_equalExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_equalExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_equalExpression ;

#include "separateHeaderFor_C_5F_equalExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_equalExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_equalExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_equalExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_equalExpression_2D_weak (const class GALGAS_C_5F_equalExpression & inSource) ;

  public: GALGAS_C_5F_equalExpression_2D_weak & operator = (const class GALGAS_C_5F_equalExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_equalExpression bang_C_5F_equalExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_equalExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_equalExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_equalExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_equalExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_equalExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_notExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_notExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_notExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_notExpression (const class cPtr_C_5F_notExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_notExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_notExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_notExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_notExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_notExpression ;

#include "separateHeaderFor_C_5F_notExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_notExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_notExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_notExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_notExpression_2D_weak (const class GALGAS_C_5F_notExpression & inSource) ;

  public: GALGAS_C_5F_notExpression_2D_weak & operator = (const class GALGAS_C_5F_notExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_notExpression bang_C_5F_notExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_notExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_notExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_notExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_notExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_notExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_VariableExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_VariableExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_VariableExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_VariableExpression (const class cPtr_C_5F_VariableExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mInputVarIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_VariableExpression extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_VariableExpression class_func_new (const class GALGAS_uint & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_VariableExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInputVarIndex (class GALGAS_uint inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_VariableExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression ;

#include "separateHeaderFor_C_5F_VariableExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_VariableExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_VariableExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_VariableExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_VariableExpression_2D_weak (const class GALGAS_C_5F_VariableExpression & inSource) ;

  public: GALGAS_C_5F_VariableExpression_2D_weak & operator = (const class GALGAS_C_5F_VariableExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_VariableExpression bang_C_5F_VariableExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_VariableExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_VariableExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_VariableExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_VariableExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_trueExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_trueExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_trueExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_trueExpression (const class cPtr_C_5F_trueExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_trueExpression extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_trueExpression class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_trueExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trueExpression ;

#include "separateHeaderFor_C_5F_trueExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_trueExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_trueExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_trueExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_trueExpression_2D_weak (const class GALGAS_C_5F_trueExpression & inSource) ;

  public: GALGAS_C_5F_trueExpression_2D_weak & operator = (const class GALGAS_C_5F_trueExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_trueExpression bang_C_5F_trueExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_trueExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_trueExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_trueExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_trueExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trueExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_falseExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_falseExpression : public GALGAS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_falseExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_falseExpression (const class cPtr_C_5F_falseExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_falseExpression extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_falseExpression class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_falseExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_falseExpression ;

#include "separateHeaderFor_C_5F_falseExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_falseExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_falseExpression_2D_weak : public GALGAS_AC_5F_boolExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_falseExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_falseExpression_2D_weak (const class GALGAS_C_5F_falseExpression & inSource) ;

  public: GALGAS_C_5F_falseExpression_2D_weak & operator = (const class GALGAS_C_5F_falseExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_falseExpression bang_C_5F_falseExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_falseExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_falseExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_falseExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_falseExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_falseExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_transitionDefinition list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_transitionDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_transitionDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_transitionDefinition (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                 const class GALGAS_location & in_mEndOfExpression,
                                                 const class GALGAS_uint & in_mTargetStateIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_transitionDefinition extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_transitionDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_transitionDefinition class_func_listWithValue (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_transitionDefinition inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                     const class GALGAS_location & inOperand1,
                                                     const class GALGAS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_transitionDefinition add_operation (const GALGAS_L_5F_transitionDefinition & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_AC_5F_boolExpression constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               class GALGAS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_AC_5F_boolExpression constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionExpressionAtIndex (class GALGAS_AC_5F_boolExpression constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionAtIndex (class GALGAS_location constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetStateIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_AC_5F_boolExpression & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_AC_5F_boolExpression & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mActionExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_transitionDefinition ;
 
} ; // End of GALGAS_L_5F_transitionDefinition class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_transitionDefinition : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_AC_5F_boolExpression current_mActionExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfExpression (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_transitionDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_transitionDefinition_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_transitionDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_AC_5F_boolExpression mProperty_mActionExpression ;
  public: inline GALGAS_AC_5F_boolExpression readProperty_mActionExpression (void) const {
    return mProperty_mActionExpression ;
  }

  public: GALGAS_location mProperty_mEndOfExpression ;
  public: inline GALGAS_location readProperty_mEndOfExpression (void) const {
    return mProperty_mEndOfExpression ;
  }

  public: GALGAS_uint mProperty_mTargetStateIndex ;
  public: inline GALGAS_uint readProperty_mTargetStateIndex (void) const {
    return mProperty_mTargetStateIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_transitionDefinition_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActionExpression (const GALGAS_AC_5F_boolExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

  public: inline void setter_setMTargetStateIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetStateIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_transitionDefinition_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_transitionDefinition_2D_element (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                       const GALGAS_location & in_mEndOfExpression,
                                                       const GALGAS_uint & in_mTargetStateIndex) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_transitionDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_transitionDefinition_2D_element class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_transitionDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_transitionDefinition_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_stateDefinition list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_stateDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_stateDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_stateDefinition (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mStateIndex,
                                                 const class GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                 const class GALGAS_location & in_mEndOfStateExpression,
                                                 const class GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_stateDefinition extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_stateDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_stateDefinition class_func_listWithValue (const class GALGAS_uint & inOperand0,
                                                                             const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                                             const class GALGAS_location & inOperand2,
                                                                             const class GALGAS_L_5F_transitionDefinition & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_stateDefinition inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                     const class GALGAS_location & inOperand2,
                                                     const class GALGAS_L_5F_transitionDefinition & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_stateDefinition add_operation (const GALGAS_L_5F_stateDefinition & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uint constinArgument0,
                                               class GALGAS_AC_5F_boolExpression constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               class GALGAS_L_5F_transitionDefinition constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_AC_5F_boolExpression constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_L_5F_transitionDefinition constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_AC_5F_boolExpression & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_AC_5F_boolExpression & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_AC_5F_boolExpression & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfStateExpressionAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateExpressionAtIndex (class GALGAS_AC_5F_boolExpression constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransitionsListAtIndex (class GALGAS_L_5F_transitionDefinition constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_AC_5F_boolExpression & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_L_5F_transitionDefinition & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_AC_5F_boolExpression & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             class GALGAS_L_5F_transitionDefinition & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfStateExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mStateExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_mTransitionsListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_stateDefinition ;
 
} ; // End of GALGAS_L_5F_stateDefinition class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_stateDefinition : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GALGAS_AC_5F_boolExpression current_mStateExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfStateExpression (LOCATION_ARGS) const ;
  public: class GALGAS_L_5F_transitionDefinition current_mTransitionsList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_stateDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_stateDefinition_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_stateDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mStateIndex ;
  public: inline GALGAS_uint readProperty_mStateIndex (void) const {
    return mProperty_mStateIndex ;
  }

  public: GALGAS_AC_5F_boolExpression mProperty_mStateExpression ;
  public: inline GALGAS_AC_5F_boolExpression readProperty_mStateExpression (void) const {
    return mProperty_mStateExpression ;
  }

  public: GALGAS_location mProperty_mEndOfStateExpression ;
  public: inline GALGAS_location readProperty_mEndOfStateExpression (void) const {
    return mProperty_mEndOfStateExpression ;
  }

  public: GALGAS_L_5F_transitionDefinition mProperty_mTransitionsList ;
  public: inline GALGAS_L_5F_transitionDefinition readProperty_mTransitionsList (void) const {
    return mProperty_mTransitionsList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_stateDefinition_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStateIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateIndex = inValue ;
  }

  public: inline void setter_setMStateExpression (const GALGAS_AC_5F_boolExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateExpression = inValue ;
  }

  public: inline void setter_setMEndOfStateExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfStateExpression = inValue ;
  }

  public: inline void setter_setMTransitionsList (const GALGAS_L_5F_transitionDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransitionsList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_stateDefinition_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_stateDefinition_2D_element (const GALGAS_uint & in_mStateIndex,
                                                  const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                  const GALGAS_location & in_mEndOfStateExpression,
                                                  const GALGAS_L_5F_transitionDefinition & in_mTransitionsList) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_stateDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_stateDefinition_2D_element class_func_new (const class GALGAS_uint & inOperand0,
                                                                              const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                                              const class GALGAS_location & inOperand2,
                                                                              const class GALGAS_L_5F_transitionDefinition & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_stateDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_stateDefinition_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_statesDefinitionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_statesDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_statesDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_statesDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mStateIndex,
                                                 const class GALGAS_location & in_mStateLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_statesDefinitionList extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_statesDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_statesDefinitionList class_func_listWithValue (const class GALGAS_uint & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_statesDefinitionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList add_operation (const GALGAS_L_5F_statesDefinitionList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uint constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mStateLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_statesDefinitionList ;
 
} ; // End of GALGAS_L_5F_statesDefinitionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_statesDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mStateLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_statesDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_statesDefinitionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_statesDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mStateIndex ;
  public: inline GALGAS_uint readProperty_mStateIndex (void) const {
    return mProperty_mStateIndex ;
  }

  public: GALGAS_location mProperty_mStateLocation ;
  public: inline GALGAS_location readProperty_mStateLocation (void) const {
    return mProperty_mStateLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_statesDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStateIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateIndex = inValue ;
  }

  public: inline void setter_setMStateLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_statesDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_statesDefinitionList_2D_element (const GALGAS_uint & in_mStateIndex,
                                                       const GALGAS_location & in_mStateLocation) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_statesDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_statesDefinitionList_2D_element class_func_new (const class GALGAS_uint & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_statesDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_statesDefinitionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_machineDefinition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_machineDefinition : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_machineDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_AC_5F_machineDefinition (const class cPtr_AC_5F_machineDefinition * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_machineDefinition extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_machineDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_machineDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;

#include "separateHeaderFor_AC_5F_machineDefinition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_machineDefinition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_machineDefinition_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_machineDefinition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_AC_5F_machineDefinition_2D_weak (const class GALGAS_AC_5F_machineDefinition & inSource) ;

  public: GALGAS_AC_5F_machineDefinition_2D_weak & operator = (const class GALGAS_AC_5F_machineDefinition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_AC_5F_machineDefinition bang_AC_5F_machineDefinition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_machineDefinition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AC_5F_machineDefinition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_machineDefinition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_machineDefinition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_modesMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_modesMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_M_5F_modesMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_modesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_M_5F_modesMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_M_5F_modesMap (const GALGAS_M_5F_modesMap & inSource) ;
  public: GALGAS_M_5F_modesMap & operator = (const GALGAS_M_5F_modesMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_modesMap extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_modesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_M_5F_modesMap class_func_mapWithMapToOverride (const class GALGAS_M_5F_modesMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_AC_5F_machineDefinition & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_M_5F_modesMap add_operation (const GALGAS_M_5F_modesMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_AC_5F_machineDefinition constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeDefinitionForKey (class GALGAS_AC_5F_machineDefinition constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mModeDefinitionForKey (const class GALGAS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_AC_5F_machineDefinition & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_M_5F_modesMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_modesMap ;
 
} ; // End of GALGAS_M_5F_modesMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_M_5F_modesMap : public cGenericAbstractEnumerator {
  public: cEnumerator_M_5F_modesMap (const GALGAS_M_5F_modesMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_AC_5F_machineDefinition current_mModeDefinition (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_M_5F_modesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@M_modesMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_M_5F_modesMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_AC_5F_machineDefinition mProperty_mModeDefinition ;

//--- Constructor
  public: cMapElement_M_5F_modesMap (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mIndex,
                                     const GALGAS_AC_5F_machineDefinition & in_mModeDefinition
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @M_5F_modesMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_M_5F_modesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_AC_5F_machineDefinition mProperty_mModeDefinition ;
  public: inline GALGAS_AC_5F_machineDefinition readProperty_mModeDefinition (void) const {
    return mProperty_mModeDefinition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_M_5F_modesMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMModeDefinition (const GALGAS_AC_5F_machineDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModeDefinition = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_M_5F_modesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_M_5F_modesMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uint & in_mIndex,
                                           const GALGAS_AC_5F_machineDefinition & in_mModeDefinition) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_M_5F_modesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_M_5F_modesMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_uint & inOperand1,
                                                                       const class GALGAS_AC_5F_machineDefinition & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_M_5F_modesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_M_5F_modesMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ListForModes list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ListForModes : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ListForModes (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ListForModes (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mSourceMode,
                                                 const class GALGAS_uint & in_mTargetMode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ListForModes extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ListForModes class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ListForModes class_func_listWithValue (const class GALGAS_uint & inOperand0,
                                                                     const class GALGAS_uint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ListForModes inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ListForModes add_operation (const GALGAS_ListForModes & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uint constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceModeAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetModeAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSourceModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ListForModes ;
 
} ; // End of GALGAS_ListForModes class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ListForModes : public cGenericAbstractEnumerator {
  public: cEnumerator_ListForModes (const GALGAS_ListForModes & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mSourceMode (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTargetMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ListForModes_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ListForModes_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ListForModes_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mSourceMode ;
  public: inline GALGAS_uint readProperty_mSourceMode (void) const {
    return mProperty_mSourceMode ;
  }

  public: GALGAS_uint mProperty_mTargetMode ;
  public: inline GALGAS_uint readProperty_mTargetMode (void) const {
    return mProperty_mTargetMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ListForModes_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceMode (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceMode = inValue ;
  }

  public: inline void setter_setMTargetMode (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetMode = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ListForModes_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ListForModes_2D_element (const GALGAS_uint & in_mSourceMode,
                                          const GALGAS_uint & in_mTargetMode) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ListForModes_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ListForModes_2D_element class_func_new (const class GALGAS_uint & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ListForModes_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ListForModes_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_substractiveModalCompositionComponent reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_substractiveModalCompositionComponent : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_substractiveModalCompositionComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_substractiveModalCompositionComponent (const class cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_M_5F_modesMap readProperty_mModeMap (void) const ;

  public: class GALGAS_ListForModes readProperty_mExclusionList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_substractiveModalCompositionComponent extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_substractiveModalCompositionComponent class_func_new (const class GALGAS_M_5F_modesMap & inOperand0,
                                                                                         const class GALGAS_ListForModes & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExclusionList (class GALGAS_ListForModes inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeMap (class GALGAS_M_5F_modesMap inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_substractiveModalCompositionComponent class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_substractiveModalCompositionComponent.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_substractiveModalCompositionComponent_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak (const class GALGAS_C_5F_substractiveModalCompositionComponent & inSource) ;

  public: GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak & operator = (const class GALGAS_C_5F_substractiveModalCompositionComponent & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_substractiveModalCompositionComponent bang_C_5F_substractiveModalCompositionComponent_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_additiveModalCompositionComponent reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_additiveModalCompositionComponent : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_additiveModalCompositionComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_additiveModalCompositionComponent (const class cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_M_5F_modesMap readProperty_mModeMap (void) const ;

  public: class GALGAS_ListForModes readProperty_mInclusionList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_additiveModalCompositionComponent extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_additiveModalCompositionComponent class_func_new (const class GALGAS_M_5F_modesMap & inOperand0,
                                                                                     const class GALGAS_ListForModes & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInclusionList (class GALGAS_ListForModes inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeMap (class GALGAS_M_5F_modesMap inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_additiveModalCompositionComponent class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_additiveModalCompositionComponent.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_additiveModalCompositionComponent_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_additiveModalCompositionComponent_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_additiveModalCompositionComponent_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_additiveModalCompositionComponent_2D_weak (const class GALGAS_C_5F_additiveModalCompositionComponent & inSource) ;

  public: GALGAS_C_5F_additiveModalCompositionComponent_2D_weak & operator = (const class GALGAS_C_5F_additiveModalCompositionComponent & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_additiveModalCompositionComponent bang_C_5F_additiveModalCompositionComponent_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_additiveModalCompositionComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_additiveModalCompositionComponent_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_additiveModalCompositionComponent_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_trans reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_trans : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_trans (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_trans (const class cPtr_C_5F_trans * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mSourceStateExpression (void) const ;

  public: class GALGAS_AC_5F_boolExpression readProperty_mTargetStateExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_trans extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_trans class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                         const class GALGAS_AC_5F_boolExpression & inOperand1
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_trans & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSourceStateExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetStateExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_trans class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trans ;

#include "separateHeaderFor_C_5F_trans.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_trans_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_trans_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_trans_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_trans_2D_weak (const class GALGAS_C_5F_trans & inSource) ;

  public: GALGAS_C_5F_trans_2D_weak & operator = (const class GALGAS_C_5F_trans & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_trans bang_C_5F_trans_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_trans_2D_weak extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_trans_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_trans_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_trans_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trans_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_importMachine reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_importMachine : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_importMachine (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_importMachine (const class cPtr_C_5F_importMachine * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mIndexOfImportedMachine (void) const ;

  public: class GALGAS_L_5F_translationVector readProperty_mTranslationVector (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_importMachine extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_importMachine class_func_new (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_L_5F_translationVector & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_importMachine & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIndexOfImportedMachine (class GALGAS_uint inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTranslationVector (class GALGAS_L_5F_translationVector inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_importMachine class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importMachine ;

#include "separateHeaderFor_C_5F_importMachine.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_importMachine_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_importMachine_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_importMachine_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_importMachine_2D_weak (const class GALGAS_C_5F_importMachine & inSource) ;

  public: GALGAS_C_5F_importMachine_2D_weak & operator = (const class GALGAS_C_5F_importMachine & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_importMachine bang_C_5F_importMachine_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_importMachine_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_importMachine_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_importMachine_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_importMachine_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importMachine_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_explicitAutomatonDefinition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_explicitAutomatonDefinition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_explicitAutomatonDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_explicitAutomatonDefinition (const class cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_M_5F_stateMap readProperty_mStatesMap (void) const ;

  public: class GALGAS_L_5F_statesDefinitionList readProperty_mInitialStatesDefinitionList (void) const ;

  public: class GALGAS_L_5F_statesDefinitionList readProperty_mTerminalStatesDefinitionList (void) const ;

  public: class GALGAS_L_5F_stateDefinition readProperty_mStateDefinitionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfDefinition (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_explicitAutomatonDefinition extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_explicitAutomatonDefinition class_func_new (const class GALGAS_M_5F_stateMap & inOperand0,
                                                                               const class GALGAS_L_5F_statesDefinitionList & inOperand1,
                                                                               const class GALGAS_L_5F_statesDefinitionList & inOperand2,
                                                                               const class GALGAS_L_5F_stateDefinition & inOperand3,
                                                                               const class GALGAS_location & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfDefinition (class GALGAS_location inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialStatesDefinitionList (class GALGAS_L_5F_statesDefinitionList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateDefinitionList (class GALGAS_L_5F_stateDefinition inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStatesMap (class GALGAS_M_5F_stateMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalStatesDefinitionList (class GALGAS_L_5F_statesDefinitionList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_explicitAutomatonDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;

#include "separateHeaderFor_C_5F_explicitAutomatonDefinition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_explicitAutomatonDefinition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_explicitAutomatonDefinition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_explicitAutomatonDefinition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_explicitAutomatonDefinition_2D_weak (const class GALGAS_C_5F_explicitAutomatonDefinition & inSource) ;

  public: GALGAS_C_5F_explicitAutomatonDefinition_2D_weak & operator = (const class GALGAS_C_5F_explicitAutomatonDefinition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_explicitAutomatonDefinition bang_C_5F_explicitAutomatonDefinition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_explicitAutomatonDefinition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_explicitAutomatonDefinition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_explicitAutomatonDefinition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_boolToSeqExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_boolToSeqExpression : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_boolToSeqExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_boolToSeqExpression (const class cPtr_C_5F_boolToSeqExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_boolExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_boolToSeqExpression extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_boolToSeqExpression class_func_new (const class GALGAS_AC_5F_boolExpression & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_boolToSeqExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_AC_5F_boolExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_boolToSeqExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;

#include "separateHeaderFor_C_5F_boolToSeqExpression.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_boolToSeqExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_boolToSeqExpression_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_boolToSeqExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_boolToSeqExpression_2D_weak (const class GALGAS_C_5F_boolToSeqExpression & inSource) ;

  public: GALGAS_C_5F_boolToSeqExpression_2D_weak & operator = (const class GALGAS_C_5F_boolToSeqExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_boolToSeqExpression bang_C_5F_boolToSeqExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_boolToSeqExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_boolToSeqExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_boolToSeqExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_boolToSeqExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_existsDefinition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_existsDefinition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_existsDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_existsDefinition (const class cPtr_C_5F_existsDefinition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mPreviousVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mTotalVariableCount (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_existsDefinition extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_existsDefinition class_func_new (const class GALGAS_uint & inOperand0,
                                                                    const class GALGAS_uint & inOperand1,
                                                                    const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_existsDefinition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreviousVariableCount (class GALGAS_uint inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTotalVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_existsDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition ;

#include "separateHeaderFor_C_5F_existsDefinition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_existsDefinition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_existsDefinition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_existsDefinition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_existsDefinition_2D_weak (const class GALGAS_C_5F_existsDefinition & inSource) ;

  public: GALGAS_C_5F_existsDefinition_2D_weak & operator = (const class GALGAS_C_5F_existsDefinition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_existsDefinition bang_C_5F_existsDefinition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_existsDefinition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_existsDefinition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_existsDefinition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_existsDefinition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_forallDefinition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_forallDefinition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_forallDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_forallDefinition (const class cPtr_C_5F_forallDefinition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mPreviousVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mTotalVariableCount (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_forallDefinition extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_forallDefinition class_func_new (const class GALGAS_uint & inOperand0,
                                                                    const class GALGAS_uint & inOperand1,
                                                                    const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_forallDefinition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreviousVariableCount (class GALGAS_uint inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTotalVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_forallDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition ;

#include "separateHeaderFor_C_5F_forallDefinition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_forallDefinition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_forallDefinition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_forallDefinition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_forallDefinition_2D_weak (const class GALGAS_C_5F_forallDefinition & inSource) ;

  public: GALGAS_C_5F_forallDefinition_2D_weak & operator = (const class GALGAS_C_5F_forallDefinition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_forallDefinition bang_C_5F_forallDefinition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_forallDefinition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_forallDefinition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_forallDefinition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_forallDefinition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_parallelComposition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_parallelComposition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_parallelComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_parallelComposition (const class cPtr_C_5F_parallelComposition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_parallelComposition extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_parallelComposition class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                       const class GALGAS_AC_5F_machineDefinition & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_parallelComposition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_parallelComposition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition ;

#include "separateHeaderFor_C_5F_parallelComposition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_parallelComposition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_parallelComposition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_parallelComposition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_parallelComposition_2D_weak (const class GALGAS_C_5F_parallelComposition & inSource) ;

  public: GALGAS_C_5F_parallelComposition_2D_weak & operator = (const class GALGAS_C_5F_parallelComposition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_parallelComposition bang_C_5F_parallelComposition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_parallelComposition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_parallelComposition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_parallelComposition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_parallelComposition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_orComposition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_orComposition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_orComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_orComposition (const class cPtr_C_5F_orComposition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_orComposition extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_orComposition class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                 const class GALGAS_AC_5F_machineDefinition & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_orComposition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_orComposition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orComposition ;

#include "separateHeaderFor_C_5F_orComposition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_orComposition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_orComposition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_orComposition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_orComposition_2D_weak (const class GALGAS_C_5F_orComposition & inSource) ;

  public: GALGAS_C_5F_orComposition_2D_weak & operator = (const class GALGAS_C_5F_orComposition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_orComposition bang_C_5F_orComposition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_orComposition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_orComposition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_orComposition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_orComposition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orComposition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_strongModalComposition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_strongModalComposition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_strongModalComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_strongModalComposition (const class cPtr_C_5F_strongModalComposition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;

  public: class GALGAS_location readProperty_mErrorLocation (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_strongModalComposition extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_strongModalComposition class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_strongModalComposition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocation (class GALGAS_location inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_strongModalComposition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;

#include "separateHeaderFor_C_5F_strongModalComposition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_strongModalComposition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_strongModalComposition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_strongModalComposition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_strongModalComposition_2D_weak (const class GALGAS_C_5F_strongModalComposition & inSource) ;

  public: GALGAS_C_5F_strongModalComposition_2D_weak & operator = (const class GALGAS_C_5F_strongModalComposition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_strongModalComposition bang_C_5F_strongModalComposition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_strongModalComposition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_strongModalComposition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_strongModalComposition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_strongModalComposition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_weakModalComposition reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_weakModalComposition : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_weakModalComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_weakModalComposition (const class cPtr_C_5F_weakModalComposition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;

  public: class GALGAS_location readProperty_mErrorLocation (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_weakModalComposition extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_weakModalComposition class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_weakModalComposition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocation (class GALGAS_location inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_weakModalComposition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;

#include "separateHeaderFor_C_5F_weakModalComposition.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_weakModalComposition_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_weakModalComposition_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_weakModalComposition_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_weakModalComposition_2D_weak (const class GALGAS_C_5F_weakModalComposition & inSource) ;

  public: GALGAS_C_5F_weakModalComposition_2D_weak & operator = (const class GALGAS_C_5F_weakModalComposition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_weakModalComposition bang_C_5F_weakModalComposition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_weakModalComposition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_weakModalComposition_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_weakModalComposition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_weakModalComposition_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_fullSaturationOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_fullSaturationOperation : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_fullSaturationOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_fullSaturationOperation (const class cPtr_C_5F_fullSaturationOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_fullSaturationOperation extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_fullSaturationOperation class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_fullSaturationOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_fullSaturationOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;

#include "separateHeaderFor_C_5F_fullSaturationOperation.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_fullSaturationOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_fullSaturationOperation_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_fullSaturationOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_fullSaturationOperation_2D_weak (const class GALGAS_C_5F_fullSaturationOperation & inSource) ;

  public: GALGAS_C_5F_fullSaturationOperation_2D_weak & operator = (const class GALGAS_C_5F_fullSaturationOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_fullSaturationOperation bang_C_5F_fullSaturationOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_fullSaturationOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_fullSaturationOperation_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_fullSaturationOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_fullSaturationOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_complementationOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_complementationOperation : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_complementationOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_complementationOperation (const class cPtr_C_5F_complementationOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_complementationOperation extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_complementationOperation class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_complementationOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_complementationOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation ;

#include "separateHeaderFor_C_5F_complementationOperation.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_complementationOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_complementationOperation_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_complementationOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_complementationOperation_2D_weak (const class GALGAS_C_5F_complementationOperation & inSource) ;

  public: GALGAS_C_5F_complementationOperation_2D_weak & operator = (const class GALGAS_C_5F_complementationOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_complementationOperation bang_C_5F_complementationOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_complementationOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_complementationOperation_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_complementationOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_complementationOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_suppressTerminalStatesOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_suppressTerminalStatesOperation : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_suppressTerminalStatesOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_suppressTerminalStatesOperation (const class cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_suppressTerminalStatesOperation extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_suppressTerminalStatesOperation class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_suppressTerminalStatesOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;

#include "separateHeaderFor_C_5F_suppressTerminalStatesOperation.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_suppressTerminalStatesOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak (const class GALGAS_C_5F_suppressTerminalStatesOperation & inSource) ;

  public: GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak & operator = (const class GALGAS_C_5F_suppressTerminalStatesOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_suppressTerminalStatesOperation bang_C_5F_suppressTerminalStatesOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_suppressInitialStatesOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_suppressInitialStatesOperation : public GALGAS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_suppressInitialStatesOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_suppressInitialStatesOperation (const class cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_AC_5F_machineDefinition readProperty_mOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_suppressInitialStatesOperation extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_suppressInitialStatesOperation class_func_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_AC_5F_machineDefinition inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_suppressInitialStatesOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;

#include "separateHeaderFor_C_5F_suppressInitialStatesOperation.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_suppressInitialStatesOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_suppressInitialStatesOperation_2D_weak : public GALGAS_AC_5F_machineDefinition_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_suppressInitialStatesOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_suppressInitialStatesOperation_2D_weak (const class GALGAS_C_5F_suppressInitialStatesOperation & inSource) ;

  public: GALGAS_C_5F_suppressInitialStatesOperation_2D_weak & operator = (const class GALGAS_C_5F_suppressInitialStatesOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_suppressInitialStatesOperation bang_C_5F_suppressInitialStatesOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_suppressInitialStatesOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_suppressInitialStatesOperation_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_suppressInitialStatesOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_job reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_job : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_job (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_AC_5F_job (const class cPtr_AC_5F_job * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_job extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_job & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_job class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_job ;

#include "separateHeaderFor_AC_5F_job.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AC_5F_job_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AC_5F_job_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_AC_5F_job_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_AC_5F_job_2D_weak (const class GALGAS_AC_5F_job & inSource) ;

  public: GALGAS_AC_5F_job_2D_weak & operator = (const class GALGAS_AC_5F_job & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_AC_5F_job bang_AC_5F_job_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AC_5F_job_2D_weak extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AC_5F_job_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AC_5F_job_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AC_5F_job_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_job_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayStates reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayStates : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayStates (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDisplayStates (const class cPtr_C_5F_machineDisplayStates * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayStates extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayStates class_func_new (const class GALGAS_uint & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayStates & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayStates class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;

#include "separateHeaderFor_C_5F_machineDisplayStates.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayStates_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayStates_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayStates_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDisplayStates_2D_weak (const class GALGAS_C_5F_machineDisplayStates & inSource) ;

  public: GALGAS_C_5F_machineDisplayStates_2D_weak & operator = (const class GALGAS_C_5F_machineDisplayStates & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDisplayStates bang_C_5F_machineDisplayStates_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayStates_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayStates_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayStates_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayStates_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayInitialStates reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayInitialStates : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayInitialStates (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDisplayInitialStates (const class cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayInitialStates extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayInitialStates class_func_new (const class GALGAS_uint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayInitialStates & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayInitialStates class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;

#include "separateHeaderFor_C_5F_machineDisplayInitialStates.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayInitialStates_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayInitialStates_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayInitialStates_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDisplayInitialStates_2D_weak (const class GALGAS_C_5F_machineDisplayInitialStates & inSource) ;

  public: GALGAS_C_5F_machineDisplayInitialStates_2D_weak & operator = (const class GALGAS_C_5F_machineDisplayInitialStates & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDisplayInitialStates bang_C_5F_machineDisplayInitialStates_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayInitialStates_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayInitialStates_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayInitialStates_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayInitialStates_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayTerminalStates reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayTerminalStates : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayTerminalStates (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDisplayTerminalStates (const class cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayTerminalStates extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayTerminalStates class_func_new (const class GALGAS_uint & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayTerminalStates class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;

#include "separateHeaderFor_C_5F_machineDisplayTerminalStates.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayTerminalStates_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayTerminalStates_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayTerminalStates_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDisplayTerminalStates_2D_weak (const class GALGAS_C_5F_machineDisplayTerminalStates & inSource) ;

  public: GALGAS_C_5F_machineDisplayTerminalStates_2D_weak & operator = (const class GALGAS_C_5F_machineDisplayTerminalStates & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDisplayTerminalStates bang_C_5F_machineDisplayTerminalStates_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayTerminalStates_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayTerminalStates_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayTerminalStates_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayTransitions reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayTransitions : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayTransitions (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDisplayTransitions (const class cPtr_C_5F_machineDisplayTransitions * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayTransitions extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayTransitions class_func_new (const class GALGAS_uint & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTransitions & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayTransitions class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;

#include "separateHeaderFor_C_5F_machineDisplayTransitions.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDisplayTransitions_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDisplayTransitions_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDisplayTransitions_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDisplayTransitions_2D_weak (const class GALGAS_C_5F_machineDisplayTransitions & inSource) ;

  public: GALGAS_C_5F_machineDisplayTransitions_2D_weak & operator = (const class GALGAS_C_5F_machineDisplayTransitions & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDisplayTransitions bang_C_5F_machineDisplayTransitions_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDisplayTransitions_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDisplayTransitions_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTransitions_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDisplayTransitions_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineCheck reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineCheck : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineCheck (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineCheck (const class cPtr_C_5F_machineCheck * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_bool readProperty_mCheckMachineIsBoolean (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineCheck extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineCheck class_func_new (const class GALGAS_uint & inOperand0,
                                                                const class GALGAS_bool & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheck & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCheckMachineIsBoolean (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineCheck class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheck ;

#include "separateHeaderFor_C_5F_machineCheck.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineCheck_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineCheck_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineCheck_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineCheck_2D_weak (const class GALGAS_C_5F_machineCheck & inSource) ;

  public: GALGAS_C_5F_machineCheck_2D_weak & operator = (const class GALGAS_C_5F_machineCheck & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineCheck bang_C_5F_machineCheck_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineCheck_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineCheck_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheck_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineCheck_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheck_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineCheckIdentical reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineCheckIdentical : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineCheckIdentical (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineCheckIdentical (const class cPtr_C_5F_machineCheckIdentical * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex_31_ (void) const ;

  public: class GALGAS_uint readProperty_mMachineIndex_32_ (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineCheckIdentical extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineCheckIdentical class_func_new (const class GALGAS_uint & inOperand0,
                                                                         const class GALGAS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheckIdentical & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex_31_ (class GALGAS_uint inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex_32_ (class GALGAS_uint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineCheckIdentical class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;

#include "separateHeaderFor_C_5F_machineCheckIdentical.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineCheckIdentical_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineCheckIdentical_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineCheckIdentical_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineCheckIdentical_2D_weak (const class GALGAS_C_5F_machineCheckIdentical & inSource) ;

  public: GALGAS_C_5F_machineCheckIdentical_2D_weak & operator = (const class GALGAS_C_5F_machineCheckIdentical & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineCheckIdentical bang_C_5F_machineCheckIdentical_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineCheckIdentical_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineCheckIdentical_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheckIdentical_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineCheckIdentical_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineComponent reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineComponent : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineComponent (const class cPtr_C_5F_machineComponent * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMachineName (void) const ;

  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;

  public: class GALGAS_stringlist readProperty_mNameList (void) const ;

  public: class GALGAS_AC_5F_machineDefinition readProperty_mDefinition (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineComponent extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineComponent class_func_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_uint & inOperand1,
                                                                    const class GALGAS_uint & inOperand2,
                                                                    const class GALGAS_uint & inOperand3,
                                                                    const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                    const class GALGAS_stringlist & inOperand5,
                                                                    const class GALGAS_AC_5F_machineDefinition & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineComponent & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefinition (class GALGAS_AC_5F_machineDefinition inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCount (class GALGAS_uint inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameList (class GALGAS_stringlist inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMap (class GALGAS_M_5F_variablesMap inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineComponent class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineComponent ;

#include "separateHeaderFor_C_5F_machineComponent.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineComponent_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineComponent_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineComponent_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineComponent_2D_weak (const class GALGAS_C_5F_machineComponent & inSource) ;

  public: GALGAS_C_5F_machineComponent_2D_weak & operator = (const class GALGAS_C_5F_machineComponent & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineComponent bang_C_5F_machineComponent_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineComponent_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineComponent_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineComponent_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineComponent_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDefinedByAdditiveModalComp reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDefinedByAdditiveModalComp : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp (const class cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMachineName (void) const ;

  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;

  public: class GALGAS_M_5F_modesMap readProperty_mModeMap (void) const ;

  public: class GALGAS_ListForModes readProperty_mInclusionList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDefinedByAdditiveModalComp extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDefinedByAdditiveModalComp class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_uint & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2,
                                                                                     const class GALGAS_uint & inOperand3,
                                                                                     const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                                     const class GALGAS_M_5F_modesMap & inOperand5,
                                                                                     const class GALGAS_ListForModes & inOperand6
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInclusionList (class GALGAS_ListForModes inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCount (class GALGAS_uint inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeMap (class GALGAS_M_5F_modesMap inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMap (class GALGAS_M_5F_variablesMap inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDefinedByAdditiveModalComp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedByAdditiveModalComp.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDefinedByAdditiveModalComp_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (const class GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) ;

  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & operator = (const class GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDefinedByAdditiveModalComp bang_C_5F_machineDefinedByAdditiveModalComp_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDefinedBySubstractiveModalComp reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDefinedBySubstractiveModalComp : public GALGAS_AC_5F_job {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp (const class cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMachineName (void) const ;

  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;

  public: class GALGAS_M_5F_modesMap readProperty_mModeMap (void) const ;

  public: class GALGAS_ListForModes readProperty_mExclusionList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDefinedBySubstractiveModalComp extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDefinedBySubstractiveModalComp class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2,
                                                                                         const class GALGAS_uint & inOperand3,
                                                                                         const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                                         const class GALGAS_M_5F_modesMap & inOperand5,
                                                                                         const class GALGAS_ListForModes & inOperand6
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExclusionList (class GALGAS_ListForModes inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCount (class GALGAS_uint inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputVariableCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineIndex (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMachineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeMap (class GALGAS_M_5F_modesMap inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVariablesMap (class GALGAS_M_5F_variablesMap inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDefinedBySubstractiveModalComp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedBySubstractiveModalComp.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @C_5F_machineDefinedBySubstractiveModalComp_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak : public GALGAS_AC_5F_job_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (const class GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) ;

  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & operator = (const class GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_C_5F_machineDefinedBySubstractiveModalComp bang_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_inputConfigurationForScenario list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_inputConfigurationForScenario : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_inputConfigurationForScenario (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_inputConfigurationForScenario (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_luint & in_mInputValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_inputConfigurationForScenario extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_inputConfigurationForScenario class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_inputConfigurationForScenario class_func_listWithValue (const class GALGAS_luint & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_luint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_inputConfigurationForScenario add_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_luint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_luint constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_luint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_luint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_luint & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputValueAtIndex (class GALGAS_luint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_luint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_luint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mInputValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_inputConfigurationForScenario ;
 
} ; // End of GALGAS_L_5F_inputConfigurationForScenario class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_inputConfigurationForScenario : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_luint current_mInputValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_inputConfigurationForScenario_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_inputConfigurationForScenario_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_inputConfigurationForScenario_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_luint mProperty_mInputValue ;
  public: inline GALGAS_luint readProperty_mInputValue (void) const {
    return mProperty_mInputValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputValue (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_inputConfigurationForScenario_2D_element (const GALGAS_luint & in_mInputValue) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_inputConfigurationForScenario_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_inputConfigurationForScenario_2D_element class_func_new (const class GALGAS_luint & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_inputConfigurationForScenario_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_inputScenario list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_inputScenario : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_inputScenario (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_inputScenario (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_inputScenario extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_inputScenario class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_inputScenario class_func_listWithValue (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_inputScenario inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_inputScenario add_operation (const GALGAS_L_5F_inputScenario & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_L_5F_inputConfigurationForScenario constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_L_5F_inputConfigurationForScenario constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputConfigurationAtIndex (class GALGAS_L_5F_inputConfigurationForScenario constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_mInputConfigurationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_inputScenario ;
 
} ; // End of GALGAS_L_5F_inputScenario class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_inputScenario : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_inputScenario (const GALGAS_L_5F_inputScenario & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_L_5F_inputConfigurationForScenario current_mInputConfiguration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_inputScenario_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_inputScenario_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_inputScenario_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_L_5F_inputConfigurationForScenario mProperty_mInputConfiguration ;
  public: inline GALGAS_L_5F_inputConfigurationForScenario readProperty_mInputConfiguration (void) const {
    return mProperty_mInputConfiguration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_inputScenario_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputConfiguration (const GALGAS_L_5F_inputConfigurationForScenario & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputConfiguration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_inputScenario_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_inputScenario_2D_element (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_inputScenario_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_inputScenario_2D_element class_func_new (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_inputScenario_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_inputScenario_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_scenarioList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_scenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_L_5F_scenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_L_5F_scenarioList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mScenarioTitle,
                                                 const class GALGAS_L_5F_inputScenario & in_mInputScenario
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_scenarioList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_scenarioList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_L_5F_scenarioList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_L_5F_inputScenario & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_scenarioList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_L_5F_inputScenario & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_L_5F_scenarioList add_operation (const GALGAS_L_5F_scenarioList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_L_5F_inputScenario constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_L_5F_inputScenario constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_L_5F_inputScenario & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_L_5F_inputScenario & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_L_5F_inputScenario & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputScenarioAtIndex (class GALGAS_L_5F_inputScenario constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScenarioTitleAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_L_5F_inputScenario & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_L_5F_inputScenario & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_mInputScenarioAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioTitleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_scenarioList ;
 
} ; // End of GALGAS_L_5F_scenarioList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_L_5F_scenarioList : public cGenericAbstractEnumerator {
  public: cEnumerator_L_5F_scenarioList (const GALGAS_L_5F_scenarioList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mScenarioTitle (LOCATION_ARGS) const ;
  public: class GALGAS_L_5F_inputScenario current_mInputScenario (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_L_5F_scenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_scenarioList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @L_5F_scenarioList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_L_5F_scenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mScenarioTitle ;
  public: inline GALGAS_lstring readProperty_mScenarioTitle (void) const {
    return mProperty_mScenarioTitle ;
  }

  public: GALGAS_L_5F_inputScenario mProperty_mInputScenario ;
  public: inline GALGAS_L_5F_inputScenario readProperty_mInputScenario (void) const {
    return mProperty_mInputScenario ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_L_5F_scenarioList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScenarioTitle (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScenarioTitle = inValue ;
  }

  public: inline void setter_setMInputScenario (const GALGAS_L_5F_inputScenario & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputScenario = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_L_5F_scenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_L_5F_scenarioList_2D_element (const GALGAS_lstring & in_mScenarioTitle,
                                               const GALGAS_L_5F_inputScenario & in_mInputScenario) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_L_5F_scenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_L_5F_scenarioList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_L_5F_inputScenario & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_L_5F_scenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_L_5F_scenarioList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ;

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

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mMachineIndex (void) const ;

  public: class GALGAS_uint readProperty_mInputVariableCount (void) const ;

  public: class GALGAS_uint readProperty_mInputAndInternalVariableCount (void) const ;

  public: class GALGAS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;

  public: class GALGAS_L_5F_scenarioList readProperty_mScenarioList (void) const ;

//-- Start of type generic part

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_C_5F_scenarioComponent_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_C_5F_scenarioComponent_2D_weak class_func_nil (LOCATION_ARGS) ;

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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2D_weak ;

