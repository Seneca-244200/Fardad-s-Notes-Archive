#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;
void foo(const char* name) {
   Name N(name);
   N.print() << endl;
}

int main() {
   Name MyName("Fardoud Soleiman", 10);
   
   Name ABC = "ABC";

   Name D;

   char thename[71] = "Fardad";
   cout << "Before Foo" << endl;
   foo(thename);
   cout << "Foo is done!" << endl;
   MyName.print() << endl;
   int i(0);
   for (i = 0; i < 5; i++) {
      ABC.print() << endl;
   }

   return 0;
}