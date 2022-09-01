
#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

int main() {
   int* cnt;
   int i;
   int* a;
   cout << "Please enter the number of integers: ";
   cnt = new int;  // one dynamic integer... madness, just for example
   cin >> *cnt;
   a = new int[*cnt];
   for (i = 0; i < *cnt; i++) {
      cout << (i + 1) << ": ";
      cin >> a[i];
   }
   for (i = *cnt - 1; i >= 0; i--) {
      if (i != *cnt - 1) cout << ',';
      cout << a[i];
   }
   cout << endl;
   delete[] a;
   delete cnt;
   return 0;
}


