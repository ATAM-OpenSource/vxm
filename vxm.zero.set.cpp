#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"

// This program will increase motor position by moving it and set 
// the resulting location as zero. The working example is a follows:
// .\vxm.speed.set.exe <value>

using namespace std;

int main(int argc, char *argv[]) {
	string help = "This program will set the resulting location as zero.";
	params(argc, argv, help);
    init();
    PortSendCommands("C,IA1M-0,R");
    PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
