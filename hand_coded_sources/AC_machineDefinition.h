//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybern�tique de Nantes*
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

#include "bdd/C_bdd.h"

//---------------------------------------------------------------------------*

class C_saraMachine {
  public : C_saraMachine (void) ;
  public : C_string mMachineName ;
  public : uint16 mInputVariablesCount ;
  public : uint16 mInputAndInternalVariablesCount ;
  public : TCUniqueArray <C_string> mNamesArray ;
  public : C_bdd mInitialStatesBDD ;
  public : C_bdd mTerminalStatesBDD ;
  public : C_bdd mTransitionRelationBDD ;
  public : C_bdd mAccessibleStatesBDD ;
} ;

//---------------------------------------------------------------------------*

#define macro_AC_machineDefinition \
  public : virtual void computeFromExpression (C_lexique & inLexique, \
                                               const TCArray <C_saraMachine> & inSaraSystemArray, \
                                               const uint16 inVariablesCount, \
                                               C_bdd & outInitialStatesBDD, \
                                               C_bdd & outTerminalStatesBDD, \
                                               C_bdd & outAccessibleStatesBDD, \
                                               C_bdd & outAccessibilityRelationBDD) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_AC_machineDefinition \
  public : virtual void computeFromExpression (C_lexique & inLexique, \
                                               const TCArray <C_saraMachine> & inSaraSystemArray, \
                                               const uint16 inVariablesCount, \
                                               C_bdd & outInitialStatesBDD, \
                                               C_bdd & outTerminalStatesBDD, \
                                               C_bdd & outAccessibleStatesBDD, \
                                               C_bdd & outAccessibilityRelationBDD) const ;

//---------------------------------------------------------------------------*
