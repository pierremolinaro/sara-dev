#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticContext struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_L_5F_jobList & in_componentsMap,
                               const GGS_M_5F_machinesMap & in_machinesMap) ;

//--------------------------------- Copy constructor
  public: GGS_semanticContext (const GGS_semanticContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticContext & operator = (const GGS_semanticContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init_21__21_ (const class GGS_L_5F_jobList & inOperand0,
                                                   const class GGS_M_5F_machinesMap & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

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
  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static proc
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

  protected: virtual void nt_component_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                        class GGS_M_5F_variablesMap & ioArgument1,
                                                        class GGS_AC_5F_machineDefinition & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_ (const class GGS_semanticContext constinArgument0,
                                                                  class GGS_M_5F_variablesMap & ioArgument1,
                                                                  class GGS_AC_5F_machineDefinition & outArgument2,
                                                                  class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_factor_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_ (const class GGS_semanticContext constinArgument0,
                                                                class GGS_M_5F_variablesMap & ioArgument1,
                                                                class GGS_AC_5F_machineDefinition & outArgument2,
                                                                class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_definition_5F_expression_5F_term_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_ (const class GGS_semanticContext constinArgument0,
                                                     class GGS_M_5F_variablesMap & ioArgument1,
                                                     class GGS_AC_5F_machineDefinition & outArgument2,
                                                     class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_automaton_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                       class GGS_M_5F_variablesMap & ioArgument1,
                                                       class GGS_AC_5F_boolExpression & outArgument2,
                                                       class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_and_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_ (const class GGS_semanticContext constinArgument0,
                                                        class GGS_M_5F_variablesMap & ioArgument1,
                                                        class GGS_AC_5F_boolExpression & outArgument2,
                                                        class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_bool_5F_expression_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_ (const class GGS_semanticContext constinArgument0,
                                             class GGS_M_5F_variablesMap & ioArgument1,
                                             class GGS_AC_5F_boolExpression & outArgument2,
                                             class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_io_5F_primary_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_ (const class GGS_semanticContext constinArgument0,
                                                          class GGS_M_5F_variablesMap & ioArgument1,
                                                          class GGS_M_5F_modesMap & outArgument2,
                                                          class GGS_ListForModes & outArgument3,
                                                          class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompadd_5F_definition_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_ (const class GGS_semanticContext constinArgument0,
                                                          class GGS_M_5F_variablesMap & ioArgument1,
                                                          class GGS_M_5F_modesMap & outArgument2,
                                                          class GGS_ListForModes & outArgument3,
                                                          class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_modalcompsub_5F_definition_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_sara_5F_scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_sara_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_sara_5F_parser_start_5F_symbol_i0_ (Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_start_5F_symbol_i0_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_start_5F_symbol_i0_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i1_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i1_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i1_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i2_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i2_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i2_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i3_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i3_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i3_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i4_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i4_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i4_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i5_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i5_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i5_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i6_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i6_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i6_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i7_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i7_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i7_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i8_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i8_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i9_ (GGS_semanticContext & ioArgument0,
                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i9_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i10_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i10_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i11_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i11_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_component_i12_ (GGS_semanticContext & ioArgument0,
                                                      Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_component_i12_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GGS_semanticContext constinArgument0,
                                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                                     GGS_AC_5F_boolExpression & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GGS_semanticContext constinArgument0,
                                                                    GGS_M_5F_variablesMap & ioArgument1,
                                                                    GGS_AC_5F_boolExpression & outArgument2,
                                                                    Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i15_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i15_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i16_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i16_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i17_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i17_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i18_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i18_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i19_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i19_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_io_5F_primary_i20_ (const GGS_semanticContext constinArgument0,
                                                          GGS_M_5F_variablesMap & ioArgument1,
                                                          GGS_AC_5F_boolExpression & outArgument2,
                                                          Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_io_5F_primary_i20_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_ (const GGS_semanticContext constinArgument0,
                                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                                     GGS_AC_5F_machineDefinition & outArgument2,
                                                                     Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_definition_5F_expression_i21_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_definition_5F_expression_i21_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GGS_semanticContext constinArgument0,
                                                                             GGS_M_5F_variablesMap & ioArgument1,
                                                                             GGS_AC_5F_machineDefinition & outArgument2,
                                                                             Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GGS_semanticContext constinArgument0,
                                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                                       GGS_M_5F_modesMap & outArgument2,
                                                                       GGS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GGS_semanticContext constinArgument0,
                                                                       GGS_M_5F_variablesMap & ioArgument1,
                                                                       GGS_M_5F_modesMap & outArgument2,
                                                                       GGS_ListForModes & outArgument3,
                                                                       Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GGS_semanticContext constinArgument0,
                                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GGS_semanticContext constinArgument0,
                                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                                               Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (Lexique_sara_5F_scanner * inLexique) ; */

  protected: void rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inLexique) ;

  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GGS_semanticContext constinArgument0,
                                                                  GGS_M_5F_variablesMap & ioArgument1,
                                                                  GGS_AC_5F_machineDefinition & outArgument2,
                                                                  Lexique_sara_5F_scanner * inLexique) ;

/*  protected: void rule_sara_5F_parser_explicit_5F_automaton_i27_parse (Lexique_sara_5F_scanner * inLexique) ; */

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
 /*  public: virtual void nt_component_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_component_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_component_ (GGS_semanticContext & ioArgument0,
                                      Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_definition_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_definition_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_ (const GGS_semanticContext inArgument0,
                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                     GGS_AC_5F_machineDefinition & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_definition_5F_expression_5F_factor_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_factor_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_factor_ (const GGS_semanticContext inArgument0,
                                                               GGS_M_5F_variablesMap & ioArgument1,
                                                               GGS_AC_5F_machineDefinition & outArgument2,
                                                               Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_definition_5F_expression_5F_term_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_definition_5F_expression_5F_term_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_definition_5F_expression_5F_term_ (const GGS_semanticContext inArgument0,
                                                             GGS_M_5F_variablesMap & ioArgument1,
                                                             GGS_AC_5F_machineDefinition & outArgument2,
                                                             Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'explicit_automaton' non terminal
//--- 'parse' label
 /*  public: virtual void nt_explicit_5F_automaton_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_explicit_5F_automaton_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_automaton_ (const GGS_semanticContext inArgument0,
                                                  GGS_M_5F_variablesMap & ioArgument1,
                                                  GGS_AC_5F_machineDefinition & outArgument2,
                                                  Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_and_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_io_5F_and_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_io_5F_and_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_and_5F_expression_ (const GGS_semanticContext inArgument0,
                                                    GGS_M_5F_variablesMap & ioArgument1,
                                                    GGS_AC_5F_boolExpression & outArgument2,
                                                    Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_bool_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_io_5F_bool_5F_expression_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_io_5F_bool_5F_expression_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_bool_5F_expression_ (const GGS_semanticContext inArgument0,
                                                     GGS_M_5F_variablesMap & ioArgument1,
                                                     GGS_AC_5F_boolExpression & outArgument2,
                                                     Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_primary' non terminal
//--- 'parse' label
 /*  public: virtual void nt_io_5F_primary_parse (Lexique_sara_5F_scanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_io_5F_primary_indexing (Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_io_5F_primary_ (const GGS_semanticContext inArgument0,
                                          GGS_M_5F_variablesMap & ioArgument1,
                                          GGS_AC_5F_boolExpression & outArgument2,
                                          Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompadd_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_modalcompadd_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ; */

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
 /*  public: virtual void nt_modalcompsub_5F_definition_parse (Lexique_sara_5F_scanner * inCompiler) ; */

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
 /*  public: virtual void nt_start_5F_symbol_parse (Lexique_sara_5F_scanner * inCompiler) ; */

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

