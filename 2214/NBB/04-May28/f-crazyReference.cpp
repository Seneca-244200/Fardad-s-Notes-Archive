#include <iostream>
using namespace std;

int& foo(int& val) {
   return val;
}

int& max(int& x, int& y) {
   return x > y ? x : y;
   /*if (x > y) {
      return x;
   }
   else {
      return y;
   }*/
}

int main() {
   int a = 10;
   int b = 40;
   cout << foo(a) << endl;
   foo(a) = 12345;
   cout << a << endl;
   cout << "a: " << a << " b:" << b << endl;
   max(a, b) = 0; // a = 0;
   cout << "a: " << a << " b:" << b << endl;
   max(a, b) = 0; // b = 0;
   cout << "a: " << a << " b:" << b << endl;
   return 0;
}