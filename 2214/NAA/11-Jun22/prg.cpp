#include <iostream>
#include <fstream>
#include "IntArray.h"
// please walk through this with attention.
using namespace sdds;
using namespace std;
IntArray getIntArray() {
   int num;
   IntArray Arr;
   cout << "How many integers? ";
   cin >> num;
   for (int i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> Arr[i];
   }
   return Arr;
}
int main() {
   IntArray A;
   ofstream fileout("numbers.csv");
   A = getIntArray();
   cout << A << endl;
   fileout << A << endl;
   return 0;
}