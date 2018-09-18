#include "Student.h"

#include <string>



Student::Student()
{
}

Student::Student(char* _name, char* _degree, unsigned int _gpa, unsigned int _likeability)
{
	SetName(_name);
	SetDegreeProgram(_degree);
	SetGPA(_gpa);
	SetLikabilityRating(_likeability);
}


Student::~Student()
{
	delete f_DegreeProgram;
}

Student::Student(Student& _other)
{
	if (this != &_other)
	{
		SetName(_other.GetName());
		SetDegreeProgram(_other.GetDegreeProgram());
		f_GPA = _other.GetGPA();
		f_LikabilityRating = _other.GetLikabilityRating();
	}
}

Student& Student::operator=(Student& _other)
{
	if (this != &_other)
	{
		SetName(_other.GetName());
		SetDegreeProgram(_other.GetDegreeProgram());
		f_GPA = _other.GetGPA();
		f_LikabilityRating = _other.GetLikabilityRating();
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


