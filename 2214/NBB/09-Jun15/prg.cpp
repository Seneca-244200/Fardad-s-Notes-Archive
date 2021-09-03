#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {

   Container C = "Milk", D;
   D = ++C;
   cout << "C: ";
   C.print() << endl;

   cout << "D: " << D << endl;
   D = C++;  // post ++ like integers is not automatically done,
             // you have to make it possible by programming so
   cout << "C: " << C << endl;
   cout << "D: " << D << endl;

   return 0;
}












/*


   int c = 0, d;
   d = ++c;
   cout << "c: " << c << endl;
   cout << "d: " << d << endl;
   d = c++;
   cout << "c: " << c << endl;
   cout << "d: " << d << endl;



*/