#include <iostream>
using namespace std;


int main() {
   double dv = 123.123456789;
   clog.setstate(ios::failbit);
   cout.setstate(ios::failbit);
   cout.setf(ios::fixed);
   cout.precision(3);

   if(cout.fail()) {
      cerr << "cout failed!" << endl;
   }

   clog << "Printing double: " << endl;
   cout << dv << endl;
   cout.clear();
   clog << "Printing double with 6 digits after decimal point: " << endl;
   cout.precision(6);
   cout << dv << endl;

   // the setstate works for both cin and cout.


   return 0;
}
