#include "Main.h"


using namespace std;

Main::Main()
{
}

vector<Base*> _records;

int main(int argc, char** argv)
{
	Validation valid;
	Main m;

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
			m.AddRecord();
			break;
		case 2:
			break;
		default:
			break;
		}
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
	cin.getline(buffer, 32, '\n');

	cin.clear();

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
	cin.getline(buffer,32,'\n');

	cin.clear();

	return buffer;
}

unsigned int Main::EmployeeSalary()
{
	Validation valid;
	
	float salary = valid.FloatValidation("Employee's Salary: ");
	return salary;
}

unsigned int Main::StudentGPA()
{
	Validation valid;

	float gpa = valid.FloatValidation("Student's GPA: ");
	return gpa;
}

unsigned int Main::StudentLikabilityRating()
{
	Validation valid;

	int likabilityRating = valid.UIntValidation("Likeability Rating: ");
	return likabilityRating;

}

void Main::AddRecord()
{
	Validation valid;
	
	char* name = nullptr;

	char* department = nullptr;
	unsigned int salary = 0;

	char* degreeProgram = nullptr;
	unsigned int gpa = 0;
	unsigned int likeability = 0;

	addRec_selection = 0;
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
			name = this->CaptureName();
			department = this->CaptureDeptDegree();
			salary = this->EmployeeSalary();
			_records.push_back(new Employee(name, department, salary));
			break;
		case 2:
			name = this->CaptureName();
			degreeProgram = this->CaptureDeptDegree();
			gpa = this->StudentGPA();
			likeability = this->StudentLikabilityRating();
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

void Main::ManageRecords()
{
}

Main::~Main()
{
	//delete records;
	//records = NULL;
}
