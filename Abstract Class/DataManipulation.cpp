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

	int length = strlen(buffer) + 1;
	name = new char[length];

	strcpy_s(name, length, buffer);

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

	int length = strlen(buffer) + 1;
	deptDegree = new char[length];
	strcpy_s(deptDegree, length, buffer);

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

void DataManipulation::EmployeeCollection()
{
	name = CaptureName(m.GetSelection());
	department = CaptureDeptDegree(m.GetSelection);
	salary = EmployeeSalary();

	_records.push_back(new Employee(name, department, salary));
}

void DataManipulation::StudentCollection()
{
	name = CaptureName(m.GetSelection());
	degreeProgram = CaptureDeptDegree(m.GetSelection());
	gpa = StudentGPA();
	likeability = StudentLikabilityRating();

	_records.push_back(new Student(name, degreeProgram, gpa, likeability));
}

void DataManipulation::Display()
{
	for (int i = 0; i < _records.size; ++i)
	{
		_records[i]->Display();
	}
}