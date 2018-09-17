#include "Main.h"
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "stdafx.h"

#include <vector>

using namespace std;
struct Record
{
	unsigned int salary;
	unsigned int gpa;
	unsigned int likabilityRating;
	char* name;
	char* department;
	char* degreeProgram;
};

Main::Main()
{
	vector<Record*> records;
}

Main::~Main()
{
	delete records;
	records = NULL;
}

int main(int argc, char** argv)
{
}