#include <iostream>
#include "Sort.h"
using namespace sdds;
using namespace std;

template <typename type>
void showArray(type* array, long size) {
   for (int i = 0; i < size; i++) {
      cout << array[i];
      if (i != size - 1) cout << ",";
   }
   cout << endl;
}

int main() {
   double vals[]{ 2.1,5.2,3.3,7.4,8.5,3.6,4.7,5.8 };
   int ivals[]{ 2,5,3,7,8,3,4,5,9,1 };
   sort(vals, 8);
   sort(ivals, 10);
   showArray(vals, 8);
   showArray(ivals, 10);
   return 0;
}