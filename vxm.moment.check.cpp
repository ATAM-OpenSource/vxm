#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{ 
    double m= atof(argv[1]);
	double l= atof(argv[2]);
  	double tlimit =56.4,t;
  t=(l*0.01)*(m*9.98);
if( argc == 3 ) { 
   if (t < tlimit){
        cout << "You are in safe range. \n";
        system("pause");
    }
  else 
  {
       cout << "You are not in safe range. Do not operate within this range.\n";
        system("pause"); 
    } 
} 
else if( argc > 3 ) { 
  cout << "This program works with two input. These are weight and length respectively. Please enter two input!  \n"; 
} 
else { 
  cout << "This program works with two input. These are weight and length respectively. Please enter two input!  \n"; 
}
   return 0;
}
