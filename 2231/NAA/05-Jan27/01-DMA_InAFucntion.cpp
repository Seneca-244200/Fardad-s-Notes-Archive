#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
int* allocateInts(int& num) {
   cout << "How many ints?\n> ";
   cin >> num;
   int* intsPtr = new int[num];
   cin.ignore(100000, '\n');
   return intsPtr;
}

int main() {
   int size;
   int* values;
   int i;
   // calling overload on line 6
   values = allocateInts(size);  // memory will be in values and number of ints in size.
   if (values == nullptr) {
      cout << "Allocation failed!..." << endl;
   }
   cout << "Enter ints: " << endl;
   for (i = 0; i < size; i++) {
      cout << (i + 1) << "> ";
      cin >> values[i];
   }
   for (i = size - 1; i >= 0; i--) {
      cout << values[i] << " ";
   }
   cout << endl;
   delete[] values;
   return 0;
}