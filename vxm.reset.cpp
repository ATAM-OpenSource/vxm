#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"

// This program will reset the motor position to original zero point by moving the motor
// to appropriate place. This program does not take arguments.

using namespace std;

int main(int argc, char *argv[]) {
	string help = "This program will reset the motor position to original zero point by moving the motor \
to appropriate place. This program does not take arguments.";
	params(argc, argv, help);
    init();
    char *before = MotorPosition(1);
    PortSendCommands("C,I1M0,R");
    PortWaitForChar("^", 0);
    char *after = MotorPosition(1);
    if (strcmp(before, after)==0){
        PortSendCommands("C,I1M600,I1M0,R");
        PortWaitForChar("^", 0);
    }
    PortSendCommands("C,I1M200,IA1M-0,R");
    PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
