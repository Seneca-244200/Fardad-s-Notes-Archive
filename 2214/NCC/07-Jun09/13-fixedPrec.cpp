
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   double val = 1232.45678909;
   cout << val << endl;
   cout.setf(ios::fixed);
   cout.precision(4);
   cout << val << endl;
   val = 1.2;
   cout.width(10);
   cout << val << endl;
   val = 12323233.14159265;
   cout.unsetf(ios::fixed);
   cout.setf(ios::scientific);
   cout << val << endl;
   return 0;
}