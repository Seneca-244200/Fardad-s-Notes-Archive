#include <iostream>
#include "Utils.h"
#include "Array.h"
using namespace std;
using namespace sdds;


int main() {
   cout << "Hello OOP244ZAA!" << endl;
   Array<double> a(5);
   for (size_t i = 0; i < a.size(); i++) {
      a[i] = (i + 1) * 100.01;
   }
   cout << a << endl;
   return 0;
}