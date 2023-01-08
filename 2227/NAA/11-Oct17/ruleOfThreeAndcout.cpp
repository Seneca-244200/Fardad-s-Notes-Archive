#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fred";
   String n = "Homer";
   String copy = name;
   n = name;
   cout << "Hello " << name << endl;
   cout << "Hello " << n << " again" << endl;
   cout << "Hello " << copy << " again" << endl;
   return 0;
}
