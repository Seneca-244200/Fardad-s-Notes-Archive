#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

int main() {
   scopeFlag = false;
   int num; // <<= function scope
   int cnt = 300;
   cout << "Enter a number: ";
   cin >> num;
   if (num < 10) {
      int cnt; // <<- block scope and shadows the cnt in main
      for (cnt = 0; cnt < num; cnt++) {
         cout << "*";
      }
      cout << endl;
   }
   cout << cnt << endl;
   return 0;
}