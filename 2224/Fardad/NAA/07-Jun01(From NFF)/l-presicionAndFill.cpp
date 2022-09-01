#include <iostream>
using namespace std;
int main() {
   char abc[81] = "abc";
   double dbl = 123.4567;
   int i = 123;
   cout.fill('.');
   cout << "*";
   cout.width(10);
   cout.setf(ios::left);
   cout.unsetf(ios::left);
   cout << abc;
   cout << "*";
   cout.fill('0');
   cout.width(20);
   cout.setf(ios::right);
   cout.unsetf(ios::right);
   cout.setf(ios::fixed);
   cout.precision(2);
   cout << dbl;
   cout << "*";
   cout.fill(' ');
   cout.width(30);
   cout.setf(ios::left);
   cout.unsetf(ios::right);
   cout << i;
   cout << "*" << endl;
   return 0;
}