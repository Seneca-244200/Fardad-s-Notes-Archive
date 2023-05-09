#include <iostream>
using namespace std;
int main() {
   char str[21] = "Freddie";
   char ch = 'A';
   int iv = 1234;
   double dv = 123.123456789;

   clog.setstate(ios::failbit);
   cout.setstate(ios::failbit);
   if (cout.fail()) {
      cerr << "Can't pring, cout is sleep!" << endl;
   }
   clog << "Printing double: " << endl;
   cout << dv << endl;
   cout.clear();
   clog << "Printing double with 6 digits after decimal point: " << endl;
   cout.precision(6);
   cout << dv << endl;
   return 0;
}
