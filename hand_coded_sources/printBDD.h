//-----------------------------------------------------------------------------*
//                                                                             *
//  Copyright (C) 2014, ..., 2014 Pierre Molinaro.                             *
//                                                                             *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//                                                                             *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This library is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU Lesser General Public License as published      *
//  by the Free Software Foundation; either version 2 of the License, or       *
//  (at your option) any later version.                                        *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public        *
//  License for more details.                                                  *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef ROUTINE_PRINT_BDD_WITH_VARIABLES_DEFINED
#define ROUTINE_PRINT_BDD_WITH_VARIABLES_DEFINED

//-----------------------------------------------------------------------------*

#include "M_machine.h"
#include "TC_Array.h"
#include "String-class.h"

//-----------------------------------------------------------------------------*

class AbstractOutputStream ;
class cDisplayBDD ;
class C_BDD ;

//-----------------------------------------------------------------------------*

void printBDDWithVariables (const C_BDD & inBDD,
                            AbstractOutputStream & inStream,
                            const uint32_t inVariableCount,
                            const cDisplayBDD & inVariablesNames) ;

//-----------------------------------------------------------------------------*

void printBDD (const C_BDD & inBDD,
               const TC_Array <String> & inVariablesNames,
               const int32_t inVariableCount,
               const int32_t inLeadingSpacesCount) ;

//-----------------------------------------------------------------------------*

void printBDD (const C_BDD & inBDD,
               const TC_Array <String> & inVariablesNames,
               const int32_t inLeadingSpacesCount) ;

//-----------------------------------------------------------------------------*

void printBDDWithoutHeader (const C_BDD & inBDD,
                            const TC_Array <String> & inVariablesNames,
                            const int32_t inVariableCount,
                            const int32_t inLeadingSpacesCount) ;

//-----------------------------------------------------------------------------*

#endif
