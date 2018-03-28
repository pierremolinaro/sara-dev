#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  GRAMMAR sara_grammar
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cGrammar_sara_5F_grammar : public cParser_sara_5F_parser {
//------------------------------------- 'component' non terminal
//--- 'parse' label
  public : virtual void nt_component_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_component_ (GALGAS_semanticContext & ioArgument0,
                                       C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_definition_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_definition_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                      GALGAS_M_5F_variablesMap & ioArgument1,
                                                      GALGAS_AC_5F_machineDefinition & outArgument2,
                                                      C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_factor' non terminal
//--- 'parse' label
  public : virtual void nt_definition_5F_expression_5F_factor_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_definition_5F_expression_5F_factor_ (const GALGAS_semanticContext inArgument0,
                                                                GALGAS_M_5F_variablesMap & ioArgument1,
                                                                GALGAS_AC_5F_machineDefinition & outArgument2,
                                                                C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'definition_expression_term' non terminal
//--- 'parse' label
  public : virtual void nt_definition_5F_expression_5F_term_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext inArgument0,
                                                              GALGAS_M_5F_variablesMap & ioArgument1,
                                                              GALGAS_AC_5F_machineDefinition & outArgument2,
                                                              C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'explicit_automaton' non terminal
//--- 'parse' label
  public : virtual void nt_explicit_5F_automaton_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_explicit_5F_automaton_ (const GALGAS_semanticContext inArgument0,
                                                   GALGAS_M_5F_variablesMap & ioArgument1,
                                                   GALGAS_AC_5F_machineDefinition & outArgument2,
                                                   C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_and_expression' non terminal
//--- 'parse' label
  public : virtual void nt_io_5F_and_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                     GALGAS_M_5F_variablesMap & ioArgument1,
                                                     GALGAS_AC_5F_boolExpression & outArgument2,
                                                     C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_bool_expression' non terminal
//--- 'parse' label
  public : virtual void nt_io_5F_bool_5F_expression_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext inArgument0,
                                                      GALGAS_M_5F_variablesMap & ioArgument1,
                                                      GALGAS_AC_5F_boolExpression & outArgument2,
                                                      C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'io_primary' non terminal
//--- 'parse' label
  public : virtual void nt_io_5F_primary_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_io_5F_primary_ (const GALGAS_semanticContext inArgument0,
                                           GALGAS_M_5F_variablesMap & ioArgument1,
                                           GALGAS_AC_5F_boolExpression & outArgument2,
                                           C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompadd_definition' non terminal
//--- 'parse' label
  public : virtual void nt_modalcompadd_5F_definition_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                        GALGAS_M_5F_variablesMap & ioArgument1,
                                                        GALGAS_M_5F_modesMap & outArgument2,
                                                        GALGAS_ListForModes & outArgument3,
                                                        C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'modalcompsub_definition' non terminal
//--- 'parse' label
  public : virtual void nt_modalcompsub_5F_definition_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext inArgument0,
                                                        GALGAS_M_5F_variablesMap & ioArgument1,
                                                        GALGAS_M_5F_modesMap & outArgument2,
                                                        GALGAS_ListForModes & outArgument3,
                                                        C_Lexique_sara_5F_scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_sara_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (C_Lexique_sara_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

  public : virtual int32_t select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner *) ;

  public : virtual int32_t select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner *) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ;

extern C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

