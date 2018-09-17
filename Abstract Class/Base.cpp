#include "Base.h"



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

void Base::SetName(char* name)
{
	f_name = name;
}