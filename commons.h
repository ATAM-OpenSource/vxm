#ifndef COMMONS_H
#define COMMONS_H

#include <iostream>

using namespace std;

void init(){
	LoadDriver("VxmDriver.dll");
	int port = 0;
	for(int i=1; i<=4; i++){
		if(PortOpen(i, 9600)){
			port = i;
			break;
		}
	}
	if(port==0){
		cout << "Device not found. Please ensure that BPS is 9600." << endl;
		exit(0);
	}
	
	PortClear();
    PortSendCommands("F,C,R");
}

void cleanup(){
	PortClose();
	ReleaseDriver();
}

#endif