#pragma once
#include "Base.h"
class Student : 
	public Base
{
private:
	unsigned int f_GPA;
	unsigned int f_LikabilityRating;
	char* f_DegreeProgram;
public:
	Student();
	~Student();

	char* GetName();
	void SetName();
	unsigned int GetGPA();
	void SetGPA(unsigned int gpa);
	unsigned int GetLikabilityRating();
	void SetLikabilityRating(unsigned int likabilityRating);
	char* GetDegreeProgram();
	void SetDegreeProgram(char* degreeProgram);
};

