#pragma once
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Validation.h"

#include "stdafx.h"

class DataManipulation
{
	vector<Base*> _records;
	MenuSystem m;

	char* name = nullptr;

	char* department = nullptr;
	float salary = 0;

	char* degreeProgram = nullptr;
	float gpa = 0;
	unsigned int likeability = 0;

public:
	DataManipulation();
	~DataManipulation();

	char* CaptureName(int _selection);
	char* CaptureDeptDegree(int _selection);
	float EmployeeSalary();
	float StudentGPA();
	unsigned int StudentLikabilityRating();

	void EmployeeCollection();
	void StudentCollection();

	void Display();
};

