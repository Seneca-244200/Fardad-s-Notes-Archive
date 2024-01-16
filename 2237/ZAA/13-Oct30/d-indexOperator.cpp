#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
int main( ) {
   String name = "Fred";  // one arg const (const char*)
   String surname = "Soley";
   String fullname = name + " " + surname;

   cout << fullname << " starts with " << fullname[0] << " and ends with " << fullname[fullname.length( ) - 1] << endl;

   return 0;
}