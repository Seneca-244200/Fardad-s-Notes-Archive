#include <iostream>
#include "DMAint.h"
using namespace std;
using namespace sdds;
int main() {
   int* values;
   int size;
   allocSize = 2;
   cout << "Enter some integers and end them with -1..." << endl;
   values = getDynInts(size, 10);
   for (int i = 0; i < size; i++) {
      cout << (i + 1) << ": " << values[i] << endl;
   }
   delete[] values;
   return 0;
}

