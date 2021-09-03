#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C("Milk", 100.0), D("Milk", 100.0), E("Water", 300.00);
   if (C == D) {
      cout << C << " and " << D << " are the same!" << endl;
   }
   return 0;
}