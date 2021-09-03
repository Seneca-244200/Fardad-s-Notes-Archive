#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

void foo(int a) {
   cout << a << endl;
}


int main() {
   int b = 10;
   foo(b);   //6: foo(int a = b){   // all arguments are alwasy initiazlied to the 
   foo(20);  //6: foo(int a = 20){  // value passed to them.

   return 0;
} 