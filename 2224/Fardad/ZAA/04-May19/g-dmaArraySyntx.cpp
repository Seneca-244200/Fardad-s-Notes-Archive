#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;


int main() {
   // happens at compile time
   int* a;
   // happens at runtime
   a = new int[5];
   for (int i = 0; i < 5; i ++) {
      a[i] = i;
   }
   delete[] a;
   return 0;
}