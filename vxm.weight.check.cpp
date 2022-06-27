#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
//This program check the weight limit  for rotary table. The working example is a follows:
// .\vxm.weight.check.exe <V or H Weight>
int main(int argc, char *argv[])
{ 
	string help = "This program check the weight limit  for rotary table. The working example is a follows:\n\
 .\vxm.weight.check.exe <V()Vertical or H(Horizonal) Weight(Kg)>";
	params(argc, argv, help);
    string p= argv[1];
	double w= atof(argv[2]);
  	double vlimit =11.34,hlimit =90.71;
if( argc == 3 ) { 
   if (p=="V"){
        if (w < vlimit){
        cout << "You are in safe range. \n";
       
    }
  else 
  {
       cout << "You are not in safe range. Do not operate within this range.\n";
         
    } 
        
    }
    else if (p=="H"){
       if (w < hlimit){
        cout << "You are in safe range. \n";
        
    }
  else 
  {
       cout << "You are not in safe range. Do not operate within this range.\n";
         
    }  
        
    }
  else 
  {
       cout << "Please chose load type. V=Vertical Load H=Horizonal Load.\n";
       cout << "V=Vertical Load.\n";
       cout << "H=Horizonal Load.\n";
         
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
