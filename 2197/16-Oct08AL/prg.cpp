#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A, B, C;
   bool done = false;
   A = 123;
   B = 234;
   cout << "The Value of A is: " << A << endl;
   B.display();
   cout << B << endl;
   cout << "Please enter the container values: value/capacity: ";
   do {
   cin >> C;
      done = true;
      if (cin.fail()) {
         cout << "Bad entry, redo: ";
         cin.clear();
         cin.ignore(1000, '\n');
         done = false;
      }
   } while (!done);
/*
   cout << "The Value of A is: ";

   cout << A << endl;

   cout << endl;

*/
   return 0;
}