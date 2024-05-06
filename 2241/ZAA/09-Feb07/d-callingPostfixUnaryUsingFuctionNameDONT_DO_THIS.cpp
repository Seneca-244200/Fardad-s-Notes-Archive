#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";
   Str lastName = "Soley";
   Str fullname;
   int dummy{};

   name.operator++(dummy);// please don't do this!!!!!!!!!!!!!!!!
   name++;

   fullname = name; // done this!!!
   fullname += lastName;
   fullname.print() << endl;
   return 0;
}