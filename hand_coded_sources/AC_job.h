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

#define macro_AC_job \
  public : virtual void compute (C_lexique & inLexique, \
                                 TC_grow_array <C_saraMachine> & ioSaraSystemArray, \
                                 const bool inDisplayBDDvaluesCount, \
                                 const bool inDisplayBDDvalues) const = 0 ;

//---------------------------------------------------------------------------*

#define macroInheritFrom_AC_job \
  public : virtual void compute (C_lexique & inLexique, \
                                 TC_grow_array <C_saraMachine> & ioSaraSystemArray, \
                                 const bool inDisplayBDDvaluesCount, \
                                 const bool inDisplayBDDvalues) const ;

//---------------------------------------------------------------------------*