

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
   E.display(cout << "E: ") << endl;

   D = C += E; // C.operator+=(E)
   //cout << sum << endl;
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;

   E = D + C;  // D.operator+(C);
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;
   return 0;
}