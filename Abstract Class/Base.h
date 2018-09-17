#pragma once
class Base
{
protected:
	char* f_name;

public:
	Base();
	virtual ~Base();

	virtual char* GetName() = 0;
	virtual void SetName(char* name) = 0;
};

