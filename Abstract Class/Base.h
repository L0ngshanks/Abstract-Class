#pragma once

#include <string>
#include <iostream>

using namespace std;

class Base
{
protected:
	char* f_name;

public:
	Base();
	Base(Base& _other);
	virtual Base& operator=(Base& _other);
	virtual ~Base();

	virtual char* GetName() = 0;
	virtual void SetName(char* name) = 0;

	virtual void Display() = 0;
};

