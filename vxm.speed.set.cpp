#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"

// This program will change the speed rate of the motor. The working example is a follows:
// .\vxm.speed.set.exe <value>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc<2){
		cerr << "Program needs one argument to work!\n";
		return 0;
	}
	string input = string(argv[1]);
	int speed;
	try {
		speed = stoi(input);
	}
	catch (...){
		cerr << "Please enter an integer!\n";
		return 0;
	}
    init();
	string step = to_string((int)(speed*7200/60));
	PortSendCommands(&("C,S1M"+step+",R")[0]);
	PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
