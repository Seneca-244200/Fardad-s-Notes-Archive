#include <iostream>
#include <fstream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
int main() {
   ofstream file("array.csv");
   IntArray A(5);
   int val = 5;
   for (int i = 0; i < 7; i++, val += 5) {
      A[i] = val;
   }
   cout << A << endl;
   file << A << endl;
   return 0;
}


