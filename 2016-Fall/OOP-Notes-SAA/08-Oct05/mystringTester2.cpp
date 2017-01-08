#include "mystring.h"
#include <iostream>
using namespace std;
using namespace ict;
int main(){
   MyString
      S1,
      S2 = "OOP244",
      A = "aaa",
      B = "bbb",
      C = "aaa";
   cout << "|" << S1.getCstring() << "|" <<S1.length()<< endl
      << "|" << S2.getCstring() << "|" <<S2.length()<< endl;
   if (B.operator>(A)) {
      cout << A.getCstring() << " comes first in dictionary" << endl;
   }
   if (A.operator==(C)) {
      cout << A.getCstring() << " is the same as " << C.getCstring() << endl;
   }
   S1 = S2.operator+=(A);
   cout << S1.getCstring() << " and " << S2.getCstring() 
      << " are the same and the result of " << endl
      << "concatinating OOP244 and aaa" << endl;

   return 0;
}