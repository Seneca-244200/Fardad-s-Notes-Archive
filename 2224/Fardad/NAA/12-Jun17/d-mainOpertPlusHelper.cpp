#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String lastName = "Soleimanloo";
   String fullname;
   fullname = "Fardad " + lastName;
   cout << fullname <<  endl;
   return 0;
}




