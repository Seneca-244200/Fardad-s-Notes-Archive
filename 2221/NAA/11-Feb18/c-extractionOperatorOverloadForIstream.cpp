#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark A("Part 1", 30, 80);  // init
   Mark B("Part 2");  // init
   Mark C;
   cout << "Enter mark for " << (const char*)B << ": ";
   cin >> B;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   C = A + B;
   cout << "The Total mark for \"" << A << "\" and \"" << B
      << "\" is \"" << C <<"\""<< endl;
   return 0;
}
