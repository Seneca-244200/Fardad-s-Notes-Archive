#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C = 500;
   //Container C(500);
   for (int i(0); i < 5; i++) {
      C.display() << " ";
   }
   cout << endl;
   return 0;
}