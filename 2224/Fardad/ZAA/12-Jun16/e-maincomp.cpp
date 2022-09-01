#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String A = "abc";
   String B = "aab";

   if(A > B) {
      cout << A << ">" << B;
   }
   else {
      cout << A << "<=" << B;
   }

   cout << endl;

   if(A < "aaa") {
      cout << A << "<" << "aaa";
   } else {
      cout << A << ">=" << "aaa";
   }

   cout << endl;
   if("bbb" > B) { // if helper not created, "bbb" will be casted to a String using the constructor
      cout << "bbb" << ">" << B;
   } else {
      cout << "bbb" << "<=" << B;
   }

   cout << endl;

   return 0;
}
