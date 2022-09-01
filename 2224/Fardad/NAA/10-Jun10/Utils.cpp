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

   void Utils::strcpy(char* des, const char* src, int len) {
      int i;
      for (i = 0; src[i] && (len < 0 || i < len ); i++) {
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
   char* Utils::readDyncStr(std::istream& istr, char delim){
      char* temp = new char[2048];
      char* toRet{}; // = nullptr;
      istr.getline(temp, 2048, delim);
      if (istr) {
         toRet = new char[strlen(temp) + 1];
         strcpy(toRet, temp);
      }
      delete[] temp;
      return toRet;
   }
   char* Utils::aloCopy(const char* src) {
      char* dyncpy{};
      if (src && src[0]) {
         dyncpy = new char[U.strlen(src) + 1];
         if (dyncpy) {
            U.strcpy(dyncpy, src);
         }
      }
      return dyncpy;
   }
}
