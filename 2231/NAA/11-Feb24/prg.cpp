#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Homer";
   String surname = "Simpson";
   String fullname;
   fullname = " J. " + surname;  // must be a helper
   fullname = name + fullname;
   cout << "fullname: " << fullname << endl;

   return 0;
}

