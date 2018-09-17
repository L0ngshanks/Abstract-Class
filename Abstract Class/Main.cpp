#include "Main.h"
#include "Base.h"
#include "Employee.h"
#include "Base.h"
#include "stdafx.h"
#include "Validation.h"

#include <vector>

using namespace std;

Main::Main()
{
}

void Main::AddRecord()
{
	Validation valid;

	int addRec_selection = 0;
	while (addRec_selection != 9)
	{
		Console::Lock(true);
		system("cls");
		cout << "Add Records" << endl;
		cout << "-------------------------" << endl;
		cout << "1) Add an Employee Record" << endl;
		cout << "2) Add a Student Record" << endl;
		cout << "-------------------------" << endl;
		cout << "9) Exit" << endl;
		cout << "-------------------------" << endl;
		addRec_selection = valid.IntValidation("Selection: ");

		switch (addRec_selection)
		{
		case 1:
			break;
		case 2:
			break;
		case 9:
			break;
		default:
			break;
		}
	}
}

void Main::ManageRecords()
{
}

int main(int argc, char** argv)
{
	Validation valid;
	vector<Base*> records;

	bool loopBool = true;
	while (loopBool)
	{
		Console::Lock(true);
		system("cls");
		cout << "Welcome to the Abstract Base Class Lab" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1) Add a record" << endl;
		cout << "2) Manage records" << endl;
		cout << "--------------------------------------" << endl;
		cout << "Press ESC to Exit" << endl;
		cout << "--------------------------------------" << endl;
		int selection = valid.IntValidation("Selection: ");
		Console::Lock(false);
		Sleep(20);

		switch (selection)
		{
		case 1:
			break;
		case 2:
			break;
		default:
			break;
		}
		if (GetAsyncKeyState(VK_ESCAPE))
			loopBool = false;

	}
}

Main::~Main()
{
	//delete records;
	//records = NULL;
}
