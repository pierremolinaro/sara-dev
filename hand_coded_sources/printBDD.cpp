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
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "printBDD.h"
#include "cDisplayBDD.h"
#include "AbstractOutputStream.h"
#include "MF_MemoryControl.h"
#include "BinaryDecisionDiagram.h"
#include "BinaryDecisionDiagram-node.h"

//---------------------------------------------------------------------------*

static inline int32_t sup (const int32_t inA,
                           const int32_t inB) {
  return (inA > inB) ? inA : inB ;
}

//-----------------------------------------------------------------------------*

#include <string.h>

//-----------------------------------------------------------------------------*

static void
ecrireLigneBDD (AbstractOutputStream & inStream,
                GenericArray <char> & chaineAffichage,
                const cDisplayBDD & inVariablesNames) {
//--- Ecriture des valeurs booleennes
  int32_t indiceBDD = 0 ;
  for (uint32_t i=0 ; i<inVariablesNames.nombreEntrees () ; i++) {
    const int32_t lg = ::sup (inVariablesNames.longueur (i), (int32_t) inVariablesNames.obtenirDimension (i)) ;
    const int32_t espaces = 1 + lg - (int32_t) inVariablesNames.obtenirDimension (i) ;
    inStream.appendSpaces (espaces) ;
    for (int32_t k=(int32_t) inVariablesNames.obtenirDimension (i) ; k>0 ; k--) {
      inStream.appendASCIIChar (chaineAffichage (indiceBDD + k - 1 COMMA_HERE)) ;
    }
    indiceBDD += inVariablesNames.obtenirDimension (i) ;
  }
//--- Fin
  inStream.appendString ("\n") ;
}

//-----------------------------------------------------------------------------*

