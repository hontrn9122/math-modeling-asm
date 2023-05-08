//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Item4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TItem4_form *Item4_form;
Pnet item4(5,3);
//---------------------------------------------------------------------------
__fastcall TItem4_form::TItem4_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TItem4_form::FindReachableMarking()
{
	int** matrix = new int* [5];
	for (int i = 0; i < 5; i++) {
		matrix[i] = new int[3];
	}
	matrix[1][0] = -1;
	matrix[1][1] = 0;
	matrix[1][2] = 1;
	matrix[0][0] = -1;
	matrix[0][1] = 0;
	matrix[0][2] = 0;
	matrix[2][0] = 1;
	matrix[2][1] = -1;
	matrix[2][2] = 0;
	matrix[3][0] = 0;
	matrix[3][1] = 1;
	matrix[3][2] = -1;
	matrix[4][0] = 0;
	matrix[4][1] = 1;
	matrix[4][2] = 0;
	item4.setAdMatrix(matrix);
	int marking[5];
	if (SpecBox->ItemIndex==0){
		marking[1] = 1;
		marking[2] = 0;
		marking[3] = 0;
	}
	else if (SpecBox->ItemIndex==1){
		marking[1] = 0;
		marking[2] = 1;
		marking[3] = 0;
	}
	else if (SpecBox->ItemIndex==2){
		marking[1] = 0;
		marking[2] = 0;
		marking[3] = 1;
	}
	marking[0] = PaWait->Text.ToInt();
	marking[4] = PaDone->Text.ToInt();
	item4.setIM(marking);
	string Ptag[] = { "wait", "free", "inside", "docu", "done" };
	string Ttag[] = { "start", "change", "end" };
	item4.setPtag(Ptag);
	item4.setTtag(Ttag);
	String output = item4.printRM().c_str();
	while(output.Length()>0){
		int newline = output.Pos(L"\n");
		String print = output.SubString(0, newline-1);
		output = output.SubString(newline+1, output.Length()-1);
		Memo1->Lines->Add(print);
	}
}

//---------------------------------------------------------------------------
void __fastcall TItem4_form::SpecBoxChange(TObject *Sender)
{
	if (SpecBox->ItemIndex == 0){
		TP1->Text = "1";
		TP3->Text = "0";
		TP4->Text = "0";
	}
	if (SpecBox->ItemIndex == 1){
		TP1->Text = "0";
		TP3->Text = "1";
		TP4->Text = "0";
	}
	if (SpecBox->ItemIndex == 2){
		TP1->Text = "0";
		TP3->Text = "0";
		TP4->Text = "1";
	}
}
//---------------------------------------------------------------------------
void __fastcall TItem4_form::PaWaitChange(TObject *Sender)
{
	TP2->Text = PaWait->Text;
}
//---------------------------------------------------------------------------
void __fastcall TItem4_form::PaDoneChange(TObject *Sender)
{
	TP5->Text = PaDone->Text;
}
//---------------------------------------------------------------------------
void __fastcall TItem4_form::FindClick(TObject *Sender)
{
	if (SpecBox->ItemIndex!=-1){
        Memo1->Lines->Clear();
		FindReachableMarking();
	}
	else{
		ShowMessage("Please choose specialist's status!");
	}
}
//---------------------------------------------------------------------------
