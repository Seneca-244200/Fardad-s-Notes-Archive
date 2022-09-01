#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fardad";// call to one arg constructor
   String lastname = "Soleimanloo";
   String Fullname;
   String Homer = "Homer";
   Fullname = name;
   Fullname++; // add a space after
   Fullname += lastname;
   Homer += " Jay ";
   Homer += "Simpson";
   cout << Fullname << endl;
   cout << Homer << endl;
   return 0;
}
