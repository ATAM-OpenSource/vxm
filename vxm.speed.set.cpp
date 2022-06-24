#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
using namespace std;

void init(){
	LoadDriver("C:\\Users\\User\\Desktop\\Work\\VXM\\VxmDriver.dll");
	PortOpen(3, 9600);
	PortClear();
}

void cleanup(){
	PortClose();
	ReleaseDriver();
}

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
	string step = to_string((int)(speed*20));
	PortSendCommands(&("C,S1M"+step+",R")[0]);
	PortWaitForChar("^", 0);
	cleanup();
    return 0;
}
