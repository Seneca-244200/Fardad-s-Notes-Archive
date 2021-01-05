#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String name;
   String S("This is a test for one orgument constructor");
   S.display() << endl;
   name.display() << endl;
   name.set("Joe");
   name.display() << endl;
   name.set("Fardad");
   name.display() << endl;
   name.set("Fardad Soleimanloo").display() << endl;
   return 0;
}