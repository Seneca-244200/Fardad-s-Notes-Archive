#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String str;
   str.init();
   str.set("This is a test");
   str.display() << endl;
   str.set("Another test, but longer");
   str.display() << endl;
   str.deallocate();
   return 0;
}