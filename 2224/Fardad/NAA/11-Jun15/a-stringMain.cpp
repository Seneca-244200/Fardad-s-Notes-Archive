#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   // assignment at the moment of creation is 
   // initialization that is one argument constructor
   String S = "Hello!";
   String str;

   cout << "the data inside S is: "
      << S << endl;
   cout << "The number of chars in S is: "
      << (int)S << endl;

   if(S) {
      unsigned int len = S;
      cout << S << " is not empty and is " << len << " characters long!" << endl;
   } else {
      cout << "S is empty!" << endl;
   }
   if(str) {
      cout << str << " is not empty!" << endl;
   } else {
      cout << "str is empty!" << endl;
   }

   return 0;
}