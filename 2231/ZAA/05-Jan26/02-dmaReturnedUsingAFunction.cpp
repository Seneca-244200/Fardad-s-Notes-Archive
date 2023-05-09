#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;

int* allocateInts(int& num) {
   cout << "How many ints?\n> ";
   cin >> num;
   int* ints = new int[num];
   cin.ignore(100000, '\n');
   return ints;
}

bool allocateInts(int*& dynInts, int& num) {
   cout << "How many ints?\n> ";
   cin >> num;
   dynInts = new int[num];
   cin.ignore(100000, '\n');
   return dynInts != nullptr;
}

int main() {
   int size;
   int* values;
   // calling overload on line 6
   values = allocateInts(size);  // memory will be in values and number of ints in size.
   if(values == nullptr) {
      cout << "Allocation failed!..." << endl;
   }
   // calling overlad on line 14
   if(!allocateInts(values, size)) {
      cout << "Allocation failed!..." << endl;
   }


   return 0;
}
