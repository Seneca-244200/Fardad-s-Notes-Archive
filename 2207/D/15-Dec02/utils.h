#ifndef SDDS_UTILS_H_
#define SDDS_UTILS_H_
#include <iostream>
namespace sdds {
   template <typename type>
   void getnum(type& value, std::istream& istr = std::cin){
      bool badEntry;
      char nextChar;
      do {
         badEntry = false;
         istr >> value;
         if (istr.fail()) {
            std::cout << "Bad number, try again: ";
            istr.clear();
            istr.ignore(3000, '\n');
            badEntry = true;
         }
         else {
            nextChar = istr.get();
            if (nextChar != '\n') {
               std::cout << "Only enter valid number, try again: ";
               istr.ignore(3000, '\n');
               badEntry = true;
            }
         }
      } while (badEntry);
   }
   template <typename type>
   void getnum(type& val, type min, type max, const char* prompt, std::istream& istr = std::cin) {
      std::cout << prompt;
      getnum(val, istr);
      while (val < min || val > max) {
         std::cout << "Invalid value enterd, retry[" << min << " <= value <= " << max << "]: ";
         getnum(val, istr);
      }
   }
   int strlen(const char* str);
   char* strcpy(char* des, const char* src);
}



#endif // !SDDS_UTILS_H_

