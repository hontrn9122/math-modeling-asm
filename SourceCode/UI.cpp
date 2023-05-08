//
//###############################################################
//#                              _`		      					#
//#                          _ooOoo_							#
//#                         o8888888o							#
//#                         88" . "88							#
//#                         (| -_- |)							#
//#                         O\  =  /O							#
//#                      ____/`---'\____		         		#
//#                    .'  \\|     |//  `.						#
//#                   /  \\|||  :  |||//  \						#
//#                  /  _||||| -:- |||||_  \					#
//#                  |   | \\\  -  /'| |   |					#
//#                  | \_|  `\`---'//  |_/ |					#
//#                  \  .-\__ `-. -'__/-.  /					#
//#                ___`. .'  /--.--\  `. .'___					#
//#             ."" '<  `.___\_<|>_/___.' _> \"".				#
//#            | | :  `- \`. ;`. _/; .'/ /  .' ; |				#
//#            \  \ `-.   \_\_`. _.'_/_/  -' _.' /				#
//#=============`-.`___`-.__\ \___  /__.-'_.'_.-'===============#
//                           `=--=-'
//---------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TPetriNet *PetriNet;
Pnet item4(5,3);
//---------------------------------------------------------------------------
__fastcall TPetriNet::TPetriNet(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPetriNet::T1Click(TObject *Sender)
{
	if (TP1->Text.ToInt()>0){
		TP1->Text =  IntToStr(TP1->Text.ToInt() - 1);
		TP2->Text =  IntToStr(TP2->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TPetriNet::T2Click(TObject *Sender)
{
	if (TP2->Text.ToInt()>0){
		TP2->Text =  IntToStr(TP2->Text.ToInt() - 1);
		TP3->Text =  IntToStr(TP3->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TPetriNet::T3Click(TObject *Sender)
{
	if (TP3->Text.ToInt()>0){
		TP3->Text =  IntToStr(TP3->Text.ToInt() - 1);
		TP1->Text =  IntToStr(TP1->Text.ToInt() + 1);
	}
	Synced();
}
//---------------------------------------------------------------------------
void __fastcall TPetriNet::SetClick(TObject *Sender)
{
	TP1->Text = freeTok->Text;
	TP2->Text = busyTok->Text;
	TP3->Text = docuTok->Text;
}
//---------------------------------------------------------------------------
void __fastcall TPetriNet::Synced()
{
	freeTok->Text = TP1->Text;
	busyTok->Text = TP2->Text;
	docuTok->Text = TP3->Text;
}
//---------------------------------------------------------------------------


void __fastcall TPetriNet::Find_4Click(TObject *Sender)
{
int** matrix = new int* [5];
for (int i = 0; i < 5; i++) {
	matrix[i] = new int[3];
}
matrix[0][0] = -1;
matrix[0][1] = 0;
matrix[0][2] = 1;
matrix[1][0] = -1;
matrix[1][1] = 0;
matrix[1][2] = 0;
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
marking[0] = freeTok_4->Text.ToInt();
marking[1] = waitTok_4->Text.ToInt();
marking[2] = insideTok_4->Text.ToInt();
marking[3] = docuTok_4->Text.ToInt();
marking[4] = doneTok_4->Text.ToInt();
item4.setIM(marking);
string Ptag[] = { "free", "wait", "inside", "docu", "done" };
string Ttag[] = { "start", "change", "end" };
item4.setPtag(Ptag);
item4.setTtag(Ttag);
String output = item4.printRM().c_str();
while(output.Length()>0){
	int newline = output.Pos(L"\n");
	String print = output.SubString(0, newline-1);
	output = output.SubString(newline+1, output.Length()-1);
	MarkingList_4->Items->Add(print);
}

}
//---------------------------------------------------------------------------



