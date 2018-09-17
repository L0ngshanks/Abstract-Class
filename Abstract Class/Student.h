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

	Student(Student& _other);
	Student& operator=(Student& _other);

	char* GetName();
	void SetName(char* _name);
	unsigned int GetGPA();
	void SetGPA(unsigned int gpa);
	unsigned int GetLikabilityRating();
	void SetLikabilityRating(unsigned int likabilityRating);
	char* GetDegreeProgram();
	void SetDegreeProgram(char* degreeProgram);
};

