#pragma once

#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Validation.h"
#include "DataCollection.h"

#include "stdafx.h"

class MenuSystem
{
	vector<Base*> _records;
	Base* base;
	int addRec_selection = 0;

public:

	MenuSystem();
	~MenuSystem();

	void MainMenu();
	void AddRecord();
	void ManageRecords();

};

