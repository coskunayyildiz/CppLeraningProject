#include <iostream>
#include "global.h"

using std::cout;
using std::endl;

GlobalClass::GlobalClass()
{
	is_debug_messages_enabled = false;
	cout << "A GlobalClass object has been created." << endl;
}

GlobalClass::~GlobalClass()
{
	cout << "A GlobalClass object has been destroyed." << endl;
}

void GlobalClass::EnableDebugMessages()
{
	is_debug_messages_enabled = true;
}

void GlobalClass::DisableDebugMessages()
{
	is_debug_messages_enabled = false;
}

void GlobalClass::deneme()
{
	cout << "This is the Deneme method" << endl;
	cout << "Bu satiri yok et" << endl;
}

void GlobalClass::ShowTestBranchInfo()
{
	cout << "Test branch has been created" << endl;
}

void GlobalClass::GeneralTestRoutines()
{
	cout << "GeneralTestRoutines for all test branches" << endl;
}

void GlobalClass::TestSendsToUnittest()
{
	cout << "TestSendsToUnittest for all test branches" << endl;
}

void GlobalClass::StartTest()
{
	cout << "StartTest for all test branches" << endl;
}

