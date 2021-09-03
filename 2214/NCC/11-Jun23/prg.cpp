#include <iostream>
#include <fstream>
#include "IntArray.h"
using namespace std;
using namespace sdds;


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
   ofstream afile("array.csv");
   IntArray A(5);
   //   A = getArray();
   getArray(A);
   cout << A << endl;
   afile << A << endl;
   return 0;
}