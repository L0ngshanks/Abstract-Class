#pragma once
#include "Base.h"
class Student : 
	public Base
{
private:
	float f_GPA;
	unsigned int f_LikabilityRating;
	char* f_DegreeProgram;
public:
	Student();
	Student(char* _name, char* degree, unsigned int gpa, unsigned int likeability);
	~Student();

	Student(Student& _other);
	Student& operator=(Student& _other);

	char* GetName();
	void SetName(char* _name);
	float GetGPA();
	void SetGPA(float gpa);
	unsigned int GetLikabilityRating();
	void SetLikabilityRating(unsigned int likabilityRating);
	char* GetDegreeProgram();
	void SetDegreeProgram(char* degreeProgram);
};

