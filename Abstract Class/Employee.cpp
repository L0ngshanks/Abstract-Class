#include "Employee.h"



Employee::Employee()
{
}


Employee::~Employee()
{
	delete f_Department;
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
void Employee::SetDepartment(char* department)
{
	f_Department = department;
}
