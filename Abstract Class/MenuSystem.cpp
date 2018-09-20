#include "MenuSystem.h"




MenuSystem::MenuSystem()
{
}


MenuSystem::~MenuSystem()
{
	for (unsigned int i = 0; i < _records.size(); ++i)
	{
		delete _records[i];
	}
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
			system("cls");
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
			name = dc.CaptureName(GetSelection());
			department = dc.CaptureDeptDegree(GetSelection());
			salary = dc.EmployeeSalary();

			_records.push_back(new Employee(name, department, salary));
			break;
		case 2:
			system("cls");
			name = dc.CaptureName(GetSelection());
			degreeProgram = dc.CaptureDeptDegree(GetSelection());
			gpa = dc.StudentGPA();
			likeability = dc.StudentLikabilityRating();

			_records.push_back(new Student(name, degreeProgram, gpa, likeability));
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
	int manageSelect = 0;
	while (manageSelect != 9)
	{
		system("cls");
		cout << "Manage Record" << endl;
		cout << "-------------------------" << endl;
		cout << "1) Print All Records" << endl;
		cout << "2) Copy Records" << endl;
		cout << "-------------------------" << endl;
		cout << "9) Return to Main Menu" << endl;
		manageSelect = valid.IntValidation("Selection: ");

		switch (manageSelect)
		{
		case 1:
			system("cls");
			DisplayRecords();
			break;
		case 2:
			system("cls");
			CopyRecords();
			break;
		case 9:
			system("cls");
			break;
		default:
			break;
		}
	}

}

int MenuSystem::GetSelection()
{
	return addRec_selection;
}

void MenuSystem::DisplayRecords()
{
	for (unsigned int i = 0; i < _records.size(); ++i)
	{
		_records[i]->Display();
	}
	system("pause");
}

void MenuSystem::CopyRecords()
{
	bool copySuccess = false;
	while (!copySuccess)
	{
		cout << "Records List by Index" << endl;
		for (unsigned int i = 0; i < _records.size(); ++i)
		{
			cout << "Index: " << i << " ";
			_records[i]->Display();
		}
		cout << endl;
		int copyFrom = valid.IntValidation("Copy From Index: ");
		int copyTo = valid.IntValidation("Copy To Index: ");
		cout << endl;

		Employee* eTo = dynamic_cast<Employee*>(_records[copyTo]);
		Employee* eFrom = dynamic_cast<Employee*>(_records[copyFrom]);

		Student* sTo = dynamic_cast<Student*>(_records[copyTo]);
		Student* sFrom = dynamic_cast<Student*>(_records[copyFrom]);

		if (eTo && eFrom)
		{
			*eTo = *eFrom;
			copySuccess = true;
		}
		else if (sTo && sFrom)
		{
			sTo = sFrom;
			copySuccess = true;
		}
		else
		{
			cout << "Copy Failed - Records where not of the same type." << endl;
			cout << endl;
			copySuccess = false;
		}

	}

	cout << endl;
	cout << "New Record List" << endl;
	cout << "------------------------------------------------------" << endl;
	for (unsigned int i = 0; i < _records.size(); ++i)
	{
		_records[i]->Display();
	}

	system("pause");
}
