#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void prnArray(IntArray I) { // IntArray I = A // call to a single arg constructor
   int i;
   for (i = 0; i < I.size(); i++) {
      cout << "index: " << i
         << " value: " << I[i] << endl;
   }
}

IntArray getArray() {
   IntArray X;
   int num;
   cout << "Number of ints: ";
   cin >> num;
   for (int i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> X[i];
   }
   return X;
}
void getArray(IntArray& X) {
   int num;
   cout << "Number of ints: ";
   cin >> num;
   X.resize(num);
   for (int i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> X[i];
   }
}
int main() {
   IntArray A(5);
//   A = getArray();
   getArray(A);
   prnArray(A);
   return 0;
}