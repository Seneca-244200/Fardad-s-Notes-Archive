#include <iostream>
using namespace std;
int main() {
   double v = 123;
   cout.width(20);
   cout << v << endl;
   cout << "--------------------" << endl;
   v = 123.456789;
   cout.width(20);
   cout << v << endl;
   cout << "--------------------" << endl;
   cout.width(20);
   cout.setf(ios::fixed);
   cout.precision(5);
   cout << v << endl;
   cout << "--------------------" << endl;
   cout.width(20);
   cout.precision(2);
   cout << v << endl;
   cout << "--------------------" << endl;
   cout.width(5);  // value always has priority over width
   cout.precision(5);
   cout << v << endl;
   cout << "--------------------" << endl;
   cout.width(20);
   cout.precision(2);
   cout.setf(ios::left);
   cout << v << endl;
   cout << "--------------------" << endl;
   cout.width(20);
   cout.precision(3);
   cout.setf(ios::right);
   cout << v << endl;
   cout << "--------------------" << endl;
   return 0;
}