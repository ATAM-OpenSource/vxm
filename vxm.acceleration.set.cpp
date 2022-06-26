#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"

// This program will change the acceleration rate of the motor. The working example is a follows:
// .\vxm.acceleration.set.exe <value>
// Note that value must be within 1 and 127.

using namespace std;

int main(int argc, char *argv[]) {
	if(argc<2){
		cerr << "Program needs one argument to work!\n";
		return 0;
	}
	string input = string(argv[1]);
	int acc;
	try {
		acc = stoi(input);
		if(1>acc || 127<acc){
			throw;
		}
	}
	catch (...){
		cerr << "Please enter a valid integer!\n";
		return 0;
	}
    init();
	string step = to_string((int)(acc*20));
	PortSendCommands(&("C,A1M"+step+",R")[0]);
	PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
