#pragma once
class Base
{
protected:
	char* f_name;

public:
	Base();
	~Base();

	char* GetName();
	void SetName(char* name);
};

