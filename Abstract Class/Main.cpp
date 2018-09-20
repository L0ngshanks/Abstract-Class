#include "Main.h"


using namespace std;

Main::Main()
{
};

int main(int argc, char** argv)
{
	//Also need this for memory leak code stuff
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); //Important!

	MenuSystem start;
	start.MainMenu();
};

Main::~Main()
{
}
