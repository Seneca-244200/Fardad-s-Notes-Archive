#include "Utils.h"
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


}