//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#include "bdd/C_BDD.h"

//---------------------------------------------------------------------------*

class C_saraMachine {
  public : C_saraMachine (void) ;
  public : C_String mMachineName ;
  public : uint16 mInputVariablesCount ;
  public : uint16 mInputAndInternalVariablesCount ;
  public : TC_UniqueArray <C_String> mNamesArray ;
  public : C_BDD mInitialStatesBDD ;
  public : C_BDD mTerminalStatesBDD ;
  public : C_BDD mTransitionRelationBDD ;
  public : C_BDD mAccessibleStatesBDD ;
} ;

//---------------------------------------------------------------------------*

#define macro_AC_boolExpression \
  public : virtual C_BDD computeBDD (C_Lexique & inLexique, \
                                     const TC_Array <C_saraMachine> & inSaraSystemArray, \
                                     const uint16 inVariablesCount, \
                                     const uint16 inBDDslotOffset) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_AC_boolExpression \
  public : virtual C_BDD computeBDD (C_Lexique & inLexique, \
                                     const TC_Array <C_saraMachine> & inSaraSystemArray, \
                                     const uint16 inVariablesCount, \
                                     const uint16 inBDDslotOffset) const ;

//---------------------------------------------------------------------------*
