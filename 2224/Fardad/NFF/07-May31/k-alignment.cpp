#include <iostream>
using namespace std;
int main() {
   char abc[81] = "abc";
   double dbl = 123.4567;
   int i = 123;
   cout << "*";
   cout.width(10);
   cout.setf(ios::left);
   cout.unsetf(ios::left);
   cout << abc;
   cout << "*";
   cout.width(20);
   cout.setf(ios::right);
   cout.unsetf(ios::right);
   cout << dbl;
   cout << "*";
   cout.width(30);
   cout.setf(ios::left);
   cout.unsetf(ios::right);
   cout << i;
   cout << "*" << endl;
   return 0;
}