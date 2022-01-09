#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
void  faa(Cls A);
Cls  foo();

int main() {
   faa(foo());// copy of a copy will never happen.
   return 0;
}

void faa(Cls A) {
   cout << "in faa: " << A << endl;
}
Cls foo() {
   Cls A;
   cout << "Enter value for Cls: ";
   cin >> A;
   cout << "You Entered: " << A << endl;
   return A;
}