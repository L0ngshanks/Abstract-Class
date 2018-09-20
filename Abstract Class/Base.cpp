#include "Base.h"





Base::Base()
{
}

Base::Base(Base& _other)
{
	if (this != &_other)
		SetName(_other.GetName());
}

Base& Base::operator=(Base& _other)
{
	if(this != &_other)
		SetName(_other.GetName());

	return *this;
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

void Base::Display()
{
	cout << "Name: " << GetName();
}