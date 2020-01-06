#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C = 25;
   Container B(25, 200);
   C.display() << endl;
   B.display() << endl;
   return 0;
}