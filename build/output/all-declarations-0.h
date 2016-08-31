#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               LEXIQUE sara_5F_scanner                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    R O U T I N E S                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    F U N C T I O N S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                       T O K E N    C L A S S                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_sara_5F_scanner : public cToken {
  public : C_String mLexicalAttribute_identifierString ;
  public : uint32_t mLexicalAttribute_ulongValue ;

  public : cTokenFor_sara_5F_scanner (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                     S C A N N E R    C L A S S                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_sara_5F_scanner : public C_Lexique {
//--- Constructors
  public : C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_sara_5F_scanner (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
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
   kToken_ite_5F_cache,
   kToken_and_5F_cache,
   kToken_map,
   kToken_bdd,
   kToken_bool,
   kToken_use_5F_and,
   kToken_use_5F_ite,
   kToken_use_5F_and_5F_ite,
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
  public : static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_luint synthetizedAttribute_ulongValue (void) const ;


//--- Attribute access
  public : C_String attributeValue_identifierString (void) const ;
  public : uint32_t attributeValue_ulongValue (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 54 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_sara_5F_scanner & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @M_variablesMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_variablesMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_M_5F_variablesMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_variablesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_M_5F_variablesMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inSource) ;
  public : GALGAS_M_5F_variablesMap & operator = (const GALGAS_M_5F_variablesMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_variablesMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_variablesMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_M_5F_variablesMap constructor_mapWithMapToOverride (const class GALGAS_M_5F_variablesMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_M_5F_variablesMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_variablesMap ;
 
} ; // End of GALGAS_M_5F_variablesMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_M_5F_variablesMap : public cGenericAbstractEnumerator {
  public : cEnumerator_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_M_5F_variablesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@M_variablesMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_variablesMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;

//--- Constructor
  public : cMapElement_M_5F_variablesMap (const GALGAS_lstring & inKey,
                                          const GALGAS_uint & in_mIndex
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @M_5F_variablesMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_variablesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_M_5F_variablesMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_M_5F_variablesMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_M_5F_variablesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_M_5F_variablesMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_variablesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_variablesMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_M_5F_variablesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_M_5F_variablesMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @M_stateMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_stateMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_M_5F_stateMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_stateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_M_5F_stateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_M_5F_stateMap (const GALGAS_M_5F_stateMap & inSource) ;
  public : GALGAS_M_5F_stateMap & operator = (const GALGAS_M_5F_stateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_stateMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_stateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_M_5F_stateMap constructor_mapWithMapToOverride (const class GALGAS_M_5F_stateMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_defineState (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_stateMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_M_5F_stateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_stateMap ;
 
} ; // End of GALGAS_M_5F_stateMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_M_5F_stateMap : public cGenericAbstractEnumerator {
  public : cEnumerator_M_5F_stateMap (const GALGAS_M_5F_stateMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_M_5F_stateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@M_stateMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_stateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;

//--- Constructor
  public : cMapElement_M_5F_stateMap (const GALGAS_lstring & inKey,
                                      const GALGAS_uint & in_mIndex
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @M_5F_stateMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_stateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_M_5F_stateMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_M_5F_stateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_M_5F_stateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_M_5F_stateMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_stateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_stateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_M_5F_stateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_M_5F_stateMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @L_translationVector list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_translationVector : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_translationVector (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_translationVector (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uint & in_mTargetSlot
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_translationVector extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_translationVector constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_translationVector constructor_listWithValue (const class GALGAS_uint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_translationVector inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_translationVector add_operation (const GALGAS_L_5F_translationVector & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetSlotAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_translationVector ;
 
} ; // End of GALGAS_L_5F_translationVector class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_translationVector : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_translationVector (const GALGAS_L_5F_translationVector & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mTargetSlot (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_translationVector_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @L_5F_translationVector_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_translationVector_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mTargetSlot ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_L_5F_translationVector_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_translationVector_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_translationVector_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_translationVector_2D_element (const GALGAS_uint & in_mTargetSlot) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_translationVector_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_translationVector_2D_element constructor_new (const class GALGAS_uint & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_translationVector_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetSlot (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_translationVector_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @AC_5F_boolExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_AC_5F_boolExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_AC_5F_boolExpression (void) ;

//---
  public : inline const class cPtr_AC_5F_boolExpression * ptr (void) const { return (const cPtr_AC_5F_boolExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_AC_5F_boolExpression (const cPtr_AC_5F_boolExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_AC_5F_boolExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_AC_5F_boolExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_AC_5F_boolExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression ;

#include "separateHeaderFor_AC_5F_boolExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_andExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_andExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_andExpression (void) ;

//---
  public : inline const class cPtr_C_5F_andExpression * ptr (void) const { return (const cPtr_C_5F_andExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_andExpression (const cPtr_C_5F_andExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_andExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_andExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                   const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_andExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_andExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_andExpression ;

#include "separateHeaderFor_C_5F_andExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_orExpression class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_orExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_orExpression (void) ;

//---
  public : inline const class cPtr_C_5F_orExpression * ptr (void) const { return (const cPtr_C_5F_orExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_orExpression (const cPtr_C_5F_orExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_orExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_orExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                  const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_orExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_orExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orExpression ;

#include "separateHeaderFor_C_5F_orExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_xorExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_xorExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_xorExpression (void) ;

//---
  public : inline const class cPtr_C_5F_xorExpression * ptr (void) const { return (const cPtr_C_5F_xorExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_xorExpression (const cPtr_C_5F_xorExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_xorExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_xorExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                   const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_xorExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_xorExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_xorExpression ;

#include "separateHeaderFor_C_5F_xorExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_impliesExpression class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_impliesExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_impliesExpression (void) ;

//---
  public : inline const class cPtr_C_5F_impliesExpression * ptr (void) const { return (const cPtr_C_5F_impliesExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_impliesExpression (const cPtr_C_5F_impliesExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_impliesExpression extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_impliesExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                       const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_impliesExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_impliesExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression ;

#include "separateHeaderFor_C_5F_impliesExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_5F_equalExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_equalExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_equalExpression (void) ;

//---
  public : inline const class cPtr_C_5F_equalExpression * ptr (void) const { return (const cPtr_C_5F_equalExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_equalExpression (const cPtr_C_5F_equalExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_equalExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_equalExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                     const class GALGAS_AC_5F_boolExpression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_equalExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_equalExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_equalExpression ;

#include "separateHeaderFor_C_5F_equalExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_notExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_notExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_notExpression (void) ;

//---
  public : inline const class cPtr_C_5F_notExpression * ptr (void) const { return (const cPtr_C_5F_notExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_notExpression (const cPtr_C_5F_notExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_notExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_notExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_notExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_notExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_notExpression ;

#include "separateHeaderFor_C_5F_notExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @C_5F_VariableExpression class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_VariableExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_VariableExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_VariableExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_VariableExpression * ptr (void) const { return (const cPtr_C_5F_VariableExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_VariableExpression (const cPtr_C_5F_VariableExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_VariableExpression extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_VariableExpression constructor_new (const class GALGAS_uint & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_VariableExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVarIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_VariableExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression ;

#include "separateHeaderFor_C_5F_VariableExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_5F_trueExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_trueExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_trueExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_trueExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_trueExpression * ptr (void) const { return (const cPtr_C_5F_trueExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_trueExpression (const cPtr_C_5F_trueExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_trueExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_trueExpression constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_trueExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trueExpression ;

#include "separateHeaderFor_C_5F_trueExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_5F_falseExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_falseExpression : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_falseExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_falseExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_falseExpression * ptr (void) const { return (const cPtr_C_5F_falseExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_falseExpression (const cPtr_C_5F_falseExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_falseExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_falseExpression constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_falseExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_falseExpression ;

#include "separateHeaderFor_C_5F_falseExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_transitionDefinition list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_transitionDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_transitionDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_transitionDefinition (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                  const class GALGAS_location & in_mEndOfExpression,
                                                  const class GALGAS_uint & in_mTargetStateIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_transitionDefinition extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_transitionDefinition constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_transitionDefinition constructor_listWithValue (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_transitionDefinition inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                      const class GALGAS_location & inOperand1,
                                                      const class GALGAS_uint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_transitionDefinition add_operation (const GALGAS_L_5F_transitionDefinition & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_AC_5F_boolExpression constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_AC_5F_boolExpression & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_AC_5F_boolExpression & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_AC_5F_boolExpression & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mActionExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_transitionDefinition ;
 
} ; // End of GALGAS_L_5F_transitionDefinition class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_transitionDefinition : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_AC_5F_boolExpression current_mActionExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExpression (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_transitionDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @L_5F_transitionDefinition_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_transitionDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_AC_5F_boolExpression mAttribute_mActionExpression ;
  public : GALGAS_location mAttribute_mEndOfExpression ;
  public : GALGAS_uint mAttribute_mTargetStateIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_transitionDefinition_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_transitionDefinition_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_transitionDefinition_2D_element (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                        const GALGAS_location & in_mEndOfExpression,
                                                        const GALGAS_uint & in_mTargetStateIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_transitionDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_transitionDefinition_2D_element constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_transitionDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mActionExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetStateIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_transitionDefinition_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @L_stateDefinition list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_stateDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_stateDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_stateDefinition (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uint & in_mStateIndex,
                                                  const class GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                  const class GALGAS_location & in_mEndOfStateExpression,
                                                  const class GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_stateDefinition extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_stateDefinition constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_stateDefinition constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                               const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                                               const class GALGAS_location & inOperand2,
                                                                               const class GALGAS_L_5F_transitionDefinition & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_stateDefinition inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_L_5F_transitionDefinition & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_stateDefinition add_operation (const GALGAS_L_5F_stateDefinition & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_AC_5F_boolExpression constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_L_5F_transitionDefinition constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                  class GALGAS_AC_5F_boolExpression & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                 class GALGAS_AC_5F_boolExpression & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                       class GALGAS_AC_5F_boolExpression & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_L_5F_transitionDefinition & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                               class GALGAS_AC_5F_boolExpression & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               class GALGAS_L_5F_transitionDefinition & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                              class GALGAS_AC_5F_boolExpression & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_L_5F_transitionDefinition & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfStateExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mStateExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_mTransitionsListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_stateDefinition ;
 
} ; // End of GALGAS_L_5F_stateDefinition class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_stateDefinition : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_AC_5F_boolExpression current_mStateExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfStateExpression (LOCATION_ARGS) const ;
  public : class GALGAS_L_5F_transitionDefinition current_mTransitionsList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_stateDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @L_5F_stateDefinition_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_stateDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mStateIndex ;
  public : GALGAS_AC_5F_boolExpression mAttribute_mStateExpression ;
  public : GALGAS_location mAttribute_mEndOfStateExpression ;
  public : GALGAS_L_5F_transitionDefinition mAttribute_mTransitionsList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_stateDefinition_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_stateDefinition_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_stateDefinition_2D_element (const GALGAS_uint & in_mStateIndex,
                                                   const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                   const GALGAS_location & in_mEndOfStateExpression,
                                                   const GALGAS_L_5F_transitionDefinition & in_mTransitionsList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_stateDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_stateDefinition_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                const class GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_L_5F_transitionDefinition & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_stateDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfStateExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mStateExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_transitionDefinition getter_mTransitionsList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_stateDefinition_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_statesDefinitionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_statesDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_statesDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_statesDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uint & in_mStateIndex,
                                                  const class GALGAS_location & in_mStateLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_statesDefinitionList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_statesDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_statesDefinitionList constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                                    const class GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_statesDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_statesDefinitionList add_operation (const GALGAS_L_5F_statesDefinitionList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mStateLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_statesDefinitionList ;
 
} ; // End of GALGAS_L_5F_statesDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_statesDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mStateLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_statesDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @L_5F_statesDefinitionList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_statesDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mStateIndex ;
  public : GALGAS_location mAttribute_mStateLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_L_5F_statesDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_statesDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_statesDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_statesDefinitionList_2D_element (const GALGAS_uint & in_mStateIndex,
                                                        const GALGAS_location & in_mStateLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_statesDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_statesDefinitionList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_statesDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mStateLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_statesDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @AC_5F_machineDefinition class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_AC_5F_machineDefinition : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_AC_5F_machineDefinition (void) ;

//---
  public : inline const class cPtr_AC_5F_machineDefinition * ptr (void) const { return (const cPtr_AC_5F_machineDefinition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_AC_5F_machineDefinition (const cPtr_AC_5F_machineDefinition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_AC_5F_machineDefinition extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_AC_5F_machineDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_AC_5F_machineDefinition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;

#include "separateHeaderFor_AC_5F_machineDefinition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @M_modesMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_modesMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_M_5F_modesMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_modesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_M_5F_modesMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_M_5F_modesMap (const GALGAS_M_5F_modesMap & inSource) ;
  public : GALGAS_M_5F_modesMap & operator = (const GALGAS_M_5F_modesMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_modesMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_modesMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_M_5F_modesMap constructor_mapWithMapToOverride (const class GALGAS_M_5F_modesMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_AC_5F_machineDefinition & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_AC_5F_machineDefinition constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModeDefinitionForKey (class GALGAS_AC_5F_machineDefinition constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mModeDefinitionForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_M_5F_modesMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_modesMap ;
 
} ; // End of GALGAS_M_5F_modesMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_M_5F_modesMap : public cGenericAbstractEnumerator {
  public : cEnumerator_M_5F_modesMap (const GALGAS_M_5F_modesMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_AC_5F_machineDefinition current_mModeDefinition (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_M_5F_modesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@M_modesMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_modesMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_AC_5F_machineDefinition mAttribute_mModeDefinition ;

//--- Constructor
  public : cMapElement_M_5F_modesMap (const GALGAS_lstring & inKey,
                                      const GALGAS_uint & in_mIndex,
                                      const GALGAS_AC_5F_machineDefinition & in_mModeDefinition
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @M_5F_modesMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_modesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_AC_5F_machineDefinition mAttribute_mModeDefinition ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_M_5F_modesMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_M_5F_modesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_M_5F_modesMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_uint & in_mIndex,
                                            const GALGAS_AC_5F_machineDefinition & in_mModeDefinition) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_modesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_modesMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_M_5F_modesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mModeDefinition (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_M_5F_modesMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @ListForModes list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ListForModes : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ListForModes (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ListForModes (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uint & in_mSourceMode,
                                                  const class GALGAS_uint & in_mTargetMode
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ListForModes extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ListForModes constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_ListForModes constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                       const class GALGAS_uint & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ListForModes inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ListForModes add_operation (const GALGAS_ListForModes & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSourceModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ListForModes ;
 
} ; // End of GALGAS_ListForModes class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_ListForModes : public cGenericAbstractEnumerator {
  public : cEnumerator_ListForModes (const GALGAS_ListForModes & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mSourceMode (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTargetMode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ListForModes_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @ListForModes_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ListForModes_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mSourceMode ;
  public : GALGAS_uint mAttribute_mTargetMode ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ListForModes_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ListForModes_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ListForModes_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ListForModes_2D_element (const GALGAS_uint & in_mSourceMode,
                                           const GALGAS_uint & in_mTargetMode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ListForModes_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ListForModes_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_uint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ListForModes_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSourceMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTargetMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ListForModes_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @C_5F_substractiveModalCompositionComponent class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_substractiveModalCompositionComponent : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_substractiveModalCompositionComponent (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_substractiveModalCompositionComponent constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_substractiveModalCompositionComponent * ptr (void) const { return (const cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_substractiveModalCompositionComponent (const cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_substractiveModalCompositionComponent extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_substractiveModalCompositionComponent constructor_new (const class GALGAS_M_5F_modesMap & inOperand0,
                                                                                           const class GALGAS_ListForModes & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_mExclusionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_mModeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_substractiveModalCompositionComponent class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_substractiveModalCompositionComponent.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @C_5F_additiveModalCompositionComponent class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_additiveModalCompositionComponent : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_additiveModalCompositionComponent (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_additiveModalCompositionComponent constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_additiveModalCompositionComponent * ptr (void) const { return (const cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_additiveModalCompositionComponent (const cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_additiveModalCompositionComponent extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_additiveModalCompositionComponent constructor_new (const class GALGAS_M_5F_modesMap & inOperand0,
                                                                                       const class GALGAS_ListForModes & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_mInclusionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_mModeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_additiveModalCompositionComponent class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_additiveModalCompositionComponent.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @C_5F_trans class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_trans : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_trans (void) ;

//---
  public : inline const class cPtr_C_5F_trans * ptr (void) const { return (const cPtr_C_5F_trans *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_trans (const cPtr_C_5F_trans * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_trans extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_trans constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0,
                                                           const class GALGAS_AC_5F_boolExpression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_trans & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mSourceStateExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mTargetStateExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_trans class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trans ;

#include "separateHeaderFor_C_5F_trans.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_importMachine class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_importMachine : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_importMachine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_importMachine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_importMachine * ptr (void) const { return (const cPtr_C_5F_importMachine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_importMachine (const cPtr_C_5F_importMachine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_importMachine extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_importMachine constructor_new (const class GALGAS_uint & inOperand0,
                                                                   const class GALGAS_L_5F_translationVector & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_importMachine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexOfImportedMachine (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_mTranslationVector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_importMachine class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importMachine ;

#include "separateHeaderFor_C_5F_importMachine.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @C_5F_explicitAutomatonDefinition class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_explicitAutomatonDefinition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_explicitAutomatonDefinition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_explicitAutomatonDefinition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_explicitAutomatonDefinition * ptr (void) const { return (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_explicitAutomatonDefinition (const cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_explicitAutomatonDefinition extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_explicitAutomatonDefinition constructor_new (const class GALGAS_M_5F_stateMap & inOperand0,
                                                                                 const class GALGAS_L_5F_statesDefinitionList & inOperand1,
                                                                                 const class GALGAS_L_5F_statesDefinitionList & inOperand2,
                                                                                 const class GALGAS_L_5F_stateDefinition & inOperand3,
                                                                                 const class GALGAS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfDefinition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_mInitialStatesDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_stateDefinition getter_mStateDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_stateMap getter_mStatesMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_statesDefinitionList getter_mTerminalStatesDefinitionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_explicitAutomatonDefinition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;

#include "separateHeaderFor_C_5F_explicitAutomatonDefinition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @C_5F_boolToSeqExpression class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_boolToSeqExpression : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_boolToSeqExpression (void) ;

//---
  public : inline const class cPtr_C_5F_boolToSeqExpression * ptr (void) const { return (const cPtr_C_5F_boolToSeqExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_boolToSeqExpression (const cPtr_C_5F_boolToSeqExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_boolToSeqExpression extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_boolToSeqExpression constructor_new (const class GALGAS_AC_5F_boolExpression & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_boolToSeqExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_boolExpression getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_boolToSeqExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;

#include "separateHeaderFor_C_5F_boolToSeqExpression.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_existsDefinition class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_existsDefinition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_existsDefinition (void) ;

//---
  public : inline const class cPtr_C_5F_existsDefinition * ptr (void) const { return (const cPtr_C_5F_existsDefinition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_existsDefinition (const cPtr_C_5F_existsDefinition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_existsDefinition extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_existsDefinition constructor_new (const class GALGAS_uint & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_existsDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPreviousVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTotalVariableCount (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_existsDefinition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition ;

#include "separateHeaderFor_C_5F_existsDefinition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_forallDefinition class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_forallDefinition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_forallDefinition (void) ;

//---
  public : inline const class cPtr_C_5F_forallDefinition * ptr (void) const { return (const cPtr_C_5F_forallDefinition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_forallDefinition (const cPtr_C_5F_forallDefinition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_forallDefinition extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_forallDefinition constructor_new (const class GALGAS_uint & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_forallDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPreviousVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTotalVariableCount (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_forallDefinition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition ;

#include "separateHeaderFor_C_5F_forallDefinition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @C_5F_parallelComposition class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_parallelComposition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_parallelComposition (void) ;

//---
  public : inline const class cPtr_C_5F_parallelComposition * ptr (void) const { return (const cPtr_C_5F_parallelComposition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_parallelComposition (const cPtr_C_5F_parallelComposition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_parallelComposition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_parallelComposition constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                         const class GALGAS_AC_5F_machineDefinition & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_parallelComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_parallelComposition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition ;

#include "separateHeaderFor_C_5F_parallelComposition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_orComposition class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_orComposition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_orComposition (void) ;

//---
  public : inline const class cPtr_C_5F_orComposition * ptr (void) const { return (const cPtr_C_5F_orComposition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_orComposition (const cPtr_C_5F_orComposition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_orComposition extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_orComposition constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                   const class GALGAS_AC_5F_machineDefinition & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_orComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_orComposition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orComposition ;

#include "separateHeaderFor_C_5F_orComposition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @C_5F_strongModalComposition class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_strongModalComposition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_strongModalComposition (void) ;

//---
  public : inline const class cPtr_C_5F_strongModalComposition * ptr (void) const { return (const cPtr_C_5F_strongModalComposition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_strongModalComposition (const cPtr_C_5F_strongModalComposition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_strongModalComposition extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_strongModalComposition constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_strongModalComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_strongModalComposition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;

#include "separateHeaderFor_C_5F_strongModalComposition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @C_5F_weakModalComposition class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_weakModalComposition : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_weakModalComposition (void) ;

//---
  public : inline const class cPtr_C_5F_weakModalComposition * ptr (void) const { return (const cPtr_C_5F_weakModalComposition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_weakModalComposition (const cPtr_C_5F_weakModalComposition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_weakModalComposition extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_weakModalComposition constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_AC_5F_machineDefinition & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_weakModalComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_weakModalComposition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;

#include "separateHeaderFor_C_5F_weakModalComposition.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @C_5F_fullSaturationOperation class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_fullSaturationOperation : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_fullSaturationOperation (void) ;

//---
  public : inline const class cPtr_C_5F_fullSaturationOperation * ptr (void) const { return (const cPtr_C_5F_fullSaturationOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_fullSaturationOperation (const cPtr_C_5F_fullSaturationOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_fullSaturationOperation extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_fullSaturationOperation constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_fullSaturationOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_fullSaturationOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;

#include "separateHeaderFor_C_5F_fullSaturationOperation.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @C_5F_complementationOperation class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_complementationOperation : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_complementationOperation (void) ;

//---
  public : inline const class cPtr_C_5F_complementationOperation * ptr (void) const { return (const cPtr_C_5F_complementationOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_complementationOperation (const cPtr_C_5F_complementationOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_complementationOperation extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_complementationOperation constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_complementationOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_complementationOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation ;

#include "separateHeaderFor_C_5F_complementationOperation.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @C_5F_suppressTerminalStatesOperation class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_suppressTerminalStatesOperation : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_suppressTerminalStatesOperation (void) ;

//---
  public : inline const class cPtr_C_5F_suppressTerminalStatesOperation * ptr (void) const { return (const cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_suppressTerminalStatesOperation (const cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_suppressTerminalStatesOperation extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_suppressTerminalStatesOperation constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_suppressTerminalStatesOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;

#include "separateHeaderFor_C_5F_suppressTerminalStatesOperation.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @C_5F_suppressInitialStatesOperation class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_suppressInitialStatesOperation : public GALGAS_AC_5F_machineDefinition {
//--- Constructor
  public : GALGAS_C_5F_suppressInitialStatesOperation (void) ;

//---
  public : inline const class cPtr_C_5F_suppressInitialStatesOperation * ptr (void) const { return (const cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_suppressInitialStatesOperation (const cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_suppressInitialStatesOperation extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_suppressInitialStatesOperation constructor_new (const class GALGAS_AC_5F_machineDefinition & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_suppressInitialStatesOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;

#include "separateHeaderFor_C_5F_suppressInitialStatesOperation.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @AC_5F_job class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_AC_5F_job : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_AC_5F_job (void) ;

//---
  public : inline const class cPtr_AC_5F_job * ptr (void) const { return (const cPtr_AC_5F_job *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_AC_5F_job (const cPtr_AC_5F_job * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_AC_5F_job extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_AC_5F_job & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_AC_5F_job class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_job ;

#include "separateHeaderFor_AC_5F_job.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @C_5F_machineDisplayStates class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDisplayStates : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDisplayStates (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDisplayStates constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDisplayStates * ptr (void) const { return (const cPtr_C_5F_machineDisplayStates *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDisplayStates (const cPtr_C_5F_machineDisplayStates * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDisplayStates extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDisplayStates constructor_new (const class GALGAS_uint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDisplayStates class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;

#include "separateHeaderFor_C_5F_machineDisplayStates.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @C_5F_machineDisplayInitialStates class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDisplayInitialStates : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDisplayInitialStates (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDisplayInitialStates constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDisplayInitialStates * ptr (void) const { return (const cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDisplayInitialStates (const cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDisplayInitialStates extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDisplayInitialStates constructor_new (const class GALGAS_uint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayInitialStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDisplayInitialStates class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;

#include "separateHeaderFor_C_5F_machineDisplayInitialStates.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @C_5F_machineDisplayTerminalStates class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDisplayTerminalStates : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDisplayTerminalStates (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDisplayTerminalStates constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDisplayTerminalStates * ptr (void) const { return (const cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDisplayTerminalStates (const cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDisplayTerminalStates extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDisplayTerminalStates constructor_new (const class GALGAS_uint & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDisplayTerminalStates class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;

#include "separateHeaderFor_C_5F_machineDisplayTerminalStates.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @C_5F_machineDisplayTransitions class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDisplayTransitions : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDisplayTransitions (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDisplayTransitions constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDisplayTransitions * ptr (void) const { return (const cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDisplayTransitions (const cPtr_C_5F_machineDisplayTransitions * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDisplayTransitions extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDisplayTransitions constructor_new (const class GALGAS_uint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDisplayTransitions & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDisplayTransitions class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;

#include "separateHeaderFor_C_5F_machineDisplayTransitions.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @C_5F_machineCheckIdentical class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineCheckIdentical : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineCheckIdentical (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineCheckIdentical constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineCheckIdentical * ptr (void) const { return (const cPtr_C_5F_machineCheckIdentical *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineCheckIdentical (const cPtr_C_5F_machineCheckIdentical * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineCheckIdentical extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineCheckIdentical constructor_new (const class GALGAS_uint & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheckIdentical & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex_31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex_32_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineCheckIdentical class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;

#include "separateHeaderFor_C_5F_machineCheckIdentical.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_inputConfigurationForScenario list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_inputConfigurationForScenario : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_inputConfigurationForScenario (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_inputConfigurationForScenario (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_luint & in_mInputValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_inputConfigurationForScenario extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_inputConfigurationForScenario constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_inputConfigurationForScenario constructor_listWithValue (const class GALGAS_luint & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_luint & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_inputConfigurationForScenario add_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_luint constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_luint & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_luint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_luint & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_luint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_luint & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mInputValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_inputConfigurationForScenario ;
 
} ; // End of GALGAS_L_5F_inputConfigurationForScenario class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_inputConfigurationForScenario : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_luint current_mInputValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_inputConfigurationForScenario_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @L_5F_inputConfigurationForScenario_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_inputConfigurationForScenario_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_luint mAttribute_mInputValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_L_5F_inputConfigurationForScenario_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_inputConfigurationForScenario_2D_element (const GALGAS_luint & in_mInputValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_inputConfigurationForScenario_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_inputConfigurationForScenario_2D_element constructor_new (const class GALGAS_luint & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mInputValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_inputConfigurationForScenario_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @L_inputScenario list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_inputScenario : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_inputScenario (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_inputScenario (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_inputScenario extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_inputScenario constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_inputScenario constructor_listWithValue (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_inputScenario inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_inputScenario add_operation (const GALGAS_L_5F_inputScenario & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_L_5F_inputConfigurationForScenario constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_L_5F_inputConfigurationForScenario & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_mInputConfigurationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_inputScenario ;
 
} ; // End of GALGAS_L_5F_inputScenario class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_inputScenario : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_inputScenario (const GALGAS_L_5F_inputScenario & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_L_5F_inputConfigurationForScenario current_mInputConfiguration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_inputScenario_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_5F_inputScenario_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_inputScenario_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_L_5F_inputConfigurationForScenario mAttribute_mInputConfiguration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_L_5F_inputScenario_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_inputScenario_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_inputScenario_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_inputScenario_2D_element (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_inputScenario_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_inputScenario_2D_element constructor_new (const class GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_inputScenario_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputConfigurationForScenario getter_mInputConfiguration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_inputScenario_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @L_scenarioList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_scenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_scenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_scenarioList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mScenarioTitle,
                                                  const class GALGAS_L_5F_inputScenario & in_mInputScenario
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_scenarioList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_scenarioList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_scenarioList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_L_5F_inputScenario & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_scenarioList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_L_5F_inputScenario & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_scenarioList add_operation (const GALGAS_L_5F_scenarioList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_L_5F_inputScenario constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_L_5F_inputScenario & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_L_5F_inputScenario & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_L_5F_inputScenario & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_L_5F_inputScenario & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_L_5F_inputScenario & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_mInputScenarioAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioTitleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_scenarioList ;
 
} ; // End of GALGAS_L_5F_scenarioList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_scenarioList : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_scenarioList (const GALGAS_L_5F_scenarioList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mScenarioTitle (LOCATION_ARGS) const ;
  public : class GALGAS_L_5F_inputScenario current_mInputScenario (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_scenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_scenarioList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_5F_scenarioList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_scenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mScenarioTitle ;
  public : GALGAS_L_5F_inputScenario mAttribute_mInputScenario ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_L_5F_scenarioList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_scenarioList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_scenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_scenarioList_2D_element (const GALGAS_lstring & in_mScenarioTitle,
                                                const GALGAS_L_5F_inputScenario & in_mInputScenario) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_scenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_scenarioList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_L_5F_inputScenario & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_scenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_inputScenario getter_mInputScenario (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioTitle (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_scenarioList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_scenarioComponent class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_scenarioComponent : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_scenarioComponent (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_scenarioComponent constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_scenarioComponent * ptr (void) const { return (const cPtr_C_5F_scenarioComponent *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_scenarioComponent extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_scenarioComponent constructor_new (const class GALGAS_uint & inOperand0,
                                                                       const class GALGAS_uint & inOperand1,
                                                                       const class GALGAS_uint & inOperand2,
                                                                       const class GALGAS_M_5F_variablesMap & inOperand3,
                                                                       const class GALGAS_L_5F_scenarioList & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_scenarioList getter_mScenarioList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_scenarioComponent class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;

#include "separateHeaderFor_C_5F_scenarioComponent.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @typeUse_5F_AND class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeUse_5F_AND : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeUse_5F_AND (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeUse_5F_AND constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeUse_5F_AND * ptr (void) const { return (const cPtr_typeUse_5F_AND *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeUse_5F_AND (const cPtr_typeUse_5F_AND * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeUse_5F_AND extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeUse_5F_AND constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeUse_5F_AND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeUse_5F_AND class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeUse_5F_AND ;

#include "separateHeaderFor_typeUse_5F_AND.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @typeUse_5F_ITE class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeUse_5F_ITE : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeUse_5F_ITE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeUse_5F_ITE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeUse_5F_ITE * ptr (void) const { return (const cPtr_typeUse_5F_ITE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeUse_5F_ITE (const cPtr_typeUse_5F_ITE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeUse_5F_ITE extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeUse_5F_ITE constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeUse_5F_ITE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeUse_5F_ITE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeUse_5F_ITE ;

#include "separateHeaderFor_typeUse_5F_ITE.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @typeUse_5F_AND_5F_ITE class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeUse_5F_AND_5F_ITE : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeUse_5F_AND_5F_ITE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeUse_5F_AND_5F_ITE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeUse_5F_AND_5F_ITE * ptr (void) const { return (const cPtr_typeUse_5F_AND_5F_ITE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeUse_5F_AND_5F_ITE (const cPtr_typeUse_5F_AND_5F_ITE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeUse_5F_AND_5F_ITE extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeUse_5F_AND_5F_ITE constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeUse_5F_AND_5F_ITE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeUse_5F_AND_5F_ITE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ;

#include "separateHeaderFor_typeUse_5F_AND_5F_ITE.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typeResize_5F_AND_5F_cache class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeResize_5F_AND_5F_cache : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeResize_5F_AND_5F_cache (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeResize_5F_AND_5F_cache constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeResize_5F_AND_5F_cache * ptr (void) const { return (const cPtr_typeResize_5F_AND_5F_cache *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeResize_5F_AND_5F_cache (const cPtr_typeResize_5F_AND_5F_cache * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeResize_5F_AND_5F_cache extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeResize_5F_AND_5F_cache constructor_new (const class GALGAS_luint & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeResize_5F_AND_5F_cache & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mNewSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeResize_5F_AND_5F_cache class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ;

#include "separateHeaderFor_typeResize_5F_AND_5F_cache.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typeResize_5F_ITE_5F_cache class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeResize_5F_ITE_5F_cache : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeResize_5F_ITE_5F_cache (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeResize_5F_ITE_5F_cache constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeResize_5F_ITE_5F_cache * ptr (void) const { return (const cPtr_typeResize_5F_ITE_5F_cache *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeResize_5F_ITE_5F_cache (const cPtr_typeResize_5F_ITE_5F_cache * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeResize_5F_ITE_5F_cache extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeResize_5F_ITE_5F_cache constructor_new (const class GALGAS_luint & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeResize_5F_ITE_5F_cache & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mNewSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeResize_5F_ITE_5F_cache class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ;

#include "separateHeaderFor_typeResize_5F_ITE_5F_cache.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @typeResizeMap class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeResizeMap : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeResizeMap (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeResizeMap constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeResizeMap * ptr (void) const { return (const cPtr_typeResizeMap *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeResizeMap (const cPtr_typeResizeMap * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeResizeMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeResizeMap constructor_new (const class GALGAS_luint & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeResizeMap & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mNewSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeResizeMap class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeResizeMap ;

#include "separateHeaderFor_typeResizeMap.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeDisplayBDDstats class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeDisplayBDDstats : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_typeDisplayBDDstats (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeDisplayBDDstats constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeDisplayBDDstats * ptr (void) const { return (const cPtr_typeDisplayBDDstats *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeDisplayBDDstats (const cPtr_typeDisplayBDDstats * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeDisplayBDDstats extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeDisplayBDDstats constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeDisplayBDDstats class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ;

#include "separateHeaderFor_typeDisplayBDDstats.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @L_jobList list                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_jobList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_L_5F_jobList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_L_5F_jobList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_AC_5F_job & in_mComponent
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_jobList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_jobList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_L_5F_jobList constructor_listWithValue (const class GALGAS_AC_5F_job & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_L_5F_jobList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_AC_5F_job & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_L_5F_jobList add_operation (const GALGAS_L_5F_jobList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_AC_5F_job constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_AC_5F_job & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_AC_5F_job & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_AC_5F_job & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_AC_5F_job & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_AC_5F_job & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_job getter_mComponentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_L_5F_jobList ;
 
} ; // End of GALGAS_L_5F_jobList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_L_5F_jobList : public cGenericAbstractEnumerator {
  public : cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_AC_5F_job current_mComponent (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_L_5F_jobList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @L_5F_jobList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_L_5F_jobList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_AC_5F_job mAttribute_mComponent ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_L_5F_jobList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_L_5F_jobList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & in_mComponent) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_L_5F_jobList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_L_5F_jobList_2D_element constructor_new (const class GALGAS_AC_5F_job & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_L_5F_jobList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_job getter_mComponent (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_L_5F_jobList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @M_machinesMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_machinesMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_M_5F_machinesMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_machinesMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_M_5F_machinesMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) ;
  public : GALGAS_M_5F_machinesMap & operator = (const GALGAS_M_5F_machinesMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_machinesMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_machinesMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_M_5F_machinesMap constructor_mapWithMapToOverride (const class GALGAS_M_5F_machinesMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_M_5F_variablesMap & inOperand4,
                                                      const class GALGAS_stringlist & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   class GALGAS_M_5F_variablesMap constinArgument4,
                                                   class GALGAS_stringlist constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_M_5F_variablesMap & outArgument4,
                                                   class GALGAS_stringlist & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInputAndInternalVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInputVariableCountForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNameListForKey (class GALGAS_stringlist constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMVariablesMapForKey (class GALGAS_M_5F_variablesMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_M_5F_variablesMap & outArgument4,
                                                   class GALGAS_stringlist & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCountForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNameListForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMapForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_machinesMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_M_5F_machinesMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_M_5F_machinesMap ;
 
} ; // End of GALGAS_M_5F_machinesMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_M_5F_machinesMap : public cGenericAbstractEnumerator {
  public : cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInputVariableCount (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInputAndInternalVariableCount (LOCATION_ARGS) const ;
  public : class GALGAS_M_5F_variablesMap current_mVariablesMap (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mNameList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_M_5F_machinesMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@M_machinesMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_M_5F_machinesMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mInputVariableCount ;
  public : GALGAS_uint mAttribute_mInputAndInternalVariableCount ;
  public : GALGAS_M_5F_variablesMap mAttribute_mVariablesMap ;
  public : GALGAS_stringlist mAttribute_mNameList ;

//--- Constructor
  public : cMapElement_M_5F_machinesMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mIndex,
                                         const GALGAS_uint & in_mInputVariableCount,
                                         const GALGAS_uint & in_mInputAndInternalVariableCount,
                                         const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                         const GALGAS_stringlist & in_mNameList
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @M_5F_machinesMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_M_5F_machinesMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mInputVariableCount ;
  public : GALGAS_uint mAttribute_mInputAndInternalVariableCount ;
  public : GALGAS_M_5F_variablesMap mAttribute_mVariablesMap ;
  public : GALGAS_stringlist mAttribute_mNameList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_M_5F_machinesMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_M_5F_machinesMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_M_5F_machinesMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_M_5F_machinesMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mIndex,
                                               const GALGAS_uint & in_mInputVariableCount,
                                               const GALGAS_uint & in_mInputAndInternalVariableCount,
                                               const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                               const GALGAS_stringlist & in_mNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_M_5F_machinesMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_M_5F_machinesMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_uint & inOperand1,
                                                                            const class GALGAS_uint & inOperand2,
                                                                            const class GALGAS_uint & inOperand3,
                                                                            const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                            const class GALGAS_stringlist & inOperand5
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_M_5F_machinesMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_M_5F_machinesMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_L_5F_jobList mAttribute_componentsMap ;
  public : GALGAS_M_5F_machinesMap mAttribute_machinesMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_L_5F_jobList & in_componentsMap,
                                   const GALGAS_M_5F_machinesMap & in_machinesMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_L_5F_jobList & inOperand0,
                                                                const class GALGAS_M_5F_machinesMap & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_jobList getter_componentsMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_machinesMap getter_machinesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Parser class 'sara_parser' declaration                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_sara_5F_parser {
//--- Virtual destructor
  public : virtual ~ cParser_sara_5F_parser (void) {}

//--- Non terminal declarations
  protected : virtual void nt_component_ (class GALGAS_semanticContext & ioArgument0,
                                          class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_component_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                         class GALGAS_M_5F_variablesMap & ioArgument1,
                                                         class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                         class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_5F_factor_ (const class GALGAS_semanticContext constinArgument0,
                                                                   class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                   class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                   class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_5F_factor_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_5F_term_ (const class GALGAS_semanticContext constinArgument0,
                                                                 class GALGAS_M_5F_variablesMap & ioArgument1,
                                                                 class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                 class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_definition_5F_expression_5F_term_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_automaton_ (const class GALGAS_semanticContext constinArgument0,
                                                      class GALGAS_M_5F_variablesMap & ioArgument1,
                                                      class GALGAS_AC_5F_machineDefinition & outArgument2,
                                                      class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_automaton_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_and_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                        class GALGAS_M_5F_variablesMap & ioArgument1,
                                                        class GALGAS_AC_5F_boolExpression & outArgument2,
                                                        class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_and_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_bool_5F_expression_ (const class GALGAS_semanticContext constinArgument0,
                                                         class GALGAS_M_5F_variablesMap & ioArgument1,
                                                         class GALGAS_AC_5F_boolExpression & outArgument2,
                                                         class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_bool_5F_expression_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_primary_ (const class GALGAS_semanticContext constinArgument0,
                                              class GALGAS_M_5F_variablesMap & ioArgument1,
                                              class GALGAS_AC_5F_boolExpression & outArgument2,
                                              class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_io_5F_primary_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_modalcompadd_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                           class GALGAS_M_5F_variablesMap & ioArgument1,
                                                           class GALGAS_M_5F_modesMap & outArgument2,
                                                           class GALGAS_ListForModes & outArgument3,
                                                           class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_modalcompadd_5F_definition_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_modalcompsub_5F_definition_ (const class GALGAS_semanticContext constinArgument0,
                                                           class GALGAS_M_5F_variablesMap & ioArgument1,
                                                           class GALGAS_M_5F_modesMap & outArgument2,
                                                           class GALGAS_ListForModes & outArgument3,
                                                           class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_modalcompsub_5F_definition_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_sara_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_sara_5F_parser_start_5F_symbol_i0_ (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_start_5F_symbol_i0_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i1_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument0,
                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i13_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i13_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i14_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i14_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i15_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i15_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i16_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i16_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i17_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i17_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i18_ (GALGAS_semanticContext & ioArgument0,
                                                       C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_component_i18_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_bool_5F_expression_i19_ (const GALGAS_semanticContext constinArgument0,
                                                                      GALGAS_M_5F_variablesMap & ioArgument1,
                                                                      GALGAS_AC_5F_boolExpression & outArgument2,
                                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_bool_5F_expression_i19_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_and_5F_expression_i20_ (const GALGAS_semanticContext constinArgument0,
                                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                                     C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_and_5F_expression_i20_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i21_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i21_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i22_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i22_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i23_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i23_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i24_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i24_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i25_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i25_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i26_ (const GALGAS_semanticContext constinArgument0,
                                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                                           C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_io_5F_primary_i26_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_i27_ (const GALGAS_semanticContext constinArgument0,
                                                                      GALGAS_M_5F_variablesMap & ioArgument1,
                                                                      GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                      C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_i27_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_term_i28_ (const GALGAS_semanticContext constinArgument0,
                                                                              GALGAS_M_5F_variablesMap & ioArgument1,
                                                                              GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                              C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_term_i28_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_modalcompadd_5F_definition_i29_ (const GALGAS_semanticContext constinArgument0,
                                                                        GALGAS_M_5F_variablesMap & ioArgument1,
                                                                        GALGAS_M_5F_modesMap & outArgument2,
                                                                        GALGAS_ListForModes & outArgument3,
                                                                        C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_modalcompadd_5F_definition_i29_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_modalcompsub_5F_definition_i30_ (const GALGAS_semanticContext constinArgument0,
                                                                        GALGAS_M_5F_variablesMap & ioArgument1,
                                                                        GALGAS_M_5F_modesMap & outArgument2,
                                                                        GALGAS_ListForModes & outArgument3,
                                                                        C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_modalcompsub_5F_definition_i30_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_ (const GALGAS_semanticContext constinArgument0,
                                                                                GALGAS_M_5F_variablesMap & ioArgument1,
                                                                                GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                                C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_ (const GALGAS_semanticContext constinArgument0,
                                                                                GALGAS_M_5F_variablesMap & ioArgument1,
                                                                                GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                                C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_parse (C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_explicit_5F_automaton_i33_ (const GALGAS_semanticContext constinArgument0,
                                                                   GALGAS_M_5F_variablesMap & ioArgument1,
                                                                   GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                   C_Lexique_sara_5F_scanner * inLexique) ;

  protected : void rule_sara_5F_parser_explicit_5F_automaton_i33_parse (C_Lexique_sara_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner *) = 0 ;

  protected : virtual int32_t select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_importBoolMachine class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_importBoolMachine : public GALGAS_AC_5F_boolExpression {
//--- Constructor
  public : GALGAS_C_5F_importBoolMachine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_importBoolMachine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_importBoolMachine * ptr (void) const { return (const cPtr_C_5F_importBoolMachine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_importBoolMachine (const cPtr_C_5F_importBoolMachine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_importBoolMachine extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_importBoolMachine constructor_new (const class GALGAS_uint & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_L_5F_translationVector & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_importBoolMachine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexOfImportedMachine (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_L_5F_translationVector getter_mTranslationVector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_importBoolMachine class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;

#include "separateHeaderFor_C_5F_importBoolMachine.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_5F_machineCheck class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineCheck : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineCheck (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineCheck constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineCheck * ptr (void) const { return (const cPtr_C_5F_machineCheck *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineCheck (const cPtr_C_5F_machineCheck * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineCheck extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineCheck constructor_new (const class GALGAS_uint & inOperand0,
                                                                  const class GALGAS_bool & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineCheck & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCheckMachineIsBoolean (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineCheck class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheck ;

#include "separateHeaderFor_C_5F_machineCheck.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_5F_machineComponent class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineComponent : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineComponent (void) ;

//---
  public : inline const class cPtr_C_5F_machineComponent * ptr (void) const { return (const cPtr_C_5F_machineComponent *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineComponent (const cPtr_C_5F_machineComponent * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineComponent extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineComponent constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_uint & inOperand2,
                                                                      const class GALGAS_uint & inOperand3,
                                                                      const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                      const class GALGAS_stringlist & inOperand5,
                                                                      const class GALGAS_AC_5F_machineDefinition & inOperand6
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_AC_5F_machineDefinition getter_mDefinition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineComponent class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineComponent ;

#include "separateHeaderFor_C_5F_machineComponent.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @C_5F_machineDefinedByAdditiveModalComp class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDefinedByAdditiveModalComp : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDefinedByAdditiveModalComp (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDefinedByAdditiveModalComp constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDefinedByAdditiveModalComp * ptr (void) const { return (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDefinedByAdditiveModalComp (const cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDefinedByAdditiveModalComp extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDefinedByAdditiveModalComp constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_uint & inOperand1,
                                                                                       const class GALGAS_uint & inOperand2,
                                                                                       const class GALGAS_uint & inOperand3,
                                                                                       const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                                       const class GALGAS_M_5F_modesMap & inOperand5,
                                                                                       const class GALGAS_ListForModes & inOperand6
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_mInclusionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_mModeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDefinedByAdditiveModalComp class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedByAdditiveModalComp.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @C_5F_machineDefinedBySubstractiveModalComp class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_C_5F_machineDefinedBySubstractiveModalComp : public GALGAS_AC_5F_job {
//--- Constructor
  public : GALGAS_C_5F_machineDefinedBySubstractiveModalComp (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_C_5F_machineDefinedBySubstractiveModalComp constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_C_5F_machineDefinedBySubstractiveModalComp * ptr (void) const { return (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_C_5F_machineDefinedBySubstractiveModalComp (const cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_C_5F_machineDefinedBySubstractiveModalComp extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_C_5F_machineDefinedBySubstractiveModalComp constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1,
                                                                                           const class GALGAS_uint & inOperand2,
                                                                                           const class GALGAS_uint & inOperand3,
                                                                                           const class GALGAS_M_5F_variablesMap & inOperand4,
                                                                                           const class GALGAS_M_5F_modesMap & inOperand5,
                                                                                           const class GALGAS_ListForModes & inOperand6
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ListForModes getter_mExclusionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputAndInternalVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInputVariableCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMachineIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_modesMap getter_mModeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_M_5F_variablesMap getter_mVariablesMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_C_5F_machineDefinedBySubstractiveModalComp class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedBySubstractiveModalComp.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'performComputations'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performComputations (const class GALGAS_L_5F_jobList constinArgument0,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

#endif
