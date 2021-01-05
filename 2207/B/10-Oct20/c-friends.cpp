#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   double fullness = 0.0;
   Container C("Bottle", 150, 300);
   fullness << C;

   cout << C << " is " << fullness << " full!" << endl;
   return 0;
}