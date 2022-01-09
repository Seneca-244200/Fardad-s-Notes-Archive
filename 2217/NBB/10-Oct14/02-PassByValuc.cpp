#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
void foo(Cls A);

int main() {
   Cls B = "Obj in Main"; // assignment at the moment of
                          // creation is a call to
                          // the one argument constructor
   foo(B); // foo(Cls A = B);// A in foo will be initialized using B
   cout << B << endl;
   return 0;
}

void foo(Cls A) {
   cout << "In foo: " << A << endl;
}