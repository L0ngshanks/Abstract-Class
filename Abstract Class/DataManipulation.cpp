#include "DataManipulation.h"

DataManipulation::DataManipulation()
{

}


DataManipulation::~DataManipulation()
{
}

char* DataManipulation::CaptureName(int _selection)
{
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

	name = new char[32];
	strcpy_s(name, 32, buffer);

	return name;
}

char* DataManipulation::CaptureDeptDegree(int _selection)
{
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

	deptDegree = new char[32];
	strcpy_s(deptDegree, 32, buffer);

	return deptDegree;
}

float DataManipulation::EmployeeSalary()
{
	Validation valid;

	float salary = valid.FloatValidation("Employee's Salary: ");
	return salary;
}

float DataManipulation::StudentGPA()
{
	Validation valid;

	float gpa = valid.FloatValidation("Student's GPA: ");
	return gpa;
}

unsigned int DataManipulation::StudentLikabilityRating()
{
	Validation valid;

	int likabilityRating = valid.UIntValidation("Likeability Rating: ");
	return likabilityRating;
}
