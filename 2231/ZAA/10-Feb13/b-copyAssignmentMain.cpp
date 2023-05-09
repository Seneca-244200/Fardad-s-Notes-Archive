#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fred", last = "Soley";
   String fullname;
   name += " ";
//   fullname = name += last;
   name += last;
   fullname = name;
   cout << fullname << endl;
   return 0;
}