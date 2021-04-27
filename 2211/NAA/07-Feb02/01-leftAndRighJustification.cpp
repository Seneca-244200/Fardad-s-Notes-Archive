#include <iostream>
using namespace std;
int main() {
   cout << "Abc" <<"*"<< endl;
   cout.setf(ios::right);
   cout.width(10);
   cout << "Abc" << "*" << endl;
   cout.unsetf(ios::right);
   cout.setf(ios::left);
   cout.width(10);
   cout << "Abc" << "*" << endl;
   cout.unsetf(ios::left);
   cout.setf(ios::right);
   cout.width(10);
   cout << 123 << "*" <<  endl;
   cout.unsetf(ios::right);
   return 0;
}