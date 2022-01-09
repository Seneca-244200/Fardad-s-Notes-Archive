#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double marks[] = { 12,80,45.5, 88, 99 };
   DynMarks EmptyOne;
   DynMarks T1("Test one");
   DynMarks W1("Workshop 1", marks, 5);
   W1.display();
   for (int i = 0; i < 50; i++) {
      W1.add(49.5 + i);
   }
   W1.display();
   T1.add(79).display();
   return 0;
}