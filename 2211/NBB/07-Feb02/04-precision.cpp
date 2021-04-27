#include <iostream>
using namespace std;
int main() {
   cout.setf(ios::fixed);
   cout << 10.1234567 << endl;
   cout.precision(2);
   cout << 10.1234567 << endl;
   cout.width(20);
   cout << 10.0 << endl;
   cout.precision(20);
   cout.width(10);
   cout << 10.4567 << endl;
   cout << 10.12 << endl;
   cout.width(10);
   cout << "abc" << endl;
   cout.width(10);
   cout << "abcdefghijklmnopqrstuv" << endl;

   return 0;
}