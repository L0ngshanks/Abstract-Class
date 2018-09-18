#include "DataCollection.h"

DataCollection::DataCollection()
{
}


DataCollection::~DataCollection()
{
}

char* DataCollection::CaptureName(int _selection)
{
	MenuSystem m;

	char buffer[32];
	char* name = nullptr;
	if (_selection == 1)
	{
		cout << "Employee Name: ";
	}
	else if (_selection == 2)
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

char* DataCollection::CaptureDeptDegree(int _selection)
{
	MenuSystem m;

	char buffer[32];
	char* deptDegree = nullptr;
	if (_selection == 1)
	{
		cout << "Employee Department: ";
	}
	else if (_selection == 2)
	{
		cout << "Student Degree Program: ";
	}
	cin.getline(buffer, 32, '\n');
	cin.clear();

	int length = strlen(buffer) + 1;
	deptDegree = new char[length];
	strcpy_s(deptDegree, length, buffer);

	return deptDegree;
}

float DataCollection::EmployeeSalary()
{
	Validation valid;

	float salary = valid.FloatValidation("Employee's Salary: ");
	return salary;
}

float DataCollection::StudentGPA()
{
	Validation valid;

	float gpa = valid.FloatValidation("Student's GPA: ");
	return gpa;
}

unsigned int DataCollection::StudentLikabilityRating()
{
	Validation valid;

	int likabilityRating = valid.UIntValidation("Likeability Rating: ");
	return likabilityRating;

}
