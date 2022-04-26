#include <iostream>
#include "Integer.h"
using namespace std;
namespace sdds {
   int expansionSize = 10;
   int allocationSize = 10;
   int* getDynInts(int& size) {
      int num;
      size = 0;
      bool done = false;
      int* val = new int[allocationSize];
      cout << "Enter the number of integer values and enter -1 to end entry" << endl;
      cout << "Enter the values:" << endl;
      do {
         cout << size + 1 << "> ";
         cin >> num;
         if (num < 0) {
            done = true;
         }
         else {
            if (size >= allocationSize) {  // I got to the end or the array, resizing is needed
               // temp in a local block scoped temprary variable
               int* temp = new int[allocationSize + expansionSize];
               for (int j = 0; j < allocationSize; j++) {
                  temp[j] = val[j];
               }
               delete[] val;
               allocationSize += expansionSize;
               val = temp;
            }
            val[size++] = num;
         }
      } while (!done);

      int* temp = new int[size];  // adjust the size to the exact number of ints;
      for (int j = 0; j < size; j++) {
         temp[j] = val[j];
      }
      delete[] val;
      return temp;
   }

}