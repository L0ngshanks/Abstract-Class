#pragma once

class Main
{
	int addRec_selection = 0;
	vector<Base*> _records;

public:
	Main();
	~Main();
	char* CaptureName();
	char* CaptureDeptDegree();
	float EmployeeSalary();
	float StudentGPA();
	unsigned int StudentLikabilityRating();
	void AddRecord();
	void ManageRecords();
};

