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

void __fastcall TForm1::AddClick(TObject *Sender) // Actions du bouton "Add"
{
	String task = Edit1->Text;  // On met le texte dans une variable

   TListViewItem *item = ListView1->Items->Add();    // crée un nouvel élémet dans la ListView. La fonction retourne un pointeur vers le nouvel item qu'on stoque dans la variable item
   item->Text = task;   // On ajoute une Task au TListView

   if (Edit1->Text.IsEmpty()) {
	item->Text = "Empty task";     // si l'input est vide un ajoute une task nommé "Empty Task"
   }
}
