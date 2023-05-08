//---------------------------------------------------------------------------

#ifndef UIH
#define UIH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "Pnet.h"
#include <FMX.Edit.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.NumberBox.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TPetriNet : public TForm
{
__published:	// IDE-managed Components
	TPanel *Item1_panel;
	TCircle *p2;
	TLine *Line1;
	TLine *Line2;
	TLine *Line3;
	TRectangle *T1;
	TLine *Line4;
	TLine *Line5;
	TLine *Line6;
	TCircle *p1;
	TLabel *TP1;
	TLabel *TP2;
	TRectangle *T2;
	TCircle *p3;
	TLine *Line7;
	TLine *Line8;
	TLine *Line9;
	TLine *Line10;
	TLine *Line11;
	TLine *Line12;
	TLine *Line13;
	TRectangle *T3;
	TLine *Line14;
	TLine *Line15;
	TLine *Line16;
	TLine *Line17;
	TLine *Line18;
	TLine *Line19;
	TLine *Line20;
	TLabel *TP3;
	TLabel *P1_tag;
	TLabel *T1_tag;
	TLabel *P2_tag;
	TLabel *T2_tag;
	TLabel *P3_tag;
	TLabel *T3_tag;
	TButton *Set;
	TLabel *Item1;
	TLabel *bracket1;
	TLabel *free;
	TLabel *busy;
	TLabel *docu;
	TLabel *bracket2;
	TLabel *Marking;
	TNumberBox *freeTok;
	TNumberBox *busyTok;
	TNumberBox *docuTok;
	TPanel *Item2_panel;
	TCircle *Circle1;
	TLine *Line21;
	TLine *Line22;
	TLine *Line23;
	TRectangle *Rectangle1;
	TLine *Line24;
	TLine *Line25;
	TLine *Line26;
	TCircle *Circle2;
	TLabel *Label1;
	TLabel *Label2;
	TRectangle *Rectangle2;
	TCircle *Circle3;
	TLine *Line27;
	TLine *Line28;
	TLine *Line29;
	TLine *Line30;
	TLine *Line31;
	TLine *Line32;
	TLine *Line33;
	TRectangle *Rectangle3;
	TLine *Line34;
	TLine *Line35;
	TLine *Line36;
	TLine *Line37;
	TLine *Line38;
	TLine *Line39;
	TLine *Line40;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TButton *Button1;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TNumberBox *NumberBox1;
	TNumberBox *NumberBox2;
	TNumberBox *NumberBox3;
	TPanel *Item4_panel;
	TLabel *Item4;
	TLabel *Bracket1_4;
	TLabel *Bracket2_4;
	TLabel *docu_4;
	TNumberBox *docuTok_4;
	TLabel *done_4;
	TNumberBox *doneTok_4;
	TLabel *inside_4;
	TNumberBox *insideTok_4;
	TLabel *free_4;
	TNumberBox *freeTok_4;
	TLabel *wait_4;
	TNumberBox *waitTok_4;
	TButton *Find_4;
	TVertScrollBox *ScrollBox;
	THorzScrollBox *HorzScrollBox_4;
	TListBox *MarkingList_4;
	TPathLabel *PathLabel1;
	void __fastcall T1Click(TObject *Sender);
	void __fastcall T2Click(TObject *Sender);
	void __fastcall T3Click(TObject *Sender);
	void __fastcall SetClick(TObject *Sender);
	void __fastcall Synced();
	void __fastcall Find_4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPetriNet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPetriNet *PetriNet;
//---------------------------------------------------------------------------
#endif
