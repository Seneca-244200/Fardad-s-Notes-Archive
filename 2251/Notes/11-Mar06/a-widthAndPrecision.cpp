#include <iostream>
using namespace std;

int main( ) {
   int val = 123;
   double dbl = 123.456789123;
   cout << "*" << val << "*" << endl;
   cout << "*";
   cout.width(10);
   cout << val << "*" << endl;
   cout << "*" << val << "*" << endl;
   cout << "*";
   cout.fill('.');
   cout.width(10);
   cout << val << "*" << endl;
   cout << "*";
   cout.width(10);
   cout << dbl << "*" << endl;
   cout.setf(ios::fixed);
   cout.precision(5);
   cout << dbl << endl;
   cout.precision(2);
   cout << dbl << endl;
   return 0;
}