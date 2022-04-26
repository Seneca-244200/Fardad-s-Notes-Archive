#include <iostream>
#include "DMAint.h"
using namespace std;
namespace sdds {
   int allocSize = 10;
   int* getDynInts(int& size, int initialMem) {
      int dataSize = initialMem;
      int* dataPtr = nullptr;
      dataPtr = new int[dataSize];  // now I may use dataPtr as an integer array
      bool done = false;
      int i;
      cout << "Enter values:" << endl;
      for (i = 0; !done; i++) {
         if (i == dataSize) { // resizing must happen!
            int* temp = new int[dataSize + allocSize];
            for (int j = 0; j < dataSize; j++) { // copying the old array into the new one
               temp[j] = dataPtr[j];
            }
            // copying is done
            delete[] dataPtr;  // the old data is gone
            dataSize += allocSize;
            dataPtr = temp;
         }
         cout << i + 1 << "> ";
         cin >> dataPtr[i];
         if (dataPtr[i] < 0) {
            done = true;
            size = i;
         }
      }
      // shrink the memory to git rid of extra memory allocated
      int* temp = new int[size];
      for (int j = 0; j < size; j++) { // copying the old array into the new one
         temp[j] = dataPtr[j];
      }
      // copying is done
      delete[] dataPtr;  // the old data is gone
      dataPtr = temp;
      return dataPtr;
   }
}

