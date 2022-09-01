#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

int main() {
   int a[] = { 1,4,3,7,8,4,7,8,34,5,6 };
   int lessthan5 = 0;
   for (int i = 0; i < 11;i++) {
      // lazy evaluation
      (a[i] < 5) && (lessthan5 += 1);
   }
   cout << lessthan5 << " are less than 5" << endl;
   return 0;
}