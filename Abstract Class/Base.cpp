#include "Base.h"

#include <string>



Base::Base()
{
}


Base::~Base()
{
	delete f_name;
}

char* Base::GetName()
{
	return f_name;
}

void Base::SetName(char* _name)
{
	delete[] f_name;

	int length = strlen(_name) + 1;
	f_name = new char[length];

	strcpy_s(f_name, length, _name);
}