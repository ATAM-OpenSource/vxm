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
    init();
    int before = atoi(MotorPosition(1));
	Sleep(100);
    int after = atoi(MotorPosition(1));
	cout << "Speed: " <<(((double)(after-before))/7200.0)*600.0<<endl;
	cleanup();
    return 0;
}
