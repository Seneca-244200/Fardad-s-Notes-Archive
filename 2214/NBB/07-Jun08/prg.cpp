#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   double val = 123.4567890123;
   cout << val << endl;
   cout.precision(5);
   cout.setf(ios::fixed);
   cout << val << endl;
   cout.unsetf(ios::fixed);
   cout.setf(ios::scientific);
   cout << val << endl;
   return 0;
}