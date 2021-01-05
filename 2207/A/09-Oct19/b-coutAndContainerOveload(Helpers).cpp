#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container D("D", 120, 150);
   double fullness = 0;
   fullness += D;
   cout << "Container, " << D << 
      " is " << fullness << " full" << endl;
   return 0;
}