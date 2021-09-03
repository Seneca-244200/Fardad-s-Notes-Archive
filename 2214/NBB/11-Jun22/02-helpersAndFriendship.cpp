#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container A("Milk", 100.0), B("Milk", 100.00), C("Water", 500.0);
//   bool res = A == B;
   if (A == B) {
      cout << A << " and " << B << " are the same!" << endl;
   }
   if (C > A) {
      cout << C << " contains more stuff than " << A << endl;
   }


   return 0;
}






