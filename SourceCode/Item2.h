//---------------------------------------------------------------------------

#ifndef Item2H
#define Item2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.NumberBox.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TItem2_form : public TForm
{
__published:	// IDE-managed Components
	TPanel *Item2_panel;
	TButton *Set;
	TLabel *Item1;
	TLabel *bracket1;
	TLabel *wait;
	TLabel *busy;
	TLabel *done;
	TLabel *bracket2;
	TLabel *Marking;
	TNumberBox *waitTok;
	TNumberBox *insideTok;
	TNumberBox *doneTok;
	TLine *Line01;
	TLine *Line02;
	TLine *Line03;
	TCircle *p1;
	TLabel *P1_tag;
	TCircle *p2;
	TLabel *P2_tag;
	TCircle *p3;
	TLabel *P3_tag;
	TRectangle *T1;
	TLabel *T1_tag;
	TRectangle *T2;
	TLabel *T2_tag;
	TLabel *TP1;
	TLabel *TP2;
	TLabel *TP3;
	TLine *Line11;
	TLine *Line12;
	TLine *Line13;
	TLine *Line21;
	TLine *Line22;
	TLine *Line23;
	TLine *Line31;
	TLine *Line32;
	TLine *Line33;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall T1Click(TObject *Sender);
	void __fastcall T2Click(TObject *Sender);
	void __fastcall SetClick(TObject *Sender);
	void __fastcall Synced();
private:	// User declarations
public:		// User declarations
	__fastcall TItem2_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TItem2_form *Item2_form;
//---------------------------------------------------------------------------
#endif
