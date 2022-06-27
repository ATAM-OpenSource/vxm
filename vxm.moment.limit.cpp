#include <iostream>
#include "param.h"
using namespace std;
int main(int argc, char *argv[])
{
	string help = "This program shows the moment limits of rotary table.The working example is a follows:\n\
.\\vxm.moment.limit.exe";
	params(argc, argv, help);
	cout << "The moment limit is 56.49 Newton Meters.\n";
	return 0;
}

