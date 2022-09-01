#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   Utils U;
   int Utils::strlen(const char* str)
   {
      int len = 0;
      while (str[len]) {
         len++;
      }
      return len;
   }

   void Utils::strcpy(char* des, const char* src){
      int i;
      for (i = 0; src[i]; i++) {
         des[i] = src[i];
      }
      des[i] = 0; // turning the char array des in to a cString by null terminating it.
   }

   int Utils::getInt(const char* prompt) {
      int value;
      if (prompt && prompt[0]) cout << prompt;
      cin >> value;
      cin.ignore(10000, '\n');
      return value;
   }

   double Utils::getDouble(const char* prompt) {
      double value;
      if (prompt && prompt[0]) cout << prompt;
      cin >> value;
      cin.ignore(10000, '\n');
      return value;
   }


}