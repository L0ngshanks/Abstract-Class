#pragma once
#include "Base.h"
class Employee :
	public Base
{
private:
	float f_Salary;
	char* f_Department;
public:
	Employee();
	Employee(char* _name, char* _department, float _salary);
	~Employee();

	Employee(Employee& _other);
	Employee& operator=(Employee& _other);
	
	char* GetName();
	void SetName(char* _name);
	float GetSalary();
	void SetSalary(float salary);
	char* GetDepartment();
	void SetDepartment(char* department);

	void Display();
};

