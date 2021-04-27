#include <iostream>
using namespace std;
int main() {
   cout.fill('^');
   cout << "Abc" <<"*"<< endl;
   cout.setf(ios::right);
   cout.width(10);
   cout << "Abcefghijklmnop" << "*" << endl;
   cout.unsetf(ios::right);
   cout.setf(ios::right);
   cout.width(10);
   cout << "Abc" << "*" << endl;
   cout.unsetf(ios::right);
   cout.setf(ios::left);
   cout.width(10);
   cout << "Abcef" << "*" << endl;
   cout.unsetf(ios::left);
   cout.fill(' ');
   cout.setf(ios::right);
   cout.width(10);
   cout << "Abcdef" << "*" << endl;
   cout.unsetf(ios::right);
   return 0;
}