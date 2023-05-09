#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   char cstr[80];
   String name = "Fardad", empty;
   strcpy(cstr, name);  // String will be casted to (const char*)
   //strcpy(cstr, (const char*)name);
   cout << cstr << endl;
   // if((bool)empty){
   if (empty) {  // String will be casted to a boolean
      strcpy(cstr, empty);
   }
   else {
      cout << "The String object is empty!" << endl;
   }

   cout << cstr << endl;
   return 0;
}