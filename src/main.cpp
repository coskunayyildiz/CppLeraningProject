//============================================================================
// Name        : FirstCppProj.cpp
// Author      : Coskun AYYILDIZ
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "global.h"

using std::cout;
using std::endl;

GlobalClass *Global;

int main()
{
	Global = new GlobalClass();
	Global->EnableDebugMessages();

	delete Global;
	return 0;
}
