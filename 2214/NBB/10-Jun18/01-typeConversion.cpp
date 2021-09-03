#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C;

   if (C){
      cout << "C is valid" << endl;
   }
   else {
      cout << "C is invalid!" << endl;
   }
   C.set("Milk", 250.5);
   if (C) {
      cout << "C is valid" << endl;
   }
   else {
      cout << "C is invalid!" << endl;
   }

   cout << "C object contains " << (double)C << " miligrams of " << (const char*)C << endl;
   // C object contains 250.5 miligrams of Milk;
   cout << "Enter an int: ";
   int a;
   cin >> a;
   if (cin) {
      cout << a << endl;
   }
   else {
      cout << "Bad int" << endl;
   }

   double volume;
   
   volume = C;  // operator double()const will be called.

   return 0;
}












