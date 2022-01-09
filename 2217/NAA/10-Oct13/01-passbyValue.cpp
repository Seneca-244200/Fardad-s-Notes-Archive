#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
void foo(Cls A); // objects are copying when passed by value;
int main() {
   Cls C = "one";
   foo(C);
   cout << C << endl;
   return 0;
}

void foo(Cls A) {
   cout << "In foo: " << A << endl;
}