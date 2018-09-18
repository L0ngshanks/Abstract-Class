#include "Main.h"


using namespace std;

Main::Main()
{
}


int main(int argc, char** argv)
{
	Validation valid;

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
char* Main::CaptureName()
{
	char buffer[32];
	system("cls");
	if (addRec_selection == 1)
	{
		cout << "Employee Name: ";
	}
	else if (addRec_selection == 2)
	{
		cout << "Student Name: ";
	}
	cin >> buffer;

	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return buffer;
}

char* Main::CaptureDeptDegree()
{
	char buffer[32];
	system("cls");
	if (addRec_selection == 1)
	{
		cout << "Employee Department: ";
	}
	else if (addRec_selection == 2)
	{
		cout << "Student Degree Program: ";
	}
	cin >> buffer;

	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return buffer;
}

unsigned int Main::EmployeeSalary()
{
	Validation valid;
	
	int salary = valid.UIntValidation("Employee's Salary: ");
	return salary;
}

unsigned int Main::StudentGPA()
{
	Validation valid;

	int gpa = valid.UIntValidation("Student's GPA: ");
	return gpa;
}

unsigned int Main::StudentLikabilityRating()
{
	Validation valid;

	int likabilityRating = valid.UIntValidation("Employee's Salary: ");
	return likabilityRating;

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

Main::~Main()
{
	//delete records;
	//records = NULL;
}
