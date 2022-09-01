#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String A = "aaa";
   String B = "aab";
   String empty;



   if(A > B) {
      cout << A << " > " << B << endl;
   }
   if(A <= B) {
      cout << A << " <= " << B << endl;
   }
   if(A < "aab") {
      cout << A << " < " << B << endl;
   }
   if(A >= "aab") {
      cout << A << " >= " << B << endl;
   }
   if(A > "") {
      cout << A << " is greater than empty" << endl;
   }
   if(A < "") {
      cout << A << " is less than empty" << endl;
   }
   if(A > nullptr) {
      cout << A << " is greater than empty" << endl;
   }
   if(empty > nullptr) {
      cout << "emtpy is greater than null" << endl;
   }

   if("aaa" > B) {
      cout << "aaa is greater than " << B << endl;
   }
   return 0;
}




