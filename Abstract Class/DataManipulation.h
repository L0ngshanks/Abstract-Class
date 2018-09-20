#pragma once
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Validation.h"

#include "stdafx.h"

class DataManipulation
{

public:
	DataManipulation();
	~DataManipulation();

	char* CaptureName(int _selection);
	char* CaptureDeptDegree(int _selection);
	float EmployeeSalary();
	float StudentGPA();
	unsigned int StudentLikabilityRating();

	void PrintRecords();
};

