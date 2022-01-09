

#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   int a{ 10 };
   int b{ 20 };
   int c;
   //c = a += b;  // b will be added to a and a is retrued
   c = a + b;     // sum of a and b is calculated and sum is returned 
   Container C(100, 300);
   Container D;
   Container E(50);

   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;

   D = C++;  // C.operator++(int);

   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;

   c = a++;

   cout << a << endl;
   cout << c << endl;
   
   return 0;
}