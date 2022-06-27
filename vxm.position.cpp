#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
#include "param.h"

// This program will return current motor position. This program does not take arguments.

using namespace std;

int main(int argc, char *argv[]) {
	string help = "This program will return current motor position. This program does not take arguments.";
	params(argc, argv, help);
    init();
    cout << MotorPosition(1) << endl;
	cleanup();
    return 0;
}
