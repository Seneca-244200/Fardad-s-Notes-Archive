#include <iostream>
using namespace std;
int main() {
   cout.fill('^');
   cout << "Abc" <<"*"<< endl;
   cout.setf(ios::fixed);
   cout.setf(ios::right);
   cout.width(20);
   cout << 123.45678 << "*" << endl;
   cout.unsetf(ios::right);
   cout.unsetf(ios::fixed);
   cout.setf(ios::right);
   cout.width(20);
   cout << 123.45678 << "*" << endl;
   cout.unsetf(ios::right);
   return 0;
}