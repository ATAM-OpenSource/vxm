#include <iostream>
#include "param.h"

using namespace std;

int main(int argc, char *argv[]) {
{ 
	string help = "This program shows the safe ranges of speed.";
	params(argc, argv, help);
	cout << "Upper Speed Limit: 33.33\nLower Speed Limit: 4.00\nPlease note that those are recommended values\n";
	return 0;
}
