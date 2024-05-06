#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";  // potato
   Str lastName = "Soley";
   Str fullname;
   fullname.set(name).cat(" ").cat(lastName).print() << endl;;
   return 0;
}