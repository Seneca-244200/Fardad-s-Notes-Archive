#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   Utils U;// file scope instance calle U of Utils in Utils.cpp
   size_t Utils::strlen(const char* str)const {
      size_t len;
      for (len = 0; str[len]; len++);
      return len;
   }
   char* Utils::strcpy(char* des, const char* src)const {
      size_t i;
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


   int Utils::getInt(){
      int value{};
      bool done{};
      do {
         done = false;
         cin >> value;
         if (cin) {  // if(!cin.fail()){
            if (cin.get() != '\n') { // if the next char after int is not newline
               cout << "Only an integer please, retry: ";
            }
            else {
               done = true;
            }
         }
         else {
            cin.clear(); // clear the fail state
            cout << "Invalid Integer, try again: ";
         }
         //if (!done) cin.ignore(10000, '\n');
         (!done) && cin.ignore(10000, '\n'); // same but quicker
      } while (!done);
      return value;
   }

   int Utils::getInt(int min, int max, const char* prompt) {
      int value{};
      if (prompt) cout << prompt;
      do {
         value = getInt();
      } while ((value < min || value > max) && 
         cout << "[" << min << "<=Val<=" << max << "], retry: ");
      return value;
   }
}