static void
ecrireBDDinterne (AbstractOutputStream & inStream,
                  const uint32_t inValue,
                  GenericArray <char> & chaineAffichage,
                  uint32_t numeroVariable,
                  const uint32_t inVariableCount,
                  const cDisplayBDD & inVariablesNames) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_HERE) ;
  const uint32_t complement = inValue & 1 ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    if (complement == 1) {
      ecrireLigneBDD (inStream, chaineAffichage, inVariablesNames) ;
    }
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    while (numeroVariable > var) {
      chaineAffichage.setObjectAtIndex ('X', (int32_t) numeroVariable COMMA_HERE) ;
      numeroVariable -- ;
    }
  //--- Branche Zero
    const uint32_t branche0 = gNodeArray [nodeIndex].mELSE ^ complement ;
    if (branche0 != 0) {
      chaineAffichage.setObjectAtIndex ('0', (int32_t) var COMMA_HERE) ;
      if (branche0 == 1) {
        for (uint32_t i=0 ; i<var ; i++) {
          chaineAffichage.setObjectAtIndex ('X', (int32_t) i COMMA_HERE) ;
        }
        ecrireLigneBDD (inStream, chaineAffichage, inVariablesNames) ;
      }else{
        ecrireBDDinterne (inStream, branche0, chaineAffichage, (uint32_t) (var - 1), inVariableCount,
                          inVariablesNames) ;
      }
    }
  //--- Branche 1
    const uint32_t branche1 = gNodeArray [nodeIndex].mTHEN ^ complement ;
    if (branche1 != 0) {
      chaineAffichage.setObjectAtIndex ('1', (int32_t) var COMMA_HERE) ;
      if (branche1 == 1) {
        for (uint32_t i=0 ; i<var ; i++) {
          chaineAffichage.setObjectAtIndex ('X', (int32_t) i COMMA_HERE) ;
        }
        ecrireLigneBDD (inStream, chaineAffichage, inVariablesNames) ;
      }else{
        ecrireBDDinterne (inStream, branche1, chaineAffichage, (uint32_t) (var - 1), inVariableCount,
                          inVariablesNames) ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

void printBDDWithVariables (const BinaryDecisionDiagram & inBDD,
                            AbstractOutputStream & inStream,
                            const uint32_t inVariableCount,
                            const cDisplayBDD & inVariablesNames) {
//--- Imprimer les variables
  for (uint32_t i=0 ; i<inVariablesNames.nombreEntrees () ; i++) {
    const int32_t lg = ::sup (inVariablesNames.longueur (i), (int32_t) inVariablesNames.obtenirDimension (i)) ;
    const int32_t espaces = 1 + lg - inVariablesNames.longueur (i) ;
    inStream.appendSpaces (espaces) ;
    inVariablesNames.ecrire (i, inStream) ;
  }
  inStream.appendString ("\n") ;
//--- Ecrire le BDD
  const uint32_t bddValue = inBDD.integerValue () ;
  if (bddValue == 0) {
    inStream.appendString ("(false)\n") ;
  }else if (bddValue == 1) {
    GenericArray <char> chaineAffichage ((int32_t) inVariableCount, 'X' COMMA_HERE) ;
    ecrireLigneBDD (inStream, chaineAffichage, inVariablesNames) ;
  }else{
    GenericArray <char> chaineAffichage ((int32_t) inVariableCount, 'X' COMMA_HERE) ;
    ecrireBDDinterne (inStream, bddValue, chaineAffichage, inVariableCount - 1, inVariableCount, inVariablesNames) ;
  }
}


//-----------------------------------------------------------------------------*
//   printBDD                                                                  *
//-----------------------------------------------------------------------------*

static void printBDDline (const GenericArray <char> & inDisplayString,
                          const GenericArray <int32_t> & inNameLengthArray,
                          const int32_t inLeadingSpacesCount) {
  for (int32_t i=0 ; i<inLeadingSpacesCount ; i++) {
    gCout.appendString (" ") ;
  }
  for (int32_t i=0 ; i<inDisplayString.count () ; i++) {
    for (int32_t c=0 ; c<inNameLengthArray (i COMMA_HERE) ; c++) {
      gCout.appendString (" ") ;
    }
    gCout.appendASCIIChar (inDisplayString (i COMMA_HERE)) ;
  }
  gCout.appendString ("\n") ;
}

//-----------------------------------------------------------------------------*

static void
internalPrintBDD (const uint32_t inValue,
                  GenericArray <char> & inDisplayString,
                  const GenericArray <int32_t> & inNameLengthArray,
                  uint32_t inVariableIndex,
                  const int32_t inLeadingSpacesCount) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_HERE) ;
  const uint32_t complement = inValue & 1 ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    if (complement == 1) {
      printBDDline (inDisplayString, inNameLengthArray, inLeadingSpacesCount) ;
    }
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    while (inVariableIndex > var) {
      inDisplayString.setObjectAtIndex ('X', (int32_t) inVariableIndex COMMA_HERE) ;
      inVariableIndex -- ;
    }
  //--- Branche Zero
    const uint32_t branche0 = gNodeArray [nodeIndex].mELSE ^ complement ;
    if (branche0 != 0) {
      inDisplayString.setObjectAtIndex ('0', (int32_t) var COMMA_HERE) ;
      if (branche0 == 1) {
        for (uint32_t i=0 ; i<var ; i++) {
          inDisplayString.setObjectAtIndex ('X', (int32_t) i COMMA_HERE) ;
        }
        printBDDline (inDisplayString, inNameLengthArray, inLeadingSpacesCount) ;
      }else{
        internalPrintBDD (branche0, inDisplayString, inNameLengthArray, (uint32_t) (inVariableIndex - 1), inLeadingSpacesCount) ;
      }
    }
  //--- Branche 1
    const uint32_t branche1 = gNodeArray [nodeIndex].mTHEN ^ complement ;
    if (branche1 != 0) {
      inDisplayString.setObjectAtIndex ('1', (int32_t) var COMMA_HERE) ;
      if (branche1 == 1) {
        for (uint32_t i=0 ; i<var ; i++) {
          inDisplayString.setObjectAtIndex ('X', (int32_t) i COMMA_HERE) ;
        }
        printBDDline (inDisplayString, inNameLengthArray, inLeadingSpacesCount) ;
      }else{
        internalPrintBDD (branche1, inDisplayString, inNameLengthArray, (uint32_t) (inVariableIndex - 1), inLeadingSpacesCount) ;
      }
    }
  }
}

//-----------------------------------------------------------------------------*

static void printBDDHeader (const GenericArray <String> & inVariablesNames,
                            const int32_t inVariableCount,
                            const int32_t inLeadingSpacesCount) {
//--- Imprimer les variables
  for (int32_t i=0 ; i<inLeadingSpacesCount ; i++) {
    gCout.appendString (" ") ;
  }
  for (int32_t i=0 ; i<inVariableCount ; i++) {
    gCout.appendString (" ") ;
    gCout.appendString (inVariablesNames (i COMMA_HERE)) ;
  }
  gCout.appendString ("\n") ;
}

//-----------------------------------------------------------------------------*

