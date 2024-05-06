#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";
   Str lastName = "Soley";
   Str fullname;

   fullname = name; // done this!!!
   lastName.operator++(); // potato
   ++lastName; // overloading prefice ++ to add a space before (potaato);
   fullname += lastName;
   fullname.print() << endl;
   return 0;
}