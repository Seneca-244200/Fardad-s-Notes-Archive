#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   Utils U; // file scope object of Utils

   int Utils::strlen(const char* str){
      int len = 0;
      while (str[len]) {  // while str[len] is not null (str[len] != 0)
         len++;
      }
      return len;
   }

   void Utils::strcpy(char* des, const char* src){
      int i;
      for (i = 0; src[i]; i++) {
         des[i] = src[i];
      }
      des[i] = 0; // turning the char array des, to a cString by null terminating it.
   }

   int Utils::getInt(const char* prompt){
      int value{};   // {} for int means =0
      if(prompt && prompt[0]){// if prompt exists and is not empty
         cout << prompt;
      }
      cin >> value;
      cin.ignore(1000, '\n');
      return value;
   }

   double Utils::getDouble(const char* prompt){
      double value{};   // {} for int means =0.0;
      if (prompt && prompt[0]) {// if prompt exists and is not empty
         cout << prompt;
      }
      cin >> value;
      cin.ignore(1000, '\n');
      return value;
   }
}
