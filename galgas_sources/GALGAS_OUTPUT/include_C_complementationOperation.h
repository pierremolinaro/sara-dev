//---------------------------------------------------------------------------*
//                                                                           *
//               File 'include_C_complementationOperation.h'                 *
//                Generated by version 1.0.0 (LL(1) grammar)                 *
//                     october 29th, 2005, at 20h16'28"                      *
//                                                                           *
// This program is free software; you can redistribute it and/or modify it   *
// under the terms of the GNU General Public License as published by the     *
// Free Software Foundation.                                                 *
//                                                                           *
// This program is distributed in the hope it will be useful, but WITHOUT    *
// ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or     *
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for  *
// more details.                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*
//                                                                           *
//                 class 'cPtr_C_complementationOperation'                   *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef C_complementationOperation_DEFINED
#define C_complementationOperation_DEFINED

class cPtr_C_complementationOperation : public cPtr_AC_machineDefinition {
  private : typedef cPtr_AC_machineDefinition inherited ;
//--- START OF USER ZONE 2

  public : virtual void computeFromExpression (C_Lexique & inLexique,
                                               const TC_Array <C_saraMachine> & inSaraSystemArray,
                                               const uint16 inVariablesCount,
                                               C_BDD & outInitialStatesBDD,
                                               C_BDD & outTerminalStatesBDD,
                                               C_BDD & outAccessibilityRelationBDD) const ;

//--- END OF USER ZONE 2

  public : cPtr_C_complementationOperation (const GGS_AC_machineDefinition & ) ;
  public : GGS_AC_machineDefinition  mOperand ;
} ;

//---------------------------------------------------------------------------*

#endif
