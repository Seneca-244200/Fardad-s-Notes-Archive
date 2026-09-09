#include <iostream>
using namespace std;
int main() {
   double dval = 123.456789;
   cout << dval << endl;
   dval = 0.00000000000000123444;
   cout << dval << endl;
   cout.setf(ios::fixed); // affects all outputs
   dval = 3.14159265;
   cout.precision(2);
   cout << dval << endl;
   dval = 0.00000000000000123444;
   cout << dval << endl;
   return 0;
}