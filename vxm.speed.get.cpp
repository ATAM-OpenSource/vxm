#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"
using namespace std;

// This program will get approximate motor speed.

int main(int argc, char *argv[]) {
	string help = "This program will get approximate motor speed.";
	params(argc, argv, help);
    init();
    int before = atoi(MotorPosition(1));
	int bef_time = GetTickCount();
	Sleep(100);
    int after = atoi(MotorPosition(1));
	int aft_time = GetTickCount();
	cout << "Speed: " <<(((double)(after-before))/7200.0)*(60000.0/((double)(aft_time-bef_time)))<<endl;
	cleanup();
    return 0;
}
