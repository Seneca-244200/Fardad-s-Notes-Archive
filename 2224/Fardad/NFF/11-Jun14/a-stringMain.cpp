#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String str = "Hello";
   
   cout << "The data inside str is: " << (const char*)str << endl;
   cout << "The length of data in str is: " << (int)str << endl;

   unsigned int len = str;
   cout << "the lenght is: " << len << endl;

   if(str) {
      cout << "str is not empty" << endl;
   }
   else {
      cout << "str is empty" << endl;
   }
   ~str;
   if(str) {
      cout << "str is not empty" << endl;
   } else {
      cout << "str is empty" << endl;
   }

   return 0;
}