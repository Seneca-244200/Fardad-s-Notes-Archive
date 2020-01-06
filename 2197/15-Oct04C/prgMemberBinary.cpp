#include <iostream>
#include "String.h"
#include "ContainerMemberBinary.h"
using namespace std;
using namespace sdds;
int main() {
   Container A(20, 200);
   Container B(10, 100);
   Container C;
   C = A + B;
   // C = A.operator+(B);
   C.display() << endl;
   return 0;
}

