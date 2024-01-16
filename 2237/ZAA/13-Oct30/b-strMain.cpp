#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
int main( ) {
   String name = "Fred";  // one arg const (const char*)
   String surname = "Soley";
   String fullname;

   fullname = name + " " + surname;

   cout << fullname << endl;

   return 0;
}