#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   String S("ABC");
   Container A(20, 200);
   Container B;
   S += "DEF";
   A = 123;
   A += 10;
 // A.operator+=(int)
   A.display() << endl;
   B = A;
   ++B;
   B.display() << endl;
   B++;
   B.display() << endl;
   B += 2000;
   if (!B) {
      cout << "Too manything to put in B!" << endl;
   }
   else {
      B.display();
   }
   return 0;
}

