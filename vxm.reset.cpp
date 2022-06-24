#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
using namespace std;

void init(){
	LoadDriver("VxmDriver.dll");
	PortOpen(3, 9600);
	PortClear();
    PortSendCommands("F,C,R");
}

void cleanup(){
	PortClose();
	ReleaseDriver();
}

int main() {
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
