#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   Utils U;
   bool Utils::validIntDigit(char ch){
      return ((ch >= '0' && ch <= '9') || ch == '-' || ch == '+');
   }
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
      int value{};
      bool done{};
      if (prompt && prompt[0]) cout << prompt;
      while (!done) {
         if (!validIntDigit(cin.peek())) {
            cin.setstate(ios::failbit); 
         }
         cin >> value;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid Integer, try again: ";
         }
         else {
            if (cin.get() != '\n') {
               cin.ignore(10000, '\n');
               cout << "Only an integer please: ";
            }
            else {
               done = true;
            }
         }
      }
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