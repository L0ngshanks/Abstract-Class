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
	Employee(char* _name, char* _department, unsigned int _salary);
	~Employee();

	Employee(Employee& _other);
	Employee& operator=(Employee& _other);
	
	char* GetName();
	void SetName(char* _name);
	unsigned int GetSalary();
	void SetSalary(unsigned int salary);
	char* GetDepartment();
	void SetDepartment(char* department);
};

