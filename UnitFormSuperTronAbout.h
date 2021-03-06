//---------------------------------------------------------------------------
/*
  Super Tron, a simple game
  Copyright (C) 2008  Richel Bilderbeek

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
// From http://www.richelbilderbeek.nl
//---------------------------------------------------------------------------
#ifndef UnitFormSuperTronAboutH
#define UnitFormSuperTronAboutH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TFormSuperTronAbout : public TForm
{
__published:	// IDE-managed Components
  TImage *ImageAuthor;
        TRichEdit *RichEdit1;
        TPanel *PanelTop;
        TPanel *PanelTopLeft;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label11;
  TPanel *PanelBlank;
  TPanel *Panel1;
private:	// User declarations
public:		// User declarations
        __fastcall TFormSuperTronAbout(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSuperTronAbout *FormSuperTronAbout;
//---------------------------------------------------------------------------
#endif
