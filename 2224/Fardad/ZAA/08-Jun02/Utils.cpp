#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {

   Utils U; // files scople

   int Utils::strlen(const char* str)
   {
      int len = 0;
      while (str[len]) {  // "ab"
         len++;
      }
      return len;
   }

   void Utils::strcpy(char* des, const char* src){
      int i;
      for (i = 0; src[i]; i++) {
         des[i] = src[i];
      }
      //des[i] = '\0'; // 'A' == the integer 65
      des[i] = 0; // null terminates the char string des
                  // turning it into a cString

   }

   int Utils::getInt(const char* prompt){
      int value;
      bool done = false;
      if (prompt && prompt[0]) {
         cout << prompt;
      }
      while (!done) {
         cin >> value;
         if (cin.fail()) {
            cin.clear();
            cout << "Invalid integer, try again: ";
            cin.ignore(10000, '\n');
         }
         else {
            if (cin.get() != '\n') {
               cout << "Enter an integer only please, try agian: ";
               cin.ignore(10000, '\n');
            }
            else {
               done = true;
            }
         }
      }
      return value;
   }
   char* Utils::readDynCStr(std::istream& istr)
   {
      char temp[1024];
      char* toRet;
      istr.getline(temp, 1000);
      toRet = new char[strlen(temp) + 1];
      strcpy(toRet, temp);
      return toRet;;
   }
   /*
   to predict what is about to come through istream there is a fucntion called istream::peek()
   */

}