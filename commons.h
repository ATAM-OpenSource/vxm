#ifndef COMMONS_H
#define COMMONS_H

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

#endif