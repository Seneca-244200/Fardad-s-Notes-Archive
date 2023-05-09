#include <iostream>
#include "Utils.h"
using namespace std; 
namespace sdds {
   Utils U;  //file scope
   size_t Utils::strlen(const char* str)const {
      size_t len{};
      for (len = 0; str[len]; len++);
      return len;
   }
   char* Utils::strcpy(char* des, const char* src)const {
      size_t i{};
      for (i = 0; src[i]; i++) des[i] = src[i];
      des[i] = char(0);
      return des;
   }
   char* Utils::strcat(char* des, const char* src)const {
      size_t len = strlen(des);
      size_t i = 0;
      while (src[i]) {
         des[i + len] = src[i];
         i++;
      }
      des[i + len] = char(0);
      return des;
   }

   int Utils::getInt() {
      int value{};
      bool done = false;
      do {
         done = false;
         cin >> value;
         if (!cin) {
            cin.clear();
            cout << "Invalid Integer, retry: ";
         }
         else {
            if (cin.get() != '\n') {
               cout << "Only an integer please, retry: ";
            }
            else {
               done = true;
            }
         }
         if(!done) cin.ignore(10000, '\n');
      } while (!done);
      return value;
   }
   int Utils::getInt(int min, int max,const char* prompt) {
      int value{};
      if (prompt) cout << prompt;
      do {
         value = getInt();
       } while ((value < min || value > max) && 
          cout << "[" << min << "<=" << max << "], retry: ");
      return value;
   }

}
