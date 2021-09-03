#include <iostream>
#include "Scope.h"
using namespace std;

int main() {
   int a = 234;
   int& R = a;
   //int& X; // this will be a compile error, refernces must be initialized to exist
   cout << R << " " << a << endl;
   R = 100; 
   cout << R << " " << a << endl;
   a = 200;
   cout << R << " " << a << endl;
   int* aptr = &a;
   int* Rptr = &R;
   cout << unsigned(aptr) << " " << unsigned(Rptr) << endl;


   return 0;
  
}