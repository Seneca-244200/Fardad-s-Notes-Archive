
#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String lastname = "Soleimanloo";
   String fullname;

   fullname = "Fardad " + lastname;


   cout << fullname << endl;
   return 0;
}