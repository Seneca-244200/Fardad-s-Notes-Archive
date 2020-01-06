#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String A;
   String B = "Whatever";
   String C = B;
   B = C;
   A = "Something else";
   A.display() << endl;
   cout << A << endl;

   cout << "A: " << A << endl
      << "B: " << B << endl
      << "C: " << C << endl;
   return 0;
}
