#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
// << left shift 
int main() {
   String str = "Hello";// call to one arg constructor
   cout << "The data inside str is: " << 
      (const char*)str << endl;
   cout << "And the length is: " << (int)str << endl;
   unsigned int len = str;
   cout << len << endl;
   if(str) {
      cout << "str is not empty" << endl;
   }
   ~str;
   if(str) {
      cout << "str is not empty" << endl;
   }
   else{
      cout << "now str is empty" << endl;
   }
   if(!str) {
      cout << "now str is empty" << endl;
   }
   return 0;
}
