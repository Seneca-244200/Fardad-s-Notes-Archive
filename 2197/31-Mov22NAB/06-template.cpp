
#include <iostream>
using namespace std;
#include "sort.h"

void print(const double a[], int n) {
   for (int i = 0; i < n; i++) {
      cout << a[i] << endl;
   }
}

int main() {
   double dvals[5] = { 1.1,3.3,2.4,5.6,4.1 };
   sort(dvals, 5);
   print(dvals, 5);
   return 0;
}