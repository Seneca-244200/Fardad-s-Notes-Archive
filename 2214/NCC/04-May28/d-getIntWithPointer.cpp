#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

bool getInt(int* iptr, int min, int max) {
   cout << "Enter an int: ";
   cin >> *iptr;
   return *iptr >= min && *iptr <= max;
}

int main() {
   int val;
   if (getInt(&val, 10, 20)) {
      cout << "Value is: " << val << endl;
   }
   else {
      cout << "Invalid value" << endl;
   }

   return 0;
} 