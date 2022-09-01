#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Fardad";
   String lastName = "Soleimanloo";
   String fullname;
   fullname = (name += " ");
   fullname += lastName;
   cout << fullname <<  endl;
   return 0;
}




