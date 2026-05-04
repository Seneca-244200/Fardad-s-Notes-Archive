#include <iostream>
using namespace std;
int main() {
   double dval = 123.456789;
   cout << dval << endl;
   dval = 0.0000000000123444;
   cout << dval << endl;
   dval = 12.3456789;
   // do not alter the format based of value
   cout.setf(ios::fixed); // affects all after
   cout.precision(3); // affects all after
   cout << dval << endl;
   dval = 12.1;
   cout << dval << endl;
   return 0;
}