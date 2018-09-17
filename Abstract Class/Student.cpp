#include "Student.h"



Student::Student()
{
}


Student::~Student()
{
	delete f_DegreeProgram;
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
void Student::SetDegreeProgram(char* degreeProgram)
{
	f_DegreeProgram = degreeProgram;
}
