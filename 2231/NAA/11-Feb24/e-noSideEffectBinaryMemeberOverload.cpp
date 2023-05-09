#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Homer";
   String surname = "Simpson";
   String fullname;
   cout << "name: " << name << endl;
   cout << "Last name: " << surname << endl;
   fullname = name + " J. " + surname;
   cout << "Full name: "  << fullname << endl; // I want this to print "Homer J. Simpson"

   return 0;
}

