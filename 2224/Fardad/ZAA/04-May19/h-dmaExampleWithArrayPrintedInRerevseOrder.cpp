#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;


int main() {
   int cnt;
   int i;
   int* a;
   cout << "How many integers: ";
   cin >> cnt;
   a = new int[cnt];
   for (i = 0; i < cnt; i++) {
      cout << (i + 1) << ": ";
      cin >> a[i];
   }
   for (i = cnt - 1; i >= 0; i--) {
      cout << a[i] << " ";
   }
   cout << endl;

   delete[] a;
   return 0;
}