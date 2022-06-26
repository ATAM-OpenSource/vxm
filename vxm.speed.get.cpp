#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
using namespace std;

// This program will get approximate motor speed.

int main() {
    init();
    int before = atoi(MotorPosition(1));
	Sleep(100);
    int after = atoi(MotorPosition(1));
	cout << "Speed: " <<(((double)(after-before))/7200.0)*600.0<<endl;
	cleanup();
    return 0;
}
