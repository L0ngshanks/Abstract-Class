#pragma once
#include "Validation.h"
#include "MenuSystem.h"

#include "stdafx.h"

class DataCollection
{

public:
	DataCollection();
	~DataCollection();

	char* CaptureName(int _selection);
	char* CaptureDeptDegree(int _selection);
	float EmployeeSalary();
	float StudentGPA();
	unsigned int StudentLikabilityRating();

};

