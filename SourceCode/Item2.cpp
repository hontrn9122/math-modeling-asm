//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Item2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TItem2_form *Item2_form;
//---------------------------------------------------------------------------
__fastcall TItem2_form::TItem2_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TItem2_form::T1Click(TObject *Sender)
{
	if (TP1->Text.ToInt()>0){
		TP1->Text =  IntToStr(TP1->Text.ToInt() - 1);
		TP2->Text =  IntToStr(TP2->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem2_form::T2Click(TObject *Sender)
{
	if (TP2->Text.ToInt()>0){
		TP2->Text =  IntToStr(TP2->Text.ToInt() - 1);
		TP3->Text =  IntToStr(TP3->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem2_form::SetClick(TObject *Sender)
{
	TP1->Text = waitTok->Text;
	TP2->Text = insideTok->Text;
	TP3->Text = doneTok->Text;
}
//---------------------------------------------------------------------------
void __fastcall TItem2_form::Synced()
{
	waitTok->Text = TP1->Text;
	insideTok->Text = TP2->Text;
	doneTok->Text = TP3->Text;
}
//---------------------------------------------------------------------------
