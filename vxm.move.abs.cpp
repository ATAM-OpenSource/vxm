#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"

// This program will move the motor to designated location. The working example is a follows:
// .\vxm.move.abs.exe <value>
// Note that value must be within 0 and 360.

using namespace std;

int main(int argc, char *argv[]) {
	if(argc<2){
		cerr << "Program needs one argument to work!\n";
		return 0;
	}
	string help = "This program will move the motor to designated location. The working example is a follows:\n\
.\\vxm.move.abs.exe <value>\n\
Note that value must be within 0 and 360.";
	params(argc, argv, help);
	string input = string(argv[1]);
	int step;
	try {
		step = (int)(stod(input)/360.0*7200.0);

	}
	catch (...){
		cerr << "Please enter an integer!\n";
		return 0;
	}
    init();
    PortSendCommands(&("C,IA1M"+to_string(step)+",R")[0]);
    //PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
