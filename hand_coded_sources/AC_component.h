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

#define macro_AC_component \
  public : virtual void compute (C_lexique & inLexique, \
                                 const bool inDisplayBDDvaluesCount, \
                                 const bool inDisplayBDDvalues, \
                                 TC_unique_dyn_array <C_string> & outStateNameArray, \
                                 TC_unique_dyn_array <C_string> & outInputNamesArray, \
                                 TC_unique_dyn_array <C_string> & outOutputNamesArray, \
                                 uint32 & outInitialStateIndex, \
                                 C_bdd & outOutputApplication, \
                                 C_bdd & outNextStateFunction) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_AC_component \
  public : virtual void compute (C_lexique & inLexique, \
                                 const bool inDisplayBDDvaluesCount, \
                                 const bool inDisplayBDDvalues, \
                                 TC_unique_dyn_array <C_string> & outStateNameArray, \
                                 TC_unique_dyn_array <C_string> & outInputNamesArray, \
                                 TC_unique_dyn_array <C_string> & outOutputNamesArray, \
                                 uint32 & outInitialStateIndex, \
                                 C_bdd & outOutputApplication, \
                                 C_bdd & outNextStateFunction) const ;

//---------------------------------------------------------------------------*
