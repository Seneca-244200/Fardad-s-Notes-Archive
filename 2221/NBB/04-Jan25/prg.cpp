#include <iostream>
#include "Integer.h"
using namespace std;
using namespace sdds;
int main() {
   int* values = nullptr;
   int size = 0;
   sdds::allocationSize = 2;
   sdds::expansionSize = 2;
   values = getDynInts(size);
   for (int i = 0; i < size; i++) {
      cout << values[i] << " ";
   }
   cout << endl;

   delete[] values;
   return 0;
}
