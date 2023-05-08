//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Welcome.h"
#include "Item1.h"
#include "Item2.h"
#include "Item3.h"
#include "Item4.h"
#include "AboutUs.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)

TWelcome_form *Welcome_form;
//---------------------------------------------------------------------------
__fastcall TWelcome_form::TWelcome_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TWelcome_form::Item1Click(TObject *Sender)
{
	Item1_form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TWelcome_form::Item2Click(TObject *Sender)
{
	Item2_form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TWelcome_form::Item3Click(TObject *Sender)
{
	Item3_form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TWelcome_form::Item4Click(TObject *Sender)
{
	Item4_form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TWelcome_form::Label3Click(TObject *Sender)
{
	AboutUs_form->Show();
}
//---------------------------------------------------------------------------


void __fastcall TWelcome_form::Text1Click(TObject *Sender)
{
    AboutUs_form->Show();
}
//---------------------------------------------------------------------------