static void printBDDwithoutHeader (const BinaryDecisionDiagram & inBDD,
                                   const GenericArray <String> & inVariablesNames,
                                   const int32_t inVariableCount,
                                   const int32_t inLeadingSpacesCount) {
//--- Compute header size
  GenericArray <int32_t> nameLengthArray (inVariableCount COMMA_HERE) ;
  for (int32_t i=0 ; i<inVariableCount ; i++) {
    nameLengthArray.appendObject (inVariablesNames (i COMMA_HERE).length ()) ;
  }
  const uint32_t BDDValue = inBDD.integerValue () ;
//--- Print BDD
  if (BDDValue == 0) {
    for (int32_t i=0 ; i<inLeadingSpacesCount ; i++) {
      gCout.appendString (" ") ;
    }
    gCout.appendString (" (false)\n") ;
  }else if (BDDValue == 1) {
    GenericArray <char> displayString (inVariableCount, 'X' COMMA_HERE) ;
    printBDDline (displayString, nameLengthArray, inLeadingSpacesCount) ;
  }else{
    const uint32_t nodeIndex = nodeIndexForRoot (BDDValue COMMA_HERE) ;
    const int32_t var = (int32_t) gNodeArray [nodeIndex].mVariableIndex ;
    if (var >= inVariableCount) {
      gCout.appendString ("** ERROR in ") ;
      gCout.appendString (__FILE__) ;
      gCout.appendString (" at line %") ;
      gCout.appendSigned (__LINE__);
      gCout.appendString (": BDD variable (") ;
      gCout.appendSigned (var);
      gCout.appendString (") is greater than variable count (") ;
      gCout.appendSigned (inVariableCount);
      gCout.appendString (") **\n") ;
    }else{
      GenericArray <char> displayString (inVariableCount, 'X' COMMA_HERE) ;
      internalPrintBDD (BDDValue, displayString, nameLengthArray, (uint32_t) (inVariableCount - 1), inLeadingSpacesCount) ;
    }
  }
}

//-----------------------------------------------------------------------------*

void printBDD (const BinaryDecisionDiagram & inBDD,
               const GenericArray <String> & inVariablesNames,
               const int32_t inVariableCount,
               const int32_t inLeadingSpacesCount) {
//--- Print header
  printBDDHeader (inVariablesNames, inVariableCount, inLeadingSpacesCount) ;
//--- Print without header
  printBDDwithoutHeader (inBDD, inVariablesNames, inVariableCount, inLeadingSpacesCount) ;
}

//-----------------------------------------------------------------------------*

void printBDD (const BinaryDecisionDiagram & inBDD,
               const GenericArray <String> & inVariablesNames,
               const int32_t inLeadingSpacesCount) {
  printBDD (inBDD, inVariablesNames, inVariablesNames.count (), inLeadingSpacesCount) ;
}

//-----------------------------------------------------------------------------*

void printBDDWithoutHeader (const BinaryDecisionDiagram & inBDD,
                            const GenericArray <String> & inVariablesNames,
                            const int32_t inVariableCount,
                            const int32_t inLeadingSpacesCount) {
//--- Compute header size
  GenericArray <int32_t> nameLengthArray (inVariableCount COMMA_HERE) ;
  for (int32_t i=0 ; i<inVariableCount ; i++) {
    nameLengthArray.appendObject (inVariablesNames (i COMMA_HERE).length ()) ;
  }
//--- Print BDD
  if (inBDD.integerValue() == 0) {
    for (int32_t i=0 ; i<inLeadingSpacesCount ; i++) {
      gCout.appendString (" ") ;
    }
    gCout.appendString (" (false)\n") ;
  }else if (inBDD.integerValue() == 1) {
    GenericArray <char> displayString (inVariableCount, 'X' COMMA_HERE) ;
    printBDDline (displayString, nameLengthArray, inLeadingSpacesCount) ;
  }else{
    const uint32_t nodeIndex = nodeIndexForRoot (inBDD.integerValue() COMMA_HERE) ;
    const int32_t var = (int32_t) gNodeArray [nodeIndex].mVariableIndex ;
    if (var >= inVariableCount) {
      gCout.appendString ("** ERROR in ") ;
      gCout.appendString (__FILE__) ;
      gCout.appendString (" at line %") ;
      gCout.appendSigned (__LINE__);
      gCout.appendString (": BDD variable (") ;
      gCout.appendSigned (var);
      gCout.appendString (") is greater than variable count (") ;
      gCout.appendSigned (inVariableCount);
      gCout.appendString (") **\n") ;
    }else{
      GenericArray <char> displayString (inVariableCount, 'X' COMMA_HERE) ;
      internalPrintBDD (inBDD.integerValue(), displayString, nameLengthArray, (uint32_t) (inVariableCount - 1), inLeadingSpacesCount) ;
    }
  }
}

//-----------------------------------------------------------------------------*
