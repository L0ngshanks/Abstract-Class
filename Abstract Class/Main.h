#pragma once
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Validation.h"

#include "stdafx.h"

class Main
{
	int addRec_selection = 0;
	vector<Base*> records;

public:
	Main();
	~Main();
	char* CaptureName();
	char* CaptureDeptDegree();
	unsigned int EmployeeSalary();
	unsigned int StudentGPA();
	unsigned int StudentLikabilityRating();
	void AddRecord();
	void ManageRecords();
};

