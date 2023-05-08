//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Item1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TItem1_form *Item1_form;
//---------------------------------------------------------------------------
__fastcall TItem1_form::TItem1_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TItem1_form::T1Click(TObject *Sender)
{
	if (TP1->Text.ToInt()>0){
		TP1->Text =  IntToStr(TP1->Text.ToInt() - 1);
		TP2->Text =  IntToStr(TP2->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem1_form::T2Click(TObject *Sender)
{
	if (TP2->Text.ToInt()>0){
		TP2->Text =  IntToStr(TP2->Text.ToInt() - 1);
		TP3->Text =  IntToStr(TP3->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem1_form::T3Click(TObject *Sender)
{
	if (TP3->Text.ToInt()>0){
		TP3->Text =  IntToStr(TP3->Text.ToInt() - 1);
		TP1->Text =  IntToStr(TP1->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem1_form::SetClick(TObject *Sender)
{
	TP1->Text = freeTok->Text;
	TP2->Text = busyTok->Text;
	TP3->Text = docuTok->Text;
}
//---------------------------------------------------------------------------
void __fastcall TItem1_form::Synced()
{
	freeTok->Text = TP1->Text;
	busyTok->Text = TP2->Text;
	docuTok->Text = TP3->Text;
}
//---------------------------------------------------------------------------

