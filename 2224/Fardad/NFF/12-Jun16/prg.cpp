
#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String A = "aaa";
   String B = "aab";

   if(A > B) {
      cout << A << " > " << B << endl;
   }
   else {
      cout << A << " <= " << B << endl;
   }

   if(A > "aa") {
      cout << A << " > aa" << endl;
   }
   else {
      cout << A << " <= aa"  << endl;

   }

   if("aa" > A) {
      cout << "aa > " << A << endl;
   } else {
      cout << "aa <= " << A << endl;

   }

   return 0;
}