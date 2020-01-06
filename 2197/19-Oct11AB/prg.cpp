#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String A;
   A.display() << endl;
   String B = "Heehaw!";
   //String B("Heehaw!");
   //int i(0);
   String C = B;
   B = "Something new...";
   A = B;
   cout << A << " is the same as " << B << endl;
   cout << "Enter string: ";
   A.max_cin_length = 40;
   cin >> A;
   return 0;
}
