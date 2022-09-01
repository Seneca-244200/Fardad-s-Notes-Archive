#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Fardad";
   String lastname = "Soleimanloo";
   String fullname;

   fullname = name + " " + lastname;

   cout << fullname << endl;
   return 0;
}