#pragma once
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
namespace sdds {
   class Utils {  
   public:
      int strlen(const char* cString);
      void strcpy(char* cStrDes, const char* cStrSrc, int len = -1);
      int getInt(const char* prompt = nullptr);
      double getDouble(const char* prompt = nullptr);
      char* readDyncStr(std::istream& istr = std::cin, char delimiter = '\n');
      char* aloCopy(const char* src);
   };
   extern Utils U; // globalize the file scoped U in utils.cpp

}
#endif // !SDDS_UTILS_H


