#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"

// This program will change the acceleration rate of the motor. The working example is a follows:
// .\vxm.acceleration.set.exe <value>
// Note that value must be within 1 and 127.

using namespace std;

int main(int argc, char *argv[]) {
	if(argc<2){
		cerr << "Program needs one argument to work!\n";
		return 0;
	}
	string help = "This program will change the acceleration rate of the motor. The working example is a follows:\n\
.\\vxm.acceleration.set.exe <value>\n\
Note that value must be within 1 and 127.";
	params(argc, argv, help);
	string input = string(argv[1]);
	try {
		int acc = stoi(input);
		if(1>acc || 127<acc){
			throw;
		}
	}
	catch (...){
		cerr << "Please enter a valid integer!\n";
		return 0;
	}
    init();
	PortSendCommands(&("C,A1M"+input+",R")[0]);
	PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
