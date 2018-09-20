#include "Employee.h"

#include <string>



Employee::Employee()
{
}

Employee::Employee(char* _name, char* _department, float _salary)
{
	SetName(_name);
	SetDepartment(_department);
	SetSalary(_salary);
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
		f_Salary = _other.GetSalary();
	}
}

Employee& Employee::operator=(Employee& _other)
{
	if (this != &_other)
	{
		SetName(_other.GetName());
		SetDepartment(_other.GetDepartment());
		f_Salary = _other.GetSalary();
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

float Employee::GetSalary()
{
	return f_Salary;
}
void Employee::SetSalary(float salary)
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

void Employee::Display()
{
	cout << "Department: " << GetDepartment() << " Salary: " << GetSalary() << endl;
}