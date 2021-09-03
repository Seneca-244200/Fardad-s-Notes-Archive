#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

int& foo(int& val) {
   return val;
}

int& max(int& x, int& y) {
   return x > y ? x : y;
}

int main() {
   int a = 10;
   int b = 40;
   cout << foo(a) << endl;
   foo(a) = 123456;
   cout << a << endl;
   cout << "a: " << a << " b:" << b << endl;
   max(a, b) = 0;
   cout << "a: " << a << " b:" << b << endl;
   return 0;
}