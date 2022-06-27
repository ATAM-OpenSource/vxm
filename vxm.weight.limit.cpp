#include <iostream>
#include "param.h"
using namespace std;
int main(int argc, char *argv[])
{
		string help = "This program shows the weight limits for rotary table. The working example is a follows:\n\
.\\vxm.weight.limit.exe";
	params(argc, argv, help);
	cout << "The vertical weight limit is 11.34 kilograms.\n";
	cout << "The horizonal weight limit is 90.71 kilograms.\n";

	return 0;
}

