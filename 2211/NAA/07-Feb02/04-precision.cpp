#include <iostream>
using namespace std;
int main() {
   cout.fill('^');
   cout << "Abc" <<"*"<< endl;
   cout.setf(ios::fixed);
   cout.precision(2);
   cout.setf(ios::right);
   cout.width(20);
   cout << 123.45678 << "*" << endl;
   cout.unsetf(ios::right);
   cout.precision(20);
   cout.setf(ios::right);
   cout.width(20);
   cout << 123.45678 << "*" << endl;
   cout.unsetf(ios::right);
   cout.precision(2);
   cout.unsetf(ios::fixed);
   cout.setf(ios::scientific);
   cout.setf(ios::right);
   cout.width(20);
   cout << 123.45678 << "*" << endl;
   cout.unsetf(ios::right);
   return 0;
}