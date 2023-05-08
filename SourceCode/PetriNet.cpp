//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("Welcome.cpp", Welcome_form);
USEFORM("Item1.cpp", Item1_form);
USEFORM("Item2.cpp", Item2_form);
USEFORM("Item3.cpp", Item3_form);
USEFORM("Item4.cpp", Item4_form);
USEFORM("AboutUs.cpp", AboutUs_form);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TWelcome_form), &Welcome_form);
		Application->CreateForm(__classid(TItem1_form), &Item1_form);
		Application->CreateForm(__classid(TItem2_form), &Item2_form);
		Application->CreateForm(__classid(TItem3_form), &Item3_form);
		Application->CreateForm(__classid(TItem4_form), &Item4_form);
		Application->CreateForm(__classid(TAboutUs_form), &AboutUs_form);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
