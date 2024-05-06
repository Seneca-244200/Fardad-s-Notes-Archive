#include <iostream>
#include <fstream>
#include "Str.h"
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   char space[] = " ";
   Str name = "Homer";
   Str surname = "Simpson";
   Str fullname;

 //  ok to be a member
 //   fullname = name + space;

   fullname = space + surname;

   cout << fullname;

   return 0;
}
