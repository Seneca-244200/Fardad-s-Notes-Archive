#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";
   Str lastName = "Soley";
   Str fullname;

   //int a, b = 3;

   //a = b++; // a will be 3 and b will be 4


   fullname = name++;
   fullname += lastName;
   fullname.print() << endl;
   return 0;
}