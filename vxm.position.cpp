#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"

// This program will return current motor position. This program does not take arguments.

using namespace std;

int main() {
    init();
    cout << MotorPosition(1) << endl;
	cleanup();
    return 0;
}
