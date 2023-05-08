//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Item3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TItem3_form *Item3_form;
//---------------------------------------------------------------------------
__fastcall TItem3_form::TItem3_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TItem3_form::T1Click(TObject *Sender)
{
	if (TP1->Text.ToInt()>0 && TP2->Text.ToInt()>0){
		TP1->Text =  IntToStr(TP1->Text.ToInt() - 1);
		TP2->Text =  IntToStr(TP2->Text.ToInt() - 1);
		TP3->Text =  IntToStr(TP3->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem3_form::T2Click(TObject *Sender)
{
	if (TP3->Text.ToInt()>0){
		TP3->Text =  IntToStr(TP3->Text.ToInt() - 1);
		TP4->Text =  IntToStr(TP4->Text.ToInt() + 1);
		TP5->Text =  IntToStr(TP5->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem3_form::T3Click(TObject *Sender)
{
	if (TP4->Text.ToInt()>0){
		TP4->Text =  IntToStr(TP4->Text.ToInt() - 1);
		TP1->Text =  IntToStr(TP1->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem3_form::SetClick(TObject *Sender)
{
	if (SpecBox->ItemIndex==-1){
		ShowMessage("Please choose specialist's status!");
        return;
	}
	if(SpecBox->ItemIndex == 0){
		TP1->Text = "1";
		TP3->Text = "0";
		TP4->Text = "0";
	}
	else if(SpecBox->ItemIndex == 1){
		TP1->Text = "0";
		TP3->Text = "1";
		TP4->Text = "0";
	}
	else if(SpecBox->ItemIndex == 2){
		TP1->Text = "0";
		TP3->Text = "0";
		TP4->Text = "1";
	}
	TP2->Text = PaWait->Text;
	TP5->Text = PaDone->Text;
    Synced();
}
//---------------------------------------------------------------------------
void __fastcall TItem3_form::Synced()
{
	freeTok->Text = TP1->Text;
	waitTok->Text = TP2->Text;
	insideTok->Text = TP3->Text;
	docuTok->Text = TP4->Text;
	doneTok->Text = TP5->Text;
	if(TP1->Text == 1) SpecBox->ItemIndex = 0;
	else if(TP3->Text == 1) SpecBox->ItemIndex = 1;
	else if(TP4->Text == 1) SpecBox->ItemIndex = 2;
	PaWait->Text = TP2->Text;
	PaDone->Text = TP5->Text;
}
//---------------------------------------------------------------------------




