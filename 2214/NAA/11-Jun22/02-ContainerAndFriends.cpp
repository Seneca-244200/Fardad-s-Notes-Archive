#include <iostream>
#include "Container.h"
// please walk through this with attention.
using namespace sdds;
using namespace std;
int main() {
   Container A("Water", 200.00), B("Water", 200.00), C("Milk", 500.00);
   if (A == B) {
      cout << A << " is the same as " << B << endl;
   }
   if (C > B) {
      cout << C << " has more contenet than " << B << endl;
   }
   return 0;
}