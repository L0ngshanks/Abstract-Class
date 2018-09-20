#pragma once
#include "MenuSystem.h"
#include "DataManipulation.h"

#include "InterfaceMenuToData.h"

class InterfaceMenuToData
{
	MenuSystem m;

public:
	InterfaceMenuToData();
	~InterfaceMenuToData();

	int GetMenuField();
	void CallEmployeeData();
	void CallStudentData();

	void DataDisplay();
	void DataDataCopy();
};

