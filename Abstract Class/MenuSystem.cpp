#include "MenuSystem.h"



MenuSystem::MenuSystem()
{
}


MenuSystem::~MenuSystem()
{
}
void MenuSystem::MainMenu()
{
	Validation valid;

	int selection = 0;
	while (selection != 9)
	{
		cout << "Welcome to the Abstract Base Class Lab" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1) Add a record" << endl;
		cout << "2) Manage records" << endl;
		cout << "--------------------------------------" << endl;
		cout << "9) Exit" << endl;
		cout << "--------------------------------------" << endl;
		int selection = valid.IntValidation("Selection: ");

		switch (selection)
		{
		case 1:
			system("cls");
			AddRecord();
			break;
		case 2:
			ManageRecords();
			break;
		case 9:
			return;
		default:
			break;
		};
	};

}
void MenuSystem::AddRecord()
{
	Validation valid;

	while (addRec_selection != 9)
	{
		system("cls");
		cout << "Add Records" << endl;
		cout << "-------------------------" << endl;
		cout << "1) Add an Employee Record" << endl;
		cout << "2) Add a Student Record" << endl;
		cout << "-------------------------" << endl;
		cout << "9) Return to Main Menu" << endl;
		cout << "-------------------------" << endl;
		addRec_selection = valid.IntValidation("Selection: ");

		switch (addRec_selection)
		{
		case 1:
			system("cls");

			dc.EmployeeCollection();
			break;
		case 2:
			system("cls");
			dc.StudentCollection();
			break;
		case 9:
			system("cls");
			break;
		default:
			break;
		}
	}
}

void MenuSystem::ManageRecords()
{
	dc->Display();
}

int MenuSystem::GetSelection()
{
	return addRec_selection;
}
