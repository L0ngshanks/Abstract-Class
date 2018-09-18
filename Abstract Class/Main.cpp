#include "Main.h"
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Validation.h"

#include "stdafx.h"


using namespace std;

Main::Main()
{
};

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
		case 9:
			break;
		default:
			break;
		};
	};
};

char* Main::CaptureName()
{
	char buffer[32];
	char* name = nullptr;
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

	int length = strlen(buffer) + 1;
	name = new char[length];

	strcpy_s(name, length, buffer);

	return name;
}

char* Main::CaptureDeptDegree()
{
	char buffer[32];
	char* deptDegree = nullptr;
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

	int length = strlen(buffer) + 1;
	deptDegree = new char[length];
	strcpy_s(deptDegree, length, buffer);

	return deptDegree;
}

float Main::EmployeeSalary()
{
	Validation valid;
	
	float salary = valid.FloatValidation("Employee's Salary: ");
	return salary;
}

float Main::StudentGPA()
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
	float salary = 0;

	char* degreeProgram = nullptr;
	float gpa = 0;
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
	for (int i = 0; i < _records.size(); ++i)
	{
		if(Employee* e = dynamic_cast<Employee*>(_records))
	}
}

Main::~Main()
{
	//delete records;
	//records = NULL;
}
