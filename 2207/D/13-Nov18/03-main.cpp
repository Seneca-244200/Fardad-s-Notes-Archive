
#include <iostream>
using namespace std;
#include "sort.h"

template <typename T>
void CSVdisplayArray(T d[], int size) {
   for (int i = 0; i < size; i++) {
      if (i) cout << ", ";
      cout << d[i];
   }
   cout << endl;
}
int main() {
   int ivals[]{ 3,4,5,23,6,4,43 };
   double vals[]{ 2.2,3.3,1.1,5.5,4.4 };
   sort(vals, 5);
   CSVdisplayArray(vals, 5);
   sort(vals, 5, false);
   CSVdisplayArray(vals, 5);
   sort(ivals, 7);
   CSVdisplayArray(ivals, 7);
   return 0;
}