#ifndef COMMONS_H
#define COMMONS_H

#include <iostream>
#include <Windows.h>

using namespace std;

void init(){
	LoadDriver("VxmDriver.dll");
	unsigned int port = GetPrivateProfileInt("Settings", "Port", 0, ".\\settings.ini");
	if (port==0){
		for(int i=1; i<=99; i++){
			if(PortOpen(i, 9600)){
				port = i;
				break;
			}
		}
		if(port==0){
			cout << "Device not found. Please ensure that BPS is 9600." << endl;
			exit(0);
		}
		cout << "Connected to port COM" << port << endl;
		WritePrivateProfileString("Settings", "Port", &to_string(port)[0], ".\\settings.ini");
	}
	else{
		PortOpen(port, 9600);
	}
	PortClear();
    PortSendCommands("F,C,R");
}

void cleanup(){
	PortClose();
	ReleaseDriver();
}

#endif