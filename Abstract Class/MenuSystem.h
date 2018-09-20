#pragma once

#include "Validation.h"

#include "stdafx.h"

class MenuSystem
{
	DataManipulation dc;
	int addRec_selection = 0;

public:

	MenuSystem();
	~MenuSystem();

	void MainMenu();
	void AddRecord();
	void ManageRecords();

	int GetSelection();

};

