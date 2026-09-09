
#include <iostream>
using namespace std;
int main() {
   cout << "OOP244NAA - Jun03" << endl;
   double dval = 123.456789;
   cout << dval << endl;
   dval = 0.00000000000000123444;
   cout << dval << endl;
   cout.setf(ios::fixed);
   dval = 3.141592265;
   cout.precision(15);
   cout << dval << endl;
   dval = 0.00000000000000123444;
   cout << dval << endl;
   dval = 0;
   cout << dval << endl;

   return 0;
}