#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fardad";// call to one arg constructor
   String lastname = "Soleimanloo";
   String Fullname;
   Fullname = name + " " + lastname;
   cout << Fullname << endl;
   return 0;
}
