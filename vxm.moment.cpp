#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{ 
    
  double tlim=56.4,mlim=11.3,t,l,m;
  
  cout << "\t Welcome to VXM Moment Calculation ";
  cout << "\nPlease enter an lenght value: ";
  cin >> l;
  cout << "Please enter an weight value:";
  cin >> m;
  t=(l*0.01)*(m*9.98);
  if (t < tlim){
        cout << "You are in safe range. \n";
        system("pause");
    }
  else 
  {
       cout << "You are not in safe range. Do not operate within this range.\n";
        system("pause"); 
    }
   return 0;
}

