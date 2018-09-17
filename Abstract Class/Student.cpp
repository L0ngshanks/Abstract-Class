#include "Student.h"

#include <string>



Student::Student()
{
}


Student::~Student()
{
	delete f_DegreeProgram;
}

Student::Student(Student& _other)
{
	if (this != &_other)
	{
		Base::SetName(_other.GetName());
		SetDegreeProgram(_other.GetDegreeProgram());
	}
}

Student& Student::operator=(Student& _other)
{
	if (this != &_other)
	{
		Base::SetName(_other.GetName());
		SetDegreeProgram(_other.GetDegreeProgram());
	}

	return *this;
}

char* Student::GetName()
{
	return Base::GetName();
}
void Student::SetName(char* _name)
{
	Base::SetName(_name);
}

unsigned int Student::GetGPA()
{
	return f_GPA;
}
void Student::SetGPA(unsigned int gpa)
{
	f_GPA = gpa;
}
unsigned int Student::GetLikabilityRating()
{
	return f_LikabilityRating;
}
void Student::SetLikabilityRating(unsigned int likabilityRating)
{
	f_LikabilityRating = likabilityRating;
}
char* Student::GetDegreeProgram()
{
	return f_DegreeProgram;
}
void Student::SetDegreeProgram(char* _degreeProgram)
{
	delete[] f_DegreeProgram;

	int length = strlen(_degreeProgram) + 1;
	f_DegreeProgram = new char[length];

	strcpy_s(f_name, length, _degreeProgram);
}


