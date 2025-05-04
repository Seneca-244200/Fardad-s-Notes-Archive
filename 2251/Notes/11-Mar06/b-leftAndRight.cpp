#include <iostream>
using namespace std;

int main() {
   int val = 123;
   double dbl = 123.456789123;
   cout.setf(ios::fixed);
   cout.precision(2);
   cout << "[";
   cout.width(20);
   cout.setf(ios::left);
   cout << dbl << "]" << endl;
   cout.unsetf(ios::left);

   cout << "[";
   cout.width(20);
   cout.setf(ios::right);
   cout << dbl << "]" << endl;
   cout.unsetf(ios::right);

   cout << "[";
   cout.width(20);
   cout.setf(ios::left);
   cout << dbl << "]" << endl;
   cout.unsetf(ios::left);

   return 0;
}