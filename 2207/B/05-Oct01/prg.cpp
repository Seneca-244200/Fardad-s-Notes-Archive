#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String name;
   name.init();
   name.display() << endl;
   name.set("Joe");
   name.display() << endl;
   name.set("Fardad");
   name.display() << endl;
   name.deallocate();
   return 0;
}