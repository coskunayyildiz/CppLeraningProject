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
	cout << "Bu satiri yok etsene" << endl;
}

