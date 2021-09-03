#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

int main() {
   int a = 234;
   int& R = a;
   cout << R << " " << a << endl;
   R = 100;
   cout << R << " " << a << endl;
   a = 200;
   cout << R << " " << a << endl;
   int* aptr;
   int* Rptr;
   aptr = &a;
   Rptr = &R;
   cout << unsigned(aptr) << " " << unsigned(Rptr) << endl;
   return 0;
}