#include <fmx.h>
#pragma hdrstop

#include "main_window.h"

#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm1::createColumnClick(TObject *Sender)
{
	//Cr�ation de la column en fonction du nom d�finit
	String columnName = Edit1->Text;
	TStringColumn *col = new TStringColumn(StringGrid1);
	col->Parent = StringGrid1;
	col->Header = columnName;
	col->Width = 150;

	// si la column est vide cr�er la avec comme nom "New Column"
	if (Edit1->Text.IsEmpty()) {
        col->Header = "New column";
	}
}
