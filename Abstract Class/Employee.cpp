#include "Employee.h"

#include <string>



Employee::Employee()
{
}

Employee::~Employee()
{
	delete f_Department;
}

Employee::Employee(Employee& _other)
{
	if (this != &_other)
	{
		SetName(_other.GetName());
		SetDepartment(_other.GetDepartment());
	}
}

Employee& Employee::operator=(Employee& _other)
{
	if (this != &_other)
	{
		SetName(_other.GetName());
		SetDepartment(_other.GetDepartment());
	}

	return *this;
}

char* Employee::GetName()
{
	return Base::GetName();
}
void Employee::SetName(char* _name)
{
	Base::SetName(_name);
}

unsigned int Employee::GetSalary()
{
	return f_Salary;
}
void Employee::SetSalary(unsigned int salary)
{
	f_Salary = salary;
}
char* Employee::GetDepartment()
{
	return f_Department;
}
void Employee::SetDepartment(char* _department)
{
	delete[] f_Department;

	int length = strlen(_department) + 1;
	f_Department = new char[length];

	strcpy_s(f_Department, length, _department);
}
