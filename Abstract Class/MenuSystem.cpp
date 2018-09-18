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
	DataCollection dc;

	char* name = nullptr;

	char* department = nullptr;
	float salary = 0;

	char* degreeProgram = nullptr;
	float gpa = 0;
	unsigned int likeability = 0;

	while (addRec_selection != 9)
	{
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
			system("cls");
			name = dc.CaptureName(addRec_selection);
			department = dc.CaptureDeptDegree(addRec_selection);
			salary = dc.EmployeeSalary();
			_records.push_back(new Employee(name, department, salary));
			break;
		case 2:
			system("cls");
			name = dc.CaptureName(addRec_selection);
			degreeProgram = dc.CaptureDeptDegree(addRec_selection);
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
	//for (int i = 0; i < _records.size(); ++i)
	//{
	//	if (Employee* e = dynamic_cast<Employee*>(_records))
	//}
}
