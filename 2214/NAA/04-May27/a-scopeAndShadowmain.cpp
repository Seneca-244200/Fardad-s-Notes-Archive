#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;
int limit = 10;  // file scope but lifetime of the program but visible in prg.cpp module only

void printLine(int num) { // num has function scope
   int i;   // << function scope
   for (i = 0; i < num; i++) cout << "*";
   cout << endl;
   cout << limit << endl;
   cout << myGlobalVar << endl;
   // i and num will die here
}

int main() {
   int num;  // function scope
   int cnt = 100; // function scope
   cout << "Enter a number: ";
   cin >> num;
   myGlobalVar = 55;
   if (num < limit) {
      int cnt;   // << block scope
      for ( cnt = 0; cnt < num; cnt++) cout << "*";
      cout << endl;
      // cnt will die here
   }
   else {
      cout << num << " is too big!" << endl;
      cout << cnt << endl; // file scope one
   }
   cout << cnt << endl; // file scope one

   return 0;
   // num dies at the end of the function
}