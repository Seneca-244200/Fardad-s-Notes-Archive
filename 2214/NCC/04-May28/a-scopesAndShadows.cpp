#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;


int main() {
   int cnt = 300;
   int num;  // function scope
   cout << "Enter a number: ";
   scopeFlag = false;
   cin >> num;
   if (num < 10) {
      int cnt; // << block scope but also shadows the function scope cnt;
      for (cnt = 0; cnt < num; cnt++) {
         cout << "*";
      }
      cout << endl;
   }  // << cnt is going to die;
   cout << "Value of PI is: " << PI << endl;
   cout << "Main counter is " << cnt << endl;
   return 0;
} // num dies here