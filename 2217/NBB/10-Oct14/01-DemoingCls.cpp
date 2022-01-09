#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
int main() {
   Cls A;
   Cls B("in main");
   Cls C = A;
   Cls D = B;
   cout << A << endl << B << endl << C << endl << D << endl;
   cout << "=================" << endl;
   B = C;
   cout << A << endl << B << endl << C << endl << D << endl;
   return 0;
}