#pragma once

#include "DataManipulation.h"
#include "Base.h"
#include "Validation.h"

#include "stdafx.h"

class MenuSystem
{
	vector<Base*> _records;
	DataManipulation dc;
	Validation valid;


	char* name = nullptr;

	char* department = nullptr;
	float salary = 0;

	char* degreeProgram = nullptr;
	float gpa = 0;
	unsigned int likeability = 0;

	int addRec_selection = 0;

public:

	MenuSystem();
	~MenuSystem();

	void MainMenu();
	void AddRecord();
	void ManageRecords();

	int GetSelection();
	void DisplayRecords();
	void CopyRecords();
};

