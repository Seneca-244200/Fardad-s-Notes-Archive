#include <iostream>
#include "Scope.h"
using namespace std;

int foo(int val) {
   return val;
}

int& faa(int& val) {
   return val;
}

int& max(int& x, int& y) {
   return x > y ? x : y;
}

int main() {
   int a = 10;
   int b = 20;
   int c = 30;
   int d = 40;
   a = foo(b);
   cout << a << endl;

 

   c = faa(b);
   cout << c << endl;


   /*foo(a) = 1234;
    20 = 1234;*/
   faa(b) = 123456;
   cout << b << endl;

   cout << "c: " << c << " d: " << d << endl;
   max(c, d) = 0;
   cout << "c: " << c << " d: " << d << endl;
   return 0;

}