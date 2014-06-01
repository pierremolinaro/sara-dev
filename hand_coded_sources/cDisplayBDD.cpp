//-----------------------------------------------------------------------------*
//                                                                             *
//  Copyright (C) 2000, ..., 2014 Pierre Molinaro.                             *
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
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "cDisplayBDD.h"
#include "streams/AC_OutputStream.h"
#include "utilities/MF_MemoryControl.h"

//-----------------------------------------------------------------------------*

#include <string.h>

//-----------------------------------------------------------------------------*

cDisplayBDD::cDisplayBDD (const uint32_t nombreChaines) :
aNombreChaines (0),
aTab (),
aDimensions (NULL) {
  allouer (nombreChaines) ;
}

//-----------------------------------------------------------------------------*

cDisplayBDD::~cDisplayBDD (void) {
  vider () ;
}

//-----------------------------------------------------------------------------*

void cDisplayBDD::vider (void) {
  aTab.free () ;
  macroMyDeleteArray (aDimensions) ;
  aNombreChaines = 0 ;
}

//-----------------------------------------------------------------------------*

void cDisplayBDD::allouer (const uint32_t nombreChaines) {
  vider () ;
  aTab.makeRoom ((int32_t) nombreChaines) ;
  macroMyDeleteArray (aDimensions) ;
  macroMyNewArray (aDimensions, uint32_t, nombreChaines) ;
  if (aDimensions != NULL) {
    aNombreChaines = nombreChaines ;
  }else{
    aTab.free () ;
    macroMyDeleteArray (aDimensions) ;
  }
}

//-----------------------------------------------------------------------------*

void cDisplayBDD::defineVariableName (const uint32_t indice,
                                        const C_String & chaine,
                                        const uint32_t dimensions) {
  if (indice < aNombreChaines) {
    aDimensions [indice] = dimensions ;
    aTab.addObject (chaine) ;
  }
}

//-----------------------------------------------------------------------------*

int32_t cDisplayBDD::longueur (const uint32_t indice) const  {
  return aTab ((int32_t) indice COMMA_HERE).length () ;
}

//-----------------------------------------------------------------------------*

uint32_t cDisplayBDD::
obtenirDimension (const uint32_t indice) const {
  uint32_t dim = 1 ;
  if (indice < aNombreChaines) {
    dim = aDimensions [indice] ;
  }
  return dim ;
}

//-----------------------------------------------------------------------------*

void cDisplayBDD::ecrire (const uint32_t indice,
                            AC_OutputStream & inStream) const {
  inStream << aTab ((int32_t) indice COMMA_HERE) ;
}

//-----------------------------------------------------------------------------*
