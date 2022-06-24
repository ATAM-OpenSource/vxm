#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
using namespace std;

int main(int argc, char *argv[]) {
	if(argc<2){
		cerr << "Program needs one argument to work!\n";
		return 0;
	}
	string input = string(argv[1]);
	int i;
	try {
		i = stoi(input);
	}
	catch (...){
		cerr << "Please enter an integer!\n";
		return 0;
	}
    init();
	if (i!=0){
		PortSendCommands(&("C,I1M"+input+",R")[0]);
		PortWaitForChar("^", 0);
	}
    PortSendCommands("C,IA1M-0,R");
    PortWaitForChar("^", 0);
	cleanup();
    return 0;
}