#include <iostream>
#include "IntArray.h"
// please walk through this with attention.
using namespace sdds;
using namespace std;
void prnIntArray(IntArray X) {
   for (int i = 0; i < X.size(); i++) {
      cout << "A[" << i << "]: " << X[i] << endl;
   }
}
IntArray getIntArray() {
   int num;
   IntArray Arr;
   cout << "How many integers? ";
   cin >> num;
   for (int i = 0; i < num; i++) {
      cout << (i+1) <<": ";
      cin >> Arr[i];
   }
   return Arr;
}
int main() {
   IntArray A; 
   IntArray B;
   int i, value = 5;
   A = getIntArray();
   prnIntArray(A);
   for (i = 0; i < A.size(); i++) {
      cout << "A[" << i << "]: " << A[i] << endl;
   }
   B = A;
   for (i = 0; i < B.size(); i++) {
      cout << "B[" << i << "]: " << B[i] << endl;
   }
   return 0;
}