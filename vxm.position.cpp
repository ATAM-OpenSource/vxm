#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
using namespace std;

void init(){
	LoadDriver("C:\\Users\\User\\Desktop\\Work\\VXM\\VxmDriver.dll");
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
    cout << MotorPosition(1) << endl;
	cleanup();
    return 0;
}
