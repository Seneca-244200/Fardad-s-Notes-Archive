#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String str;
   str.init();
   str.set("This is a test");
   str.display();
   cout << endl;
   str.set("Another test, but longer");
   str.display();
   cout << endl;




   str.deallocate();
   return 0;
}