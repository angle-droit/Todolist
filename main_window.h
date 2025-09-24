//---------------------------------------------------------------------------

#ifndef main_windowH
#define main_windowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Rtti.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Menus.hpp>

class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Add;
	TListView *ListView1;
	TEdit *Edit1;
	void __fastcall AddClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
extern PACKAGE TForm1 *Form1;
#endif
