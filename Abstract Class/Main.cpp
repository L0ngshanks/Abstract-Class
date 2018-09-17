#include "Main.h"
#include "Base.h"
#include "Employee.h"
#include "Base.h"
#include "stdafx.h"

#include <vector>

using namespace std;

Main::Main()
{
	vector<Base*> records;
}

Base& Main::operator=(const Base& _other)
{
	if(this != &_other)

	return this;
}
int main(int argc, char** argv)
{

}

Main::~Main()
{
	delete records;
	records = NULL;
}
