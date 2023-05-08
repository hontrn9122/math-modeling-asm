//---------------------------------------------------------------------------

#ifndef Item4H
#define Item4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.NumberBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "Pnet.h"
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TItem4_form : public TForm
{
__published:	// IDE-managed Components
	TPanel *Item4_panel;
	TLabel *Item4;
	TScrollBox *ScrollBox1;
	TMemo *Memo1;
	TLine *Line1;
	TLine *Line10;
	TLine *Line11;
	TLine *Line12;
	TLine *Line2;
	TLine *Line3;
	TLine *Line4;
	TLine *Line5;
	TLine *Line6;
	TLine *Line7;
	TLine *Line8;
	TLine *Line9;
	TCircle *p2;
	TLabel *P2_tag;
	TCircle *p3;
	TLabel *P3_tag;
	TCircle *p5;
	TLabel *P5_tag;
	TRectangle *T1;
	TLabel *T1_tag;
	TRectangle *T2;
	TLabel *T2_tag;
	TRectangle *T3;
	TLabel *T3_tag;
	TLabel *TP2;
	TLabel *TP3;
	TLabel *TP5;
	TLine *Line13;
	TLine *Line14;
	TLine *Line15;
	TCircle *p4;
	TCircle *p1;
	TLine *Line16;
	TLine *Line17;
	TLine *Line18;
	TLine *Line19;
	TLine *Line20;
	TLine *Line21;
	TLine *Line22;
	TLine *Line23;
	TLine *Line24;
	TLabel *TP4;
	TLabel *P1_tag;
	TLabel *P4_tag;
	TLabel *TP1;
	TLabel *SpecState;
	TLabel *Label1;
	TLabel *Label2;
	TComboBox *SpecBox;
	TButton *Find;
	TNumberBox *PaWait;
	TNumberBox *PaDone;
	TGroupBox *GroupBox1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	void __fastcall FindReachableMarking();
	void __fastcall SpecBoxChange(TObject *Sender);
	void __fastcall PaWaitChange(TObject *Sender);
	void __fastcall PaDoneChange(TObject *Sender);
	void __fastcall FindClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TItem4_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TItem4_form *Item4_form;
//---------------------------------------------------------------------------
#endif
