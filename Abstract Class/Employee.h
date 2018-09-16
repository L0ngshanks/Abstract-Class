#pragma once
#include "Base.h"
class Employee :
	public Base
{
private:
	unsigned int f_Salary;
	char* f_Department;
public:
	Employee();
	~Employee();

	unsigned int GetSalary();
	void SetSalary(unsigned int salary);
	char* GetDepartment();
	void SetDepartment(char* department);
};
