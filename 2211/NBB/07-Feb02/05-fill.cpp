#include <iostream>
using namespace std;
int main() {
   cout.setf(ios::fixed);
   cout.precision(2);
   cout.width(20);
   cout.fill('x');
   cout << 10.0 << "*" << endl;
   cout.width(20);
   cout.setf(ios::left);
   cout << 10.0 << "*" << endl;
   cout.width(20);
   cout.fill(' ');
   cout << 10.0 << "*" << endl;
   cout << "                      " <<"*"<< endl;
   return 0;
}