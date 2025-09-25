#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator__32_lstringlist final {
  public: DownEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList) ;

  public: ~ DownEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator__32_lstringlist (const DownEnumerator__32_lstringlist &) = delete ;
  private: DownEnumerator__32_lstringlist & operator = (const DownEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__32_lstringlist final {
  public: UpEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList)  ;

  public: ~ UpEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator__32_lstringlist (const UpEnumerator__32_lstringlist &) = delete ;
  private: UpEnumerator__32_lstringlist & operator = (const UpEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @2lstringlist list
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;

//--- Default constructor
  public: GGS__32_lstringlist (void) ;

//--- Destructor
  public: virtual ~ GGS__32_lstringlist (void) = default ;

//--- Copy
  public: GGS__32_lstringlist (const GGS__32_lstringlist &) = default ;
  public: GGS__32_lstringlist & operator = (const GGS__32_lstringlist &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS__32_lstringlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS__32_lstringlist subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS__32_lstringlist inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__32_lstringlist ;
  friend class DownEnumerator__32_lstringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstringlist_2E_element & operator = (const GGS__32_lstringlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

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
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_sara_5F_scanner (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_literal_5F_string = 2 ;
  public: static const int32_t kToken_machineIdf = 3 ;
  public: static const int32_t kToken_literal_5F_integer = 4 ;
  public: static const int32_t kToken_comment = 5 ;
  public: static const int32_t kToken_auto = 6 ;
  public: static const int32_t kToken_state = 7 ;
  public: static const int32_t kToken_first = 8 ;
  public: static const int32_t kToken_last = 9 ;
  public: static const int32_t kToken_goto = 10 ;
  public: static const int32_t kToken_true = 11 ;
  public: static const int32_t kToken_false = 12 ;
  public: static const int32_t kToken_nofirst = 13 ;
  public: static const int32_t kToken_nolast = 14 ;
  public: static const int32_t kToken_modalcompadd = 15 ;
  public: static const int32_t kToken_exclude = 16 ;
  public: static const int32_t kToken_modalcompsub = 17 ;
  public: static const int32_t kToken_include = 18 ;
  public: static const int32_t kToken_to = 19 ;
  public: static const int32_t kToken_scenario = 20 ;
  public: static const int32_t kToken_trans = 21 ;
  public: static const int32_t kToken_display = 22 ;
  public: static const int32_t kToken_bdd = 23 ;
  public: static const int32_t kToken_bool = 24 ;
  public: static const int32_t kToken_map = 25 ;
  public: static const int32_t kToken_check = 26 ;
  public: static const int32_t kToken_checkbool = 27 ;
  public: static const int32_t kToken_checkidentical = 28 ;
  public: static const int32_t kToken__2C_ = 29 ;
  public: static const int32_t kToken__3B_ = 30 ;
  public: static const int32_t kToken__3A_ = 31 ;
  public: static const int32_t kToken__7B_ = 32 ;
  public: static const int32_t kToken__7D_ = 33 ;
  public: static const int32_t kToken__2D__3E_ = 34 ;
  public: static const int32_t kToken__26_ = 35 ;
  public: static const int32_t kToken__7E_ = 36 ;
  public: static const int32_t kToken__3F_ = 37 ;
  public: static const int32_t kToken__21_ = 38 ;
  public: static const int32_t kToken__7C_ = 39 ;
  public: static const int32_t kToken__7C__7C_ = 40 ;
  public: static const int32_t kToken__2B_ = 41 ;
  public: static const int32_t kToken__28_ = 42 ;
  public: static const int32_t kToken__29_ = 43 ;
  public: static const int32_t kToken__3A__3D_ = 44 ;
  public: static const int32_t kToken__5E_ = 45 ;
  public: static const int32_t kToken__3D_ = 46 ;
  public: static const int32_t kToken__2A_ = 47 ;
  public: static const int32_t kToken__40_ = 48 ;
  public: static const int32_t kToken__2A__2A_ = 49 ;

//--- Key words table 'keyWordList'
  public: static int32_t search_into_keyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_luint synthetizedAttribute_ulongValue (void) const ;


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
// Phase 1: @M_5F_variablesMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_M_5F_variablesMap final {

  public: DownEnumerator_M_5F_variablesMap (const class GGS_M_5F_variablesMap & inMap) ;

  public: ~ DownEnumerator_M_5F_variablesMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_M_5F_variablesMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_M_5F_variablesMap (const DownEnumerator_M_5F_variablesMap &) = delete ;
  private: DownEnumerator_M_5F_variablesMap & operator = (const DownEnumerator_M_5F_variablesMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_M_5F_variablesMap final {
  public: UpEnumerator_M_5F_variablesMap (const class GGS_M_5F_variablesMap & inMap)  ;

  public: ~ UpEnumerator_M_5F_variablesMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_M_5F_variablesMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_M_5F_variablesMap (const UpEnumerator_M_5F_variablesMap &) = delete ;
  private: UpEnumerator_M_5F_variablesMap & operator = (const UpEnumerator_M_5F_variablesMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_M_5F_variablesMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_M_5F_variablesMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_M_5F_variablesMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_M_5F_variablesMap (void) ;

//--- Handle copy
  public: GGS_M_5F_variablesMap (const GGS_M_5F_variablesMap & inSource) ;
  public: GGS_M_5F_variablesMap & operator = (const GGS_M_5F_variablesMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_M_5F_variablesMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_variablesMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_variablesMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_variablesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_M_5F_variablesMap class_func_mapWithMapToOverride (const class GGS_M_5F_variablesMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_M_5F_variablesMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_M_5F_variablesMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_M_5F_variablesMap ;
  friend class DownEnumerator_M_5F_variablesMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_variablesMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_variablesMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_M_5F_variablesMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_M_5F_variablesMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_M_5F_variablesMap_2E_element (const GGS_M_5F_variablesMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_M_5F_variablesMap_2E_element & operator = (const GGS_M_5F_variablesMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_variablesMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_variablesMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_variablesMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_uint & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: M_variablesMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_variablesMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_M_5F_variablesMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_M_5F_variablesMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_M_5F_variablesMap_2E_element_3F_ (const GGS_M_5F_variablesMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_M_5F_variablesMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_M_5F_variablesMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_M_5F_variablesMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_stateMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_M_5F_stateMap final {

  public: DownEnumerator_M_5F_stateMap (const class GGS_M_5F_stateMap & inMap) ;

  public: ~ DownEnumerator_M_5F_stateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_M_5F_stateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_M_5F_stateMap (const DownEnumerator_M_5F_stateMap &) = delete ;
  private: DownEnumerator_M_5F_stateMap & operator = (const DownEnumerator_M_5F_stateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_M_5F_stateMap final {
  public: UpEnumerator_M_5F_stateMap (const class GGS_M_5F_stateMap & inMap)  ;

  public: ~ UpEnumerator_M_5F_stateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_M_5F_stateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_M_5F_stateMap (const UpEnumerator_M_5F_stateMap &) = delete ;
  private: UpEnumerator_M_5F_stateMap & operator = (const UpEnumerator_M_5F_stateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_M_5F_stateMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_M_5F_stateMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_M_5F_stateMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_M_5F_stateMap (void) ;

//--- Handle copy
  public: GGS_M_5F_stateMap (const GGS_M_5F_stateMap & inSource) ;
  public: GGS_M_5F_stateMap & operator = (const GGS_M_5F_stateMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_M_5F_stateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_stateMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_stateMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_stateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_M_5F_stateMap class_func_mapWithMapToOverride (const class GGS_M_5F_stateMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_defineState (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_M_5F_stateMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_M_5F_stateMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_M_5F_stateMap ;
  friend class DownEnumerator_M_5F_stateMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_stateMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_stateMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_M_5F_stateMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_M_5F_stateMap_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_M_5F_stateMap_2E_element (const GGS_M_5F_stateMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_M_5F_stateMap_2E_element & operator = (const GGS_M_5F_stateMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_stateMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_uint & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_stateMap_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_stateMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_uint & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: M_stateMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_stateMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_M_5F_stateMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_M_5F_stateMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_M_5F_stateMap_2E_element_3F_ (const GGS_M_5F_stateMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_M_5F_stateMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_M_5F_stateMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_M_5F_stateMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_translationVector list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_L_5F_translationVector final {
  public: DownEnumerator_L_5F_translationVector (const class GGS_L_5F_translationVector & inList) ;

  public: ~ DownEnumerator_L_5F_translationVector (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mTargetSlot (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_translationVector_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_translationVector_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_L_5F_translationVector (const DownEnumerator_L_5F_translationVector &) = delete ;
  private: DownEnumerator_L_5F_translationVector & operator = (const DownEnumerator_L_5F_translationVector &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_L_5F_translationVector final {
  public: UpEnumerator_L_5F_translationVector (const class GGS_L_5F_translationVector & inList)  ;

  public: ~ UpEnumerator_L_5F_translationVector (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mTargetSlot (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_translationVector_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_translationVector_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_L_5F_translationVector (const UpEnumerator_L_5F_translationVector &) = delete ;
  private: UpEnumerator_L_5F_translationVector & operator = (const UpEnumerator_L_5F_translationVector &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @L_translationVector list
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_translationVector : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_L_5F_translationVector_2E_element> mArray ;

//--- Default constructor
  public: GGS_L_5F_translationVector (void) ;

//--- Destructor
  public: virtual ~ GGS_L_5F_translationVector (void) = default ;

//--- Copy
  public: GGS_L_5F_translationVector (const GGS_L_5F_translationVector &) = default ;
  public: GGS_L_5F_translationVector & operator = (const GGS_L_5F_translationVector &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_L_5F_translationVector_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_L_5F_translationVector subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_L_5F_translationVector (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mTargetSlot
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_translationVector init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_translationVector extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_translationVector class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_L_5F_translationVector class_func_listWithValue (const class GGS_uint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_L_5F_translationVector inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_L_5F_translationVector_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_L_5F_translationVector add_operation (const GGS_L_5F_translationVector & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetSlotAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTargetSlotAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_translationVector getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_translationVector getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_translationVector getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_L_5F_translationVector ;
  friend class DownEnumerator_L_5F_translationVector ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_translationVector ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_translationVector_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_translationVector_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mTargetSlot ;
  public: inline GGS_uint readProperty_mTargetSlot (void) const {
    return mProperty_mTargetSlot ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_translationVector_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetSlot (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetSlot = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_translationVector_2E_element (const GGS_uint & in_mTargetSlot) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_translationVector_2E_element (const GGS_L_5F_translationVector_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_translationVector_2E_element & operator = (const GGS_L_5F_translationVector_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_translationVector_2E_element init_21_ (const class GGS_uint & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_translationVector_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_translationVector_2E_element class_func_new (const class GGS_uint & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AC_5F_boolExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_boolExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_AC_5F_boolExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_AC_5F_boolExpression (const class cPtr_AC_5F_boolExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AC_5F_boolExpression init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AC_5F_boolExpression extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_boolExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression ;

#include "separateHeaderFor_AC_5F_boolExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @AC_5F_boolExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_boolExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_AC_5F_boolExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_AC_5F_boolExpression_2E_weak (const class GGS_AC_5F_boolExpression & inSource) ;

  public: GGS_AC_5F_boolExpression_2E_weak & operator = (const class GGS_AC_5F_boolExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_AC_5F_boolExpression_2E_weak init_nil (void) {
    GGS_AC_5F_boolExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_AC_5F_boolExpression bang_AC_5F_boolExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_AC_5F_boolExpression unwrappedValue (void) const ;

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
  public: static GGS_AC_5F_boolExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AC_5F_boolExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_boolExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_importBoolMachine reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_importBoolMachine : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_importBoolMachine (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_importBoolMachine (const class cPtr_C_5F_importBoolMachine * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mIndexOfImportedMachine (void) const ;
  public: void setProperty_mIndexOfImportedMachine (const GGS_uint & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

  public: class GGS_L_5F_translationVector readProperty_mTranslationVector (void) const ;
  public: void setProperty_mTranslationVector (const GGS_L_5F_translationVector & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_importBoolMachine init_21__21__21_ (const class GGS_uint & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              const class GGS_L_5F_translationVector & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_importBoolMachine extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_importBoolMachine class_func_new (const class GGS_uint & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  const class GGS_L_5F_translationVector & inOperand2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_importBoolMachine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;

#include "separateHeaderFor_C_5F_importBoolMachine.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_importBoolMachine_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_importBoolMachine_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_importBoolMachine_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_importBoolMachine_2E_weak (const class GGS_C_5F_importBoolMachine & inSource) ;

  public: GGS_C_5F_importBoolMachine_2E_weak & operator = (const class GGS_C_5F_importBoolMachine & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_importBoolMachine_2E_weak init_nil (void) {
    GGS_C_5F_importBoolMachine_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_importBoolMachine bang_C_5F_importBoolMachine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_importBoolMachine unwrappedValue (void) const ;

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
  public: static GGS_C_5F_importBoolMachine_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_importBoolMachine_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_importBoolMachine_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_andExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_andExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_andExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_andExpression (const class cPtr_C_5F_andExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_andExpression init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                      const class GGS_AC_5F_boolExpression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_andExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_andExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                              const class GGS_AC_5F_boolExpression & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_andExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_andExpression ;

#include "separateHeaderFor_C_5F_andExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_andExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_andExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_andExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_andExpression_2E_weak (const class GGS_C_5F_andExpression & inSource) ;

  public: GGS_C_5F_andExpression_2E_weak & operator = (const class GGS_C_5F_andExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_andExpression_2E_weak init_nil (void) {
    GGS_C_5F_andExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_andExpression bang_C_5F_andExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_andExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_andExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_andExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_andExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_andExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_orExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_orExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_orExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_orExpression (const class cPtr_C_5F_orExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_orExpression init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                     const class GGS_AC_5F_boolExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_orExpression extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_orExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                             const class GGS_AC_5F_boolExpression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_orExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orExpression ;

#include "separateHeaderFor_C_5F_orExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_orExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_orExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_orExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_orExpression_2E_weak (const class GGS_C_5F_orExpression & inSource) ;

  public: GGS_C_5F_orExpression_2E_weak & operator = (const class GGS_C_5F_orExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_orExpression_2E_weak init_nil (void) {
    GGS_C_5F_orExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_orExpression bang_C_5F_orExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_orExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_orExpression_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_orExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_orExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_xorExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_xorExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_xorExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_xorExpression (const class cPtr_C_5F_xorExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_xorExpression init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                      const class GGS_AC_5F_boolExpression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_xorExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_xorExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                              const class GGS_AC_5F_boolExpression & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_xorExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_xorExpression ;

#include "separateHeaderFor_C_5F_xorExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_xorExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_xorExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_xorExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_xorExpression_2E_weak (const class GGS_C_5F_xorExpression & inSource) ;

  public: GGS_C_5F_xorExpression_2E_weak & operator = (const class GGS_C_5F_xorExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_xorExpression_2E_weak init_nil (void) {
    GGS_C_5F_xorExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_xorExpression bang_C_5F_xorExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_xorExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_xorExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_xorExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_xorExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_xorExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_impliesExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_impliesExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_impliesExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_impliesExpression (const class cPtr_C_5F_impliesExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_impliesExpression init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                          const class GGS_AC_5F_boolExpression & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_impliesExpression extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_impliesExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                  const class GGS_AC_5F_boolExpression & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_impliesExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression ;

#include "separateHeaderFor_C_5F_impliesExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_impliesExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_impliesExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_impliesExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_impliesExpression_2E_weak (const class GGS_C_5F_impliesExpression & inSource) ;

  public: GGS_C_5F_impliesExpression_2E_weak & operator = (const class GGS_C_5F_impliesExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_impliesExpression_2E_weak init_nil (void) {
    GGS_C_5F_impliesExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_impliesExpression bang_C_5F_impliesExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_impliesExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_impliesExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_impliesExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_impliesExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_equalExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_equalExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_equalExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_equalExpression (const class cPtr_C_5F_equalExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_equalExpression init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                        const class GGS_AC_5F_boolExpression & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_equalExpression extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_equalExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                const class GGS_AC_5F_boolExpression & inOperand1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_equalExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_equalExpression ;

#include "separateHeaderFor_C_5F_equalExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_equalExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_equalExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_equalExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_equalExpression_2E_weak (const class GGS_C_5F_equalExpression & inSource) ;

  public: GGS_C_5F_equalExpression_2E_weak & operator = (const class GGS_C_5F_equalExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_equalExpression_2E_weak init_nil (void) {
    GGS_C_5F_equalExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_equalExpression bang_C_5F_equalExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_equalExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_equalExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_equalExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_equalExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_equalExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_notExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_notExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_notExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_notExpression (const class cPtr_C_5F_notExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_notExpression init_21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_notExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_notExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_notExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_notExpression ;

#include "separateHeaderFor_C_5F_notExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_notExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_notExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_notExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_notExpression_2E_weak (const class GGS_C_5F_notExpression & inSource) ;

  public: GGS_C_5F_notExpression_2E_weak & operator = (const class GGS_C_5F_notExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_notExpression_2E_weak init_nil (void) {
    GGS_C_5F_notExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_notExpression bang_C_5F_notExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_notExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_notExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_notExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_notExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_notExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_VariableExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_VariableExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_VariableExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_VariableExpression (const class cPtr_C_5F_VariableExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mInputVarIndex (void) const ;
  public: void setProperty_mInputVarIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_VariableExpression init_21_ (const class GGS_uint & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_VariableExpression extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_VariableExpression class_func_new (const class GGS_uint & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_VariableExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression ;

#include "separateHeaderFor_C_5F_VariableExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_VariableExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_VariableExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_VariableExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_VariableExpression_2E_weak (const class GGS_C_5F_VariableExpression & inSource) ;

  public: GGS_C_5F_VariableExpression_2E_weak & operator = (const class GGS_C_5F_VariableExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_VariableExpression_2E_weak init_nil (void) {
    GGS_C_5F_VariableExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_VariableExpression bang_C_5F_VariableExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_VariableExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_VariableExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_VariableExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_VariableExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_trueExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_trueExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_trueExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_trueExpression (const class cPtr_C_5F_trueExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_trueExpression init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_trueExpression extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_trueExpression class_func_new (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trueExpression ;

#include "separateHeaderFor_C_5F_trueExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_trueExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_trueExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_trueExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_trueExpression_2E_weak (const class GGS_C_5F_trueExpression & inSource) ;

  public: GGS_C_5F_trueExpression_2E_weak & operator = (const class GGS_C_5F_trueExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_trueExpression_2E_weak init_nil (void) {
    GGS_C_5F_trueExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_trueExpression bang_C_5F_trueExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_trueExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_trueExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_trueExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_trueExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trueExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_falseExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_falseExpression : public GGS_AC_5F_boolExpression {
//--------------------------------- Default constructor
  public: GGS_C_5F_falseExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_falseExpression (const class cPtr_C_5F_falseExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_falseExpression init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_falseExpression extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_falseExpression class_func_new (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_falseExpression ;

#include "separateHeaderFor_C_5F_falseExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_falseExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_falseExpression_2E_weak : public GGS_AC_5F_boolExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_falseExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_falseExpression_2E_weak (const class GGS_C_5F_falseExpression & inSource) ;

  public: GGS_C_5F_falseExpression_2E_weak & operator = (const class GGS_C_5F_falseExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_falseExpression_2E_weak init_nil (void) {
    GGS_C_5F_falseExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_falseExpression bang_C_5F_falseExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_falseExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_falseExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_falseExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_falseExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_falseExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_transitionDefinition list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_L_5F_transitionDefinition final {
  public: DownEnumerator_L_5F_transitionDefinition (const class GGS_L_5F_transitionDefinition & inList) ;

  public: ~ DownEnumerator_L_5F_transitionDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_AC_5F_boolExpression current_mActionExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpression (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_transitionDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_transitionDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_L_5F_transitionDefinition (const DownEnumerator_L_5F_transitionDefinition &) = delete ;
  private: DownEnumerator_L_5F_transitionDefinition & operator = (const DownEnumerator_L_5F_transitionDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_L_5F_transitionDefinition final {
  public: UpEnumerator_L_5F_transitionDefinition (const class GGS_L_5F_transitionDefinition & inList)  ;

  public: ~ UpEnumerator_L_5F_transitionDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_AC_5F_boolExpression current_mActionExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpression (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_transitionDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_transitionDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_L_5F_transitionDefinition (const UpEnumerator_L_5F_transitionDefinition &) = delete ;
  private: UpEnumerator_L_5F_transitionDefinition & operator = (const UpEnumerator_L_5F_transitionDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @L_transitionDefinition list
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_transitionDefinition : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_L_5F_transitionDefinition_2E_element> mArray ;

//--- Default constructor
  public: GGS_L_5F_transitionDefinition (void) ;

//--- Destructor
  public: virtual ~ GGS_L_5F_transitionDefinition (void) = default ;

//--- Copy
  public: GGS_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition &) = default ;
  public: GGS_L_5F_transitionDefinition & operator = (const GGS_L_5F_transitionDefinition &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_L_5F_transitionDefinition_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_L_5F_transitionDefinition subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_L_5F_transitionDefinition (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_AC_5F_boolExpression & in_mActionExpression,
                                                 const class GGS_location & in_mEndOfExpression,
                                                 const class GGS_uint & in_mTargetStateIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_transitionDefinition init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_transitionDefinition extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_transitionDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_L_5F_transitionDefinition class_func_listWithValue (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                               const class GGS_location & inOperand1,
                                                                               const class GGS_uint & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_L_5F_transitionDefinition inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_AC_5F_boolExpression & inOperand0,
                                                    const class GGS_location & inOperand1,
                                                    const class GGS_uint & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_L_5F_transitionDefinition_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_L_5F_transitionDefinition add_operation (const GGS_L_5F_transitionDefinition & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_AC_5F_boolExpression constinArgument0,
                                               class GGS_location constinArgument1,
                                               class GGS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_AC_5F_boolExpression constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_AC_5F_boolExpression & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_AC_5F_boolExpression & outArgument0,
                                                class GGS_location & outArgument1,
                                                class GGS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_AC_5F_boolExpression & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionExpressionAtIndex (class GGS_AC_5F_boolExpression constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionAtIndex (class GGS_location constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetStateIndexAtIndex (class GGS_uint constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_AC_5F_boolExpression & outArgument0,
                                              class GGS_location & outArgument1,
                                              class GGS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_AC_5F_boolExpression & outArgument0,
                                             class GGS_location & outArgument1,
                                             class GGS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AC_5F_boolExpression getter_mActionExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTargetStateIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_transitionDefinition getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_transitionDefinition getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_transitionDefinition getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_L_5F_transitionDefinition ;
  friend class DownEnumerator_L_5F_transitionDefinition ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_transitionDefinition_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_transitionDefinition_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_AC_5F_boolExpression mProperty_mActionExpression ;
  public: inline GGS_AC_5F_boolExpression readProperty_mActionExpression (void) const {
    return mProperty_mActionExpression ;
  }

  public: GGS_location mProperty_mEndOfExpression ;
  public: inline GGS_location readProperty_mEndOfExpression (void) const {
    return mProperty_mEndOfExpression ;
  }

  public: GGS_uint mProperty_mTargetStateIndex ;
  public: inline GGS_uint readProperty_mTargetStateIndex (void) const {
    return mProperty_mTargetStateIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_transitionDefinition_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActionExpression (const GGS_AC_5F_boolExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

  public: inline void setter_setMTargetStateIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetStateIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_transitionDefinition_2E_element (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                    const GGS_location & in_mEndOfExpression,
                                                    const GGS_uint & in_mTargetStateIndex) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_transitionDefinition_2E_element (const GGS_L_5F_transitionDefinition_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_transitionDefinition_2E_element & operator = (const GGS_L_5F_transitionDefinition_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_transitionDefinition_2E_element init_21__21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_transitionDefinition_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_transitionDefinition_2E_element class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_uint & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_stateDefinition list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_L_5F_stateDefinition final {
  public: DownEnumerator_L_5F_stateDefinition (const class GGS_L_5F_stateDefinition & inList) ;

  public: ~ DownEnumerator_L_5F_stateDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GGS_AC_5F_boolExpression current_mStateExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfStateExpression (LOCATION_ARGS) const ;
  public: class GGS_L_5F_transitionDefinition current_mTransitionsList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_stateDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_stateDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_L_5F_stateDefinition (const DownEnumerator_L_5F_stateDefinition &) = delete ;
  private: DownEnumerator_L_5F_stateDefinition & operator = (const DownEnumerator_L_5F_stateDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_L_5F_stateDefinition final {
  public: UpEnumerator_L_5F_stateDefinition (const class GGS_L_5F_stateDefinition & inList)  ;

  public: ~ UpEnumerator_L_5F_stateDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GGS_AC_5F_boolExpression current_mStateExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfStateExpression (LOCATION_ARGS) const ;
  public: class GGS_L_5F_transitionDefinition current_mTransitionsList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_stateDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_stateDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_L_5F_stateDefinition (const UpEnumerator_L_5F_stateDefinition &) = delete ;
  private: UpEnumerator_L_5F_stateDefinition & operator = (const UpEnumerator_L_5F_stateDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @L_stateDefinition list
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_stateDefinition : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_L_5F_stateDefinition_2E_element> mArray ;

//--- Default constructor
  public: GGS_L_5F_stateDefinition (void) ;

//--- Destructor
  public: virtual ~ GGS_L_5F_stateDefinition (void) = default ;

//--- Copy
  public: GGS_L_5F_stateDefinition (const GGS_L_5F_stateDefinition &) = default ;
  public: GGS_L_5F_stateDefinition & operator = (const GGS_L_5F_stateDefinition &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_L_5F_stateDefinition_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_L_5F_stateDefinition subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_L_5F_stateDefinition (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mStateIndex,
                                                 const class GGS_AC_5F_boolExpression & in_mStateExpression,
                                                 const class GGS_location & in_mEndOfStateExpression,
                                                 const class GGS_L_5F_transitionDefinition & in_mTransitionsList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_stateDefinition init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_stateDefinition extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_stateDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_L_5F_stateDefinition class_func_listWithValue (const class GGS_uint & inOperand0,
                                                                          const class GGS_AC_5F_boolExpression & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          const class GGS_L_5F_transitionDefinition & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_L_5F_stateDefinition inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_AC_5F_boolExpression & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    const class GGS_L_5F_transitionDefinition & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_L_5F_stateDefinition_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_L_5F_stateDefinition add_operation (const GGS_L_5F_stateDefinition & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               class GGS_AC_5F_boolExpression constinArgument1,
                                               class GGS_location constinArgument2,
                                               class GGS_L_5F_transitionDefinition constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_AC_5F_boolExpression constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_L_5F_transitionDefinition constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 class GGS_AC_5F_boolExpression & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 class GGS_L_5F_transitionDefinition & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                class GGS_AC_5F_boolExpression & outArgument1,
                                                class GGS_location & outArgument2,
                                                class GGS_L_5F_transitionDefinition & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_AC_5F_boolExpression & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_L_5F_transitionDefinition & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfStateExpressionAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateExpressionAtIndex (class GGS_AC_5F_boolExpression constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateIndexAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransitionsListAtIndex (class GGS_L_5F_transitionDefinition constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              class GGS_AC_5F_boolExpression & outArgument1,
                                              class GGS_location & outArgument2,
                                              class GGS_L_5F_transitionDefinition & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             class GGS_AC_5F_boolExpression & outArgument1,
                                             class GGS_location & outArgument2,
                                             class GGS_L_5F_transitionDefinition & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfStateExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AC_5F_boolExpression getter_mStateExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mStateIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_transitionDefinition getter_mTransitionsListAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_stateDefinition getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_stateDefinition getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_stateDefinition getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_L_5F_stateDefinition ;
  friend class DownEnumerator_L_5F_stateDefinition ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_stateDefinition_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_stateDefinition_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mStateIndex ;
  public: inline GGS_uint readProperty_mStateIndex (void) const {
    return mProperty_mStateIndex ;
  }

  public: GGS_AC_5F_boolExpression mProperty_mStateExpression ;
  public: inline GGS_AC_5F_boolExpression readProperty_mStateExpression (void) const {
    return mProperty_mStateExpression ;
  }

  public: GGS_location mProperty_mEndOfStateExpression ;
  public: inline GGS_location readProperty_mEndOfStateExpression (void) const {
    return mProperty_mEndOfStateExpression ;
  }

  public: GGS_L_5F_transitionDefinition mProperty_mTransitionsList ;
  public: inline GGS_L_5F_transitionDefinition readProperty_mTransitionsList (void) const {
    return mProperty_mTransitionsList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_stateDefinition_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStateIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateIndex = inValue ;
  }

  public: inline void setter_setMStateExpression (const GGS_AC_5F_boolExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateExpression = inValue ;
  }

  public: inline void setter_setMEndOfStateExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfStateExpression = inValue ;
  }

  public: inline void setter_setMTransitionsList (const GGS_L_5F_transitionDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransitionsList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_stateDefinition_2E_element (const GGS_uint & in_mStateIndex,
                                               const GGS_AC_5F_boolExpression & in_mStateExpression,
                                               const GGS_location & in_mEndOfStateExpression,
                                               const GGS_L_5F_transitionDefinition & in_mTransitionsList) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_stateDefinition_2E_element (const GGS_L_5F_stateDefinition_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_stateDefinition_2E_element & operator = (const GGS_L_5F_stateDefinition_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_stateDefinition_2E_element init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                                           const class GGS_AC_5F_boolExpression & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_L_5F_transitionDefinition & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_stateDefinition_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_stateDefinition_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                                           const class GGS_AC_5F_boolExpression & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_L_5F_transitionDefinition & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_statesDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_L_5F_statesDefinitionList final {
  public: DownEnumerator_L_5F_statesDefinitionList (const class GGS_L_5F_statesDefinitionList & inList) ;

  public: ~ DownEnumerator_L_5F_statesDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GGS_location current_mStateLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_statesDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_statesDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_L_5F_statesDefinitionList (const DownEnumerator_L_5F_statesDefinitionList &) = delete ;
  private: DownEnumerator_L_5F_statesDefinitionList & operator = (const DownEnumerator_L_5F_statesDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_L_5F_statesDefinitionList final {
  public: UpEnumerator_L_5F_statesDefinitionList (const class GGS_L_5F_statesDefinitionList & inList)  ;

  public: ~ UpEnumerator_L_5F_statesDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public: class GGS_location current_mStateLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_L_5F_statesDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_L_5F_statesDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_L_5F_statesDefinitionList (const UpEnumerator_L_5F_statesDefinitionList &) = delete ;
  private: UpEnumerator_L_5F_statesDefinitionList & operator = (const UpEnumerator_L_5F_statesDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @L_statesDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_statesDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_L_5F_statesDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_L_5F_statesDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_L_5F_statesDefinitionList (void) = default ;

//--- Copy
  public: GGS_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList &) = default ;
  public: GGS_L_5F_statesDefinitionList & operator = (const GGS_L_5F_statesDefinitionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_L_5F_statesDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_L_5F_statesDefinitionList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_L_5F_statesDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mStateIndex,
                                                 const class GGS_location & in_mStateLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_statesDefinitionList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_statesDefinitionList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_statesDefinitionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_L_5F_statesDefinitionList class_func_listWithValue (const class GGS_uint & inOperand0,
                                                                               const class GGS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_L_5F_statesDefinitionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_location & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_L_5F_statesDefinitionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_L_5F_statesDefinitionList add_operation (const GGS_L_5F_statesDefinitionList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateIndexAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mStateIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mStateLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_statesDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_statesDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_L_5F_statesDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_L_5F_statesDefinitionList ;
  friend class DownEnumerator_L_5F_statesDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @L_5F_statesDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_L_5F_statesDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mStateIndex ;
  public: inline GGS_uint readProperty_mStateIndex (void) const {
    return mProperty_mStateIndex ;
  }

  public: GGS_location mProperty_mStateLocation ;
  public: inline GGS_location readProperty_mStateLocation (void) const {
    return mProperty_mStateLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_L_5F_statesDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStateIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateIndex = inValue ;
  }

  public: inline void setter_setMStateLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStateLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_L_5F_statesDefinitionList_2E_element (const GGS_uint & in_mStateIndex,
                                                    const GGS_location & in_mStateLocation) ;

//--------------------------------- Copy constructor
  public: GGS_L_5F_statesDefinitionList_2E_element (const GGS_L_5F_statesDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_L_5F_statesDefinitionList_2E_element & operator = (const GGS_L_5F_statesDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_L_5F_statesDefinitionList_2E_element init_21__21_ (const class GGS_uint & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_L_5F_statesDefinitionList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_L_5F_statesDefinitionList_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                                                const class GGS_location & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AC_5F_machineDefinition reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_machineDefinition : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_AC_5F_machineDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_AC_5F_machineDefinition (const class cPtr_AC_5F_machineDefinition * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AC_5F_machineDefinition init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AC_5F_machineDefinition extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_machineDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;

#include "separateHeaderFor_AC_5F_machineDefinition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @AC_5F_machineDefinition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_machineDefinition_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_AC_5F_machineDefinition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_AC_5F_machineDefinition_2E_weak (const class GGS_AC_5F_machineDefinition & inSource) ;

  public: GGS_AC_5F_machineDefinition_2E_weak & operator = (const class GGS_AC_5F_machineDefinition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_AC_5F_machineDefinition_2E_weak init_nil (void) {
    GGS_AC_5F_machineDefinition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_AC_5F_machineDefinition bang_AC_5F_machineDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_AC_5F_machineDefinition unwrappedValue (void) const ;

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
  public: static GGS_AC_5F_machineDefinition_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AC_5F_machineDefinition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_machineDefinition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_modesMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_M_5F_modesMap final {

  public: DownEnumerator_M_5F_modesMap (const class GGS_M_5F_modesMap & inMap) ;

  public: ~ DownEnumerator_M_5F_modesMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_AC_5F_machineDefinition current_mModeDefinition (LOCATION_ARGS) const ;

  public: class GGS_M_5F_modesMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_M_5F_modesMap (const DownEnumerator_M_5F_modesMap &) = delete ;
  private: DownEnumerator_M_5F_modesMap & operator = (const DownEnumerator_M_5F_modesMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_M_5F_modesMap final {
  public: UpEnumerator_M_5F_modesMap (const class GGS_M_5F_modesMap & inMap)  ;

  public: ~ UpEnumerator_M_5F_modesMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_AC_5F_machineDefinition current_mModeDefinition (LOCATION_ARGS) const ;
  public: class GGS_M_5F_modesMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_M_5F_modesMap (const UpEnumerator_M_5F_modesMap &) = delete ;
  private: UpEnumerator_M_5F_modesMap & operator = (const UpEnumerator_M_5F_modesMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_M_5F_modesMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_M_5F_modesMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_M_5F_modesMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_M_5F_modesMap (void) ;

//--- Handle copy
  public: GGS_M_5F_modesMap (const GGS_M_5F_modesMap & inSource) ;
  public: GGS_M_5F_modesMap & operator = (const GGS_M_5F_modesMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_M_5F_modesMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_modesMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_modesMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_modesMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_M_5F_modesMap class_func_mapWithMapToOverride (const class GGS_M_5F_modesMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_AC_5F_machineDefinition constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeDefinitionForKey (class GGS_AC_5F_machineDefinition constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_AC_5F_machineDefinition & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AC_5F_machineDefinition getter_mModeDefinitionForKey (const class GGS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_M_5F_modesMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_M_5F_modesMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_M_5F_modesMap ;
  friend class DownEnumerator_M_5F_modesMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @M_5F_modesMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_modesMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_AC_5F_machineDefinition mProperty_mModeDefinition ;
  public: inline GGS_AC_5F_machineDefinition readProperty_mModeDefinition (void) const {
    return mProperty_mModeDefinition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_M_5F_modesMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMModeDefinition (const GGS_AC_5F_machineDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModeDefinition = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_M_5F_modesMap_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uint & in_mIndex,
                                        const GGS_AC_5F_machineDefinition & in_mModeDefinition) ;

//--------------------------------- Copy constructor
  public: GGS_M_5F_modesMap_2E_element (const GGS_M_5F_modesMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_M_5F_modesMap_2E_element & operator = (const GGS_M_5F_modesMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_M_5F_modesMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_M_5F_modesMap_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_M_5F_modesMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_uint & inOperand1,
                                                                    const class GGS_AC_5F_machineDefinition & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: M_modesMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_M_5F_modesMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_M_5F_modesMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_M_5F_modesMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_M_5F_modesMap_2E_element_3F_ (const GGS_M_5F_modesMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_M_5F_modesMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_M_5F_modesMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_M_5F_modesMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ListForModes list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ListForModes final {
  public: DownEnumerator_ListForModes (const class GGS_ListForModes & inList) ;

  public: ~ DownEnumerator_ListForModes (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mSourceMode (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTargetMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ListForModes_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ListForModes_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ListForModes (const DownEnumerator_ListForModes &) = delete ;
  private: DownEnumerator_ListForModes & operator = (const DownEnumerator_ListForModes &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ListForModes final {
  public: UpEnumerator_ListForModes (const class GGS_ListForModes & inList)  ;

  public: ~ UpEnumerator_ListForModes (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mSourceMode (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTargetMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ListForModes_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ListForModes_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ListForModes (const UpEnumerator_ListForModes &) = delete ;
  private: UpEnumerator_ListForModes & operator = (const UpEnumerator_ListForModes &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ListForModes list
//--------------------------------------------------------------------------------------------------

class GGS_ListForModes : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ListForModes_2E_element> mArray ;

//--- Default constructor
  public: GGS_ListForModes (void) ;

//--- Destructor
  public: virtual ~ GGS_ListForModes (void) = default ;

//--- Copy
  public: GGS_ListForModes (const GGS_ListForModes &) = default ;
  public: GGS_ListForModes & operator = (const GGS_ListForModes &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_ListForModes_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ListForModes subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ListForModes (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mSourceMode,
                                                 const class GGS_uint & in_mTargetMode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ListForModes init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ListForModes extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ListForModes class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ListForModes class_func_listWithValue (const class GGS_uint & inOperand0,
                                                                  const class GGS_uint & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ListForModes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_uint & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ListForModes_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ListForModes add_operation (const GGS_ListForModes & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                class GGS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceModeAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetModeAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              class GGS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             class GGS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mSourceModeAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTargetModeAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ListForModes getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ListForModes getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ListForModes getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ListForModes ;
  friend class DownEnumerator_ListForModes ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ListForModes ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ListForModes_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ListForModes_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mSourceMode ;
  public: inline GGS_uint readProperty_mSourceMode (void) const {
    return mProperty_mSourceMode ;
  }

  public: GGS_uint mProperty_mTargetMode ;
  public: inline GGS_uint readProperty_mTargetMode (void) const {
    return mProperty_mTargetMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ListForModes_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceMode (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceMode = inValue ;
  }

  public: inline void setter_setMTargetMode (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetMode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ListForModes_2E_element (const GGS_uint & in_mSourceMode,
                                       const GGS_uint & in_mTargetMode) ;

//--------------------------------- Copy constructor
  public: GGS_ListForModes_2E_element (const GGS_ListForModes_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ListForModes_2E_element & operator = (const GGS_ListForModes_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ListForModes_2E_element init_21__21_ (const class GGS_uint & inOperand0,
                                                           const class GGS_uint & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ListForModes_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ListForModes_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                                   const class GGS_uint & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ListForModes_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_substractiveModalCompositionComponent reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_substractiveModalCompositionComponent : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_substractiveModalCompositionComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_substractiveModalCompositionComponent (const class cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_M_5F_modesMap readProperty_mModeMap (void) const ;
  public: void setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) ;

  public: class GGS_ListForModes readProperty_mExclusionList (void) const ;
  public: void setProperty_mExclusionList (const GGS_ListForModes & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_substractiveModalCompositionComponent init_21__21_ (const class GGS_M_5F_modesMap & inOperand0,
                                                                              const class GGS_ListForModes & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_substractiveModalCompositionComponent extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_substractiveModalCompositionComponent class_func_new (const class GGS_M_5F_modesMap & inOperand0,
                                                                                      const class GGS_ListForModes & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_substractiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_substractiveModalCompositionComponent.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_substractiveModalCompositionComponent_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_substractiveModalCompositionComponent_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_substractiveModalCompositionComponent_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_substractiveModalCompositionComponent_2E_weak (const class GGS_C_5F_substractiveModalCompositionComponent & inSource) ;

  public: GGS_C_5F_substractiveModalCompositionComponent_2E_weak & operator = (const class GGS_C_5F_substractiveModalCompositionComponent & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_substractiveModalCompositionComponent_2E_weak init_nil (void) {
    GGS_C_5F_substractiveModalCompositionComponent_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_substractiveModalCompositionComponent bang_C_5F_substractiveModalCompositionComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_substractiveModalCompositionComponent unwrappedValue (void) const ;

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
  public: static GGS_C_5F_substractiveModalCompositionComponent_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_substractiveModalCompositionComponent_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_substractiveModalCompositionComponent_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_additiveModalCompositionComponent reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_additiveModalCompositionComponent : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_additiveModalCompositionComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_additiveModalCompositionComponent (const class cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_M_5F_modesMap readProperty_mModeMap (void) const ;
  public: void setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) ;

  public: class GGS_ListForModes readProperty_mInclusionList (void) const ;
  public: void setProperty_mInclusionList (const GGS_ListForModes & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_additiveModalCompositionComponent init_21__21_ (const class GGS_M_5F_modesMap & inOperand0,
                                                                          const class GGS_ListForModes & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_additiveModalCompositionComponent extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_additiveModalCompositionComponent class_func_new (const class GGS_M_5F_modesMap & inOperand0,
                                                                                  const class GGS_ListForModes & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_additiveModalCompositionComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;

#include "separateHeaderFor_C_5F_additiveModalCompositionComponent.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_additiveModalCompositionComponent_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_additiveModalCompositionComponent_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_additiveModalCompositionComponent_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_additiveModalCompositionComponent_2E_weak (const class GGS_C_5F_additiveModalCompositionComponent & inSource) ;

  public: GGS_C_5F_additiveModalCompositionComponent_2E_weak & operator = (const class GGS_C_5F_additiveModalCompositionComponent & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_additiveModalCompositionComponent_2E_weak init_nil (void) {
    GGS_C_5F_additiveModalCompositionComponent_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_additiveModalCompositionComponent bang_C_5F_additiveModalCompositionComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_additiveModalCompositionComponent unwrappedValue (void) const ;

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
  public: static GGS_C_5F_additiveModalCompositionComponent_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_additiveModalCompositionComponent_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_additiveModalCompositionComponent_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_trans reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_trans : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_trans (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_trans (const class cPtr_C_5F_trans * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mSourceStateExpression (void) const ;
  public: void setProperty_mSourceStateExpression (const GGS_AC_5F_boolExpression & inValue) ;

  public: class GGS_AC_5F_boolExpression readProperty_mTargetStateExpression (void) const ;
  public: void setProperty_mTargetStateExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_trans init_21__21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                              const class GGS_AC_5F_boolExpression & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_trans extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_trans class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                      const class GGS_AC_5F_boolExpression & inOperand1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_trans & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trans ;

#include "separateHeaderFor_C_5F_trans.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_trans_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_trans_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_trans_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_trans_2E_weak (const class GGS_C_5F_trans & inSource) ;

  public: GGS_C_5F_trans_2E_weak & operator = (const class GGS_C_5F_trans & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_trans_2E_weak init_nil (void) {
    GGS_C_5F_trans_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_trans bang_C_5F_trans_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_trans unwrappedValue (void) const ;

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
  public: static GGS_C_5F_trans_2E_weak extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_trans_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_trans_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trans_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_importMachine reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_importMachine : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_importMachine (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_importMachine (const class cPtr_C_5F_importMachine * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mIndexOfImportedMachine (void) const ;
  public: void setProperty_mIndexOfImportedMachine (const GGS_uint & inValue) ;

  public: class GGS_L_5F_translationVector readProperty_mTranslationVector (void) const ;
  public: void setProperty_mTranslationVector (const GGS_L_5F_translationVector & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_importMachine init_21__21_ (const class GGS_uint & inOperand0,
                                                      const class GGS_L_5F_translationVector & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_importMachine extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_importMachine class_func_new (const class GGS_uint & inOperand0,
                                                              const class GGS_L_5F_translationVector & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_importMachine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importMachine ;

#include "separateHeaderFor_C_5F_importMachine.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_importMachine_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_importMachine_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_importMachine_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_importMachine_2E_weak (const class GGS_C_5F_importMachine & inSource) ;

  public: GGS_C_5F_importMachine_2E_weak & operator = (const class GGS_C_5F_importMachine & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_importMachine_2E_weak init_nil (void) {
    GGS_C_5F_importMachine_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_importMachine bang_C_5F_importMachine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_importMachine unwrappedValue (void) const ;

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
  public: static GGS_C_5F_importMachine_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_importMachine_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_importMachine_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importMachine_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_explicitAutomatonDefinition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_explicitAutomatonDefinition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_explicitAutomatonDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_explicitAutomatonDefinition (const class cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_M_5F_stateMap readProperty_mStatesMap (void) const ;
  public: void setProperty_mStatesMap (const GGS_M_5F_stateMap & inValue) ;

  public: class GGS_L_5F_statesDefinitionList readProperty_mInitialStatesDefinitionList (void) const ;
  public: void setProperty_mInitialStatesDefinitionList (const GGS_L_5F_statesDefinitionList & inValue) ;

  public: class GGS_L_5F_statesDefinitionList readProperty_mTerminalStatesDefinitionList (void) const ;
  public: void setProperty_mTerminalStatesDefinitionList (const GGS_L_5F_statesDefinitionList & inValue) ;

  public: class GGS_L_5F_stateDefinition readProperty_mStateDefinitionList (void) const ;
  public: void setProperty_mStateDefinitionList (const GGS_L_5F_stateDefinition & inValue) ;

  public: class GGS_location readProperty_mEndOfDefinition (void) const ;
  public: void setProperty_mEndOfDefinition (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_explicitAutomatonDefinition init_21__21__21__21__21_ (const class GGS_M_5F_stateMap & inOperand0,
                                                                                const class GGS_L_5F_statesDefinitionList & inOperand1,
                                                                                const class GGS_L_5F_statesDefinitionList & inOperand2,
                                                                                const class GGS_L_5F_stateDefinition & inOperand3,
                                                                                const class GGS_location & inOperand4,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_explicitAutomatonDefinition extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_explicitAutomatonDefinition class_func_new (const class GGS_M_5F_stateMap & inOperand0,
                                                                            const class GGS_L_5F_statesDefinitionList & inOperand1,
                                                                            const class GGS_L_5F_statesDefinitionList & inOperand2,
                                                                            const class GGS_L_5F_stateDefinition & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_explicitAutomatonDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;

#include "separateHeaderFor_C_5F_explicitAutomatonDefinition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_explicitAutomatonDefinition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_explicitAutomatonDefinition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_explicitAutomatonDefinition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_explicitAutomatonDefinition_2E_weak (const class GGS_C_5F_explicitAutomatonDefinition & inSource) ;

  public: GGS_C_5F_explicitAutomatonDefinition_2E_weak & operator = (const class GGS_C_5F_explicitAutomatonDefinition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_explicitAutomatonDefinition_2E_weak init_nil (void) {
    GGS_C_5F_explicitAutomatonDefinition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_explicitAutomatonDefinition bang_C_5F_explicitAutomatonDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_explicitAutomatonDefinition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_explicitAutomatonDefinition_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_explicitAutomatonDefinition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_explicitAutomatonDefinition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_boolToSeqExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_boolToSeqExpression : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_boolToSeqExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_boolToSeqExpression (const class cPtr_C_5F_boolToSeqExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_boolExpression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_AC_5F_boolExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_boolToSeqExpression init_21_ (const class GGS_AC_5F_boolExpression & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_boolToSeqExpression extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_boolToSeqExpression class_func_new (const class GGS_AC_5F_boolExpression & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_boolToSeqExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;

#include "separateHeaderFor_C_5F_boolToSeqExpression.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_boolToSeqExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_boolToSeqExpression_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_boolToSeqExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_boolToSeqExpression_2E_weak (const class GGS_C_5F_boolToSeqExpression & inSource) ;

  public: GGS_C_5F_boolToSeqExpression_2E_weak & operator = (const class GGS_C_5F_boolToSeqExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_boolToSeqExpression_2E_weak init_nil (void) {
    GGS_C_5F_boolToSeqExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_boolToSeqExpression bang_C_5F_boolToSeqExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_boolToSeqExpression unwrappedValue (void) const ;

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
  public: static GGS_C_5F_boolToSeqExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_boolToSeqExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_boolToSeqExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_existsDefinition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_existsDefinition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_existsDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_existsDefinition (const class cPtr_C_5F_existsDefinition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mPreviousVariableCount (void) const ;
  public: void setProperty_mPreviousVariableCount (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mTotalVariableCount (void) const ;
  public: void setProperty_mTotalVariableCount (const GGS_uint & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_existsDefinition init_21__21__21_ (const class GGS_uint & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             const class GGS_AC_5F_machineDefinition & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_existsDefinition extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_existsDefinition class_func_new (const class GGS_uint & inOperand0,
                                                                 const class GGS_uint & inOperand1,
                                                                 const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_existsDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition ;

#include "separateHeaderFor_C_5F_existsDefinition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_existsDefinition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_existsDefinition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_existsDefinition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_existsDefinition_2E_weak (const class GGS_C_5F_existsDefinition & inSource) ;

  public: GGS_C_5F_existsDefinition_2E_weak & operator = (const class GGS_C_5F_existsDefinition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_existsDefinition_2E_weak init_nil (void) {
    GGS_C_5F_existsDefinition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_existsDefinition bang_C_5F_existsDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_existsDefinition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_existsDefinition_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_existsDefinition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_existsDefinition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_forallDefinition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_forallDefinition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_forallDefinition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_forallDefinition (const class cPtr_C_5F_forallDefinition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mPreviousVariableCount (void) const ;
  public: void setProperty_mPreviousVariableCount (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mTotalVariableCount (void) const ;
  public: void setProperty_mTotalVariableCount (const GGS_uint & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_forallDefinition init_21__21__21_ (const class GGS_uint & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             const class GGS_AC_5F_machineDefinition & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_forallDefinition extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_forallDefinition class_func_new (const class GGS_uint & inOperand0,
                                                                 const class GGS_uint & inOperand1,
                                                                 const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_forallDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition ;

#include "separateHeaderFor_C_5F_forallDefinition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_forallDefinition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_forallDefinition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_forallDefinition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_forallDefinition_2E_weak (const class GGS_C_5F_forallDefinition & inSource) ;

  public: GGS_C_5F_forallDefinition_2E_weak & operator = (const class GGS_C_5F_forallDefinition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_forallDefinition_2E_weak init_nil (void) {
    GGS_C_5F_forallDefinition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_forallDefinition bang_C_5F_forallDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_forallDefinition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_forallDefinition_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_forallDefinition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_forallDefinition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_parallelComposition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_parallelComposition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_parallelComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_parallelComposition (const class cPtr_C_5F_parallelComposition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;
  public: void setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;
  public: void setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_parallelComposition init_21__21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                            const class GGS_AC_5F_machineDefinition & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_parallelComposition extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_parallelComposition class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                    const class GGS_AC_5F_machineDefinition & inOperand1,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_parallelComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition ;

#include "separateHeaderFor_C_5F_parallelComposition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_parallelComposition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_parallelComposition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_parallelComposition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_parallelComposition_2E_weak (const class GGS_C_5F_parallelComposition & inSource) ;

  public: GGS_C_5F_parallelComposition_2E_weak & operator = (const class GGS_C_5F_parallelComposition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_parallelComposition_2E_weak init_nil (void) {
    GGS_C_5F_parallelComposition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_parallelComposition bang_C_5F_parallelComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_parallelComposition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_parallelComposition_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_parallelComposition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_parallelComposition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_orComposition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_orComposition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_orComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_orComposition (const class cPtr_C_5F_orComposition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;
  public: void setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;
  public: void setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_orComposition init_21__21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                      const class GGS_AC_5F_machineDefinition & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_orComposition extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_orComposition class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                              const class GGS_AC_5F_machineDefinition & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_orComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orComposition ;

#include "separateHeaderFor_C_5F_orComposition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_orComposition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_orComposition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_orComposition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_orComposition_2E_weak (const class GGS_C_5F_orComposition & inSource) ;

  public: GGS_C_5F_orComposition_2E_weak & operator = (const class GGS_C_5F_orComposition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_orComposition_2E_weak init_nil (void) {
    GGS_C_5F_orComposition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_orComposition bang_C_5F_orComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_orComposition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_orComposition_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_orComposition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_orComposition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orComposition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_strongModalComposition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_strongModalComposition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_strongModalComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_strongModalComposition (const class cPtr_C_5F_strongModalComposition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;
  public: void setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;
  public: void setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_strongModalComposition init_21__21__21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_strongModalComposition extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_strongModalComposition class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_strongModalComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;

#include "separateHeaderFor_C_5F_strongModalComposition.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_strongModalComposition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_strongModalComposition_2E_weak : public GGS_AC_5F_machineDefinition_2E_weak {
//--------------------------------- Default constructor
  public: GGS_C_5F_strongModalComposition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_C_5F_strongModalComposition_2E_weak (const class GGS_C_5F_strongModalComposition & inSource) ;

  public: GGS_C_5F_strongModalComposition_2E_weak & operator = (const class GGS_C_5F_strongModalComposition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_C_5F_strongModalComposition_2E_weak init_nil (void) {
    GGS_C_5F_strongModalComposition_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_C_5F_strongModalComposition bang_C_5F_strongModalComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_C_5F_strongModalComposition unwrappedValue (void) const ;

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
  public: static GGS_C_5F_strongModalComposition_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_strongModalComposition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_strongModalComposition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @C_5F_weakModalComposition reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_weakModalComposition : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_weakModalComposition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_weakModalComposition (const class cPtr_C_5F_weakModalComposition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mLeftOperand (void) const ;
  public: void setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mRightOperand (void) const ;
  public: void setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_weakModalComposition init_21__21__21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_weakModalComposition extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_weakModalComposition class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     const class GGS_AC_5F_machineDefinition & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_weakModalComposition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;

#include "separateHeaderFor_C_5F_weakModalComposition.h"

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
// Phase 1: @C_5F_fullSaturationOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_fullSaturationOperation : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_fullSaturationOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_fullSaturationOperation (const class cPtr_C_5F_fullSaturationOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_fullSaturationOperation init_21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_fullSaturationOperation extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_fullSaturationOperation class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_fullSaturationOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;

#include "separateHeaderFor_C_5F_fullSaturationOperation.h"

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
// Phase 1: @C_5F_complementationOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_complementationOperation : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_complementationOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_complementationOperation (const class cPtr_C_5F_complementationOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_complementationOperation init_21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_complementationOperation extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_complementationOperation class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_complementationOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation ;

#include "separateHeaderFor_C_5F_complementationOperation.h"

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
// Phase 1: @C_5F_suppressTerminalStatesOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_suppressTerminalStatesOperation : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_suppressTerminalStatesOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_suppressTerminalStatesOperation (const class cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_suppressTerminalStatesOperation init_21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_suppressTerminalStatesOperation extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_suppressTerminalStatesOperation class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_suppressTerminalStatesOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;

#include "separateHeaderFor_C_5F_suppressTerminalStatesOperation.h"

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
// Phase 1: @C_5F_suppressInitialStatesOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_suppressInitialStatesOperation : public GGS_AC_5F_machineDefinition {
//--------------------------------- Default constructor
  public: GGS_C_5F_suppressInitialStatesOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_suppressInitialStatesOperation (const class cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_AC_5F_machineDefinition readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_suppressInitialStatesOperation init_21_ (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_suppressInitialStatesOperation extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_suppressInitialStatesOperation class_func_new (const class GGS_AC_5F_machineDefinition & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_suppressInitialStatesOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;

#include "separateHeaderFor_C_5F_suppressInitialStatesOperation.h"

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
// Phase 1: @AC_5F_job reference class
//--------------------------------------------------------------------------------------------------

class GGS_AC_5F_job : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_AC_5F_job (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_AC_5F_job (const class cPtr_AC_5F_job * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AC_5F_job init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AC_5F_job extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_AC_5F_job & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_job ;

#include "separateHeaderFor_AC_5F_job.h"

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
// Phase 1: @C_5F_machineDisplayStates reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayStates : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayStates (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDisplayStates (const class cPtr_C_5F_machineDisplayStates * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDisplayStates init_21_ (const class GGS_uint & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayStates extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayStates class_func_new (const class GGS_uint & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;

#include "separateHeaderFor_C_5F_machineDisplayStates.h"

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
// Phase 1: @C_5F_machineDisplayInitialStates reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayInitialStates : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayInitialStates (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDisplayInitialStates (const class cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDisplayInitialStates init_21_ (const class GGS_uint & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayInitialStates extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayInitialStates class_func_new (const class GGS_uint & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayInitialStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;

#include "separateHeaderFor_C_5F_machineDisplayInitialStates.h"

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
// Phase 1: @C_5F_machineDisplayTerminalStates reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayTerminalStates : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayTerminalStates (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDisplayTerminalStates (const class cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDisplayTerminalStates init_21_ (const class GGS_uint & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayTerminalStates extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayTerminalStates class_func_new (const class GGS_uint & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayTerminalStates & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;

#include "separateHeaderFor_C_5F_machineDisplayTerminalStates.h"

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
// Phase 1: @C_5F_machineDisplayTransitions reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDisplayTransitions : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDisplayTransitions (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDisplayTransitions (const class cPtr_C_5F_machineDisplayTransitions * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDisplayTransitions init_21_ (const class GGS_uint & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDisplayTransitions extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDisplayTransitions class_func_new (const class GGS_uint & inOperand0,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDisplayTransitions & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;

#include "separateHeaderFor_C_5F_machineDisplayTransitions.h"

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
// Phase 1: @C_5F_machineCheck reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineCheck : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineCheck (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineCheck (const class cPtr_C_5F_machineCheck * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

  public: class GGS_bool readProperty_mCheckMachineIsBoolean (void) const ;
  public: void setProperty_mCheckMachineIsBoolean (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineCheck init_21__21_ (const class GGS_uint & inOperand0,
                                                     const class GGS_bool & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineCheck extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineCheck class_func_new (const class GGS_uint & inOperand0,
                                                             const class GGS_bool & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineCheck & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheck ;

#include "separateHeaderFor_C_5F_machineCheck.h"

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
// Phase 1: @C_5F_machineCheckIdentical reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineCheckIdentical : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineCheckIdentical (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineCheckIdentical (const class cPtr_C_5F_machineCheckIdentical * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mMachineIndex_31_ (void) const ;
  public: void setProperty_mMachineIndex_31_ (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mMachineIndex_32_ (void) const ;
  public: void setProperty_mMachineIndex_32_ (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineCheckIdentical init_21__21_ (const class GGS_uint & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineCheckIdentical extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineCheckIdentical class_func_new (const class GGS_uint & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineCheckIdentical & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;

#include "separateHeaderFor_C_5F_machineCheckIdentical.h"

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
// Phase 1: @C_5F_machineComponent reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineComponent : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineComponent (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineComponent (const class cPtr_C_5F_machineComponent * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMachineName (void) const ;
  public: void setProperty_mMachineName (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputVariableCount (void) const ;
  public: void setProperty_mInputVariableCount (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputAndInternalVariableCount (void) const ;
  public: void setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) ;

  public: class GGS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;
  public: void setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) ;

  public: class GGS_stringlist readProperty_mNameList (void) const ;
  public: void setProperty_mNameList (const GGS_stringlist & inValue) ;

  public: class GGS_AC_5F_machineDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GGS_AC_5F_machineDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineComponent init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_uint & inOperand1,
                                                                             const class GGS_uint & inOperand2,
                                                                             const class GGS_uint & inOperand3,
                                                                             const class GGS_M_5F_variablesMap & inOperand4,
                                                                             const class GGS_stringlist & inOperand5,
                                                                             const class GGS_AC_5F_machineDefinition & inOperand6,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineComponent extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineComponent class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_uint & inOperand1,
                                                                 const class GGS_uint & inOperand2,
                                                                 const class GGS_uint & inOperand3,
                                                                 const class GGS_M_5F_variablesMap & inOperand4,
                                                                 const class GGS_stringlist & inOperand5,
                                                                 const class GGS_AC_5F_machineDefinition & inOperand6,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineComponent & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineComponent ;

#include "separateHeaderFor_C_5F_machineComponent.h"

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
// Phase 1: @C_5F_machineDefinedByAdditiveModalComp reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDefinedByAdditiveModalComp : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDefinedByAdditiveModalComp (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDefinedByAdditiveModalComp (const class cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMachineName (void) const ;
  public: void setProperty_mMachineName (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputVariableCount (void) const ;
  public: void setProperty_mInputVariableCount (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputAndInternalVariableCount (void) const ;
  public: void setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) ;

  public: class GGS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;
  public: void setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) ;

  public: class GGS_M_5F_modesMap readProperty_mModeMap (void) const ;
  public: void setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) ;

  public: class GGS_ListForModes readProperty_mInclusionList (void) const ;
  public: void setProperty_mInclusionList (const GGS_ListForModes & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDefinedByAdditiveModalComp init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_uint & inOperand1,
                                                                                              const class GGS_uint & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              const class GGS_M_5F_variablesMap & inOperand4,
                                                                                              const class GGS_M_5F_modesMap & inOperand5,
                                                                                              const class GGS_ListForModes & inOperand6,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDefinedByAdditiveModalComp extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDefinedByAdditiveModalComp class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_uint & inOperand3,
                                                                                  const class GGS_M_5F_variablesMap & inOperand4,
                                                                                  const class GGS_M_5F_modesMap & inOperand5,
                                                                                  const class GGS_ListForModes & inOperand6,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedByAdditiveModalComp.h"

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
// Phase 1: @C_5F_machineDefinedBySubstractiveModalComp reference class
//--------------------------------------------------------------------------------------------------

class GGS_C_5F_machineDefinedBySubstractiveModalComp : public GGS_AC_5F_job {
//--------------------------------- Default constructor
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_C_5F_machineDefinedBySubstractiveModalComp (const class cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMachineName (void) const ;
  public: void setProperty_mMachineName (const GGS_lstring & inValue) ;

  public: class GGS_uint readProperty_mMachineIndex (void) const ;
  public: void setProperty_mMachineIndex (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputVariableCount (void) const ;
  public: void setProperty_mInputVariableCount (const GGS_uint & inValue) ;

  public: class GGS_uint readProperty_mInputAndInternalVariableCount (void) const ;
  public: void setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) ;

  public: class GGS_M_5F_variablesMap readProperty_mVariablesMap (void) const ;
  public: void setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) ;

  public: class GGS_M_5F_modesMap readProperty_mModeMap (void) const ;
  public: void setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) ;

  public: class GGS_ListForModes readProperty_mExclusionList (void) const ;
  public: void setProperty_mExclusionList (const GGS_ListForModes & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_C_5F_machineDefinedBySubstractiveModalComp init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_uint & inOperand1,
                                                                                                  const class GGS_uint & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  const class GGS_M_5F_variablesMap & inOperand4,
                                                                                                  const class GGS_M_5F_modesMap & inOperand5,
                                                                                                  const class GGS_ListForModes & inOperand6,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_C_5F_machineDefinedBySubstractiveModalComp extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_C_5F_machineDefinedBySubstractiveModalComp class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      const class GGS_uint & inOperand2,
                                                                                      const class GGS_uint & inOperand3,
                                                                                      const class GGS_M_5F_variablesMap & inOperand4,
                                                                                      const class GGS_M_5F_modesMap & inOperand5,
                                                                                      const class GGS_ListForModes & inOperand6,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;

#include "separateHeaderFor_C_5F_machineDefinedBySubstractiveModalComp.h"

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

