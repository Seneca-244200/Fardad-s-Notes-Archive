#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
bool allocateInts(int*& intsPtr ,  int& num) {
   cout << "How many ints?\n> ";
   cin >> num;
   intsPtr = new int[num];
   cin.ignore(100000, '\n');
   return intsPtr != nullptr;
}

int main() {
   int size;
   int* values;
   int i;
   // calling overload on line 6
     // memory will be in values and number of ints in size.
   if (!allocateInts(values, size)) {
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