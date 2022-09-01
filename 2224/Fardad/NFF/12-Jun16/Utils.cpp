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

   void Utils::strcpy(char* des, const char* src, int len){
      int i;
      for (i = 0; src[i] && (len < 0  || i < len) ;i++) {
         des[i] = src[i];
      }
      des[i] = 0; // turning the char array des in to a cString by null terminating it.
   }
   // this getInt() is not good fix it.
   int Utils::getInt(const char* prompt) {
      int value{};
      bool done{};
      if (prompt && prompt[0]) cout << prompt;
      while (!done) {
         if (!validIntDigit(cin.peek())) {
            cin.ignore(10000, '\n');
            cout << "Start in with a digit, try again: ";
         }
         else {
            cin >> value;
            if (cin.fail()) {  
               cin.clear();  // this part of if will never happen. Fix it.
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

   char* Utils::readDynCstr(std::istream& istr, char delim){
      char* temp = new char[1024];
      char* dynStr2Ret = nullptr;
      istr.getline(temp, 1024, delim);
      if (istr) {
         dynStr2Ret = new char[strlen(temp) + 1];
         strcpy(dynStr2Ret, temp);
      }
      delete[] temp;
      return dynStr2Ret;
   }

   char* Utils::aloCpy(const char* src)
   {
      char* value{};
      if (src) {
         value = new char[U.strlen(src) + 1];
         if(value) U.strcpy(value, src);
      }
      return value;
   }


}