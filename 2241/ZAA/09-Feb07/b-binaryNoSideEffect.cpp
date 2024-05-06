#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";
   Str lastName;
   Str fullname;
  
//   lastName.operator=("Soley"); // which operator is similar to what operator= does?  "="  both have side effect
   lastName = "Soley";

 //  name.operator+=(" ");  // which operator is similar to what operator+= does?   "+="
   name += " ";
   fullname.operator=(name);
   fullname = name;
  // fullname.operator+=(lastName);
   fullname += lastName;
   fullname.print() << endl;

   return 0;
}