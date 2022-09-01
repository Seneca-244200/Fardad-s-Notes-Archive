#pragma once
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds {
   class Utils {  
   public:
      int strlen(const char* cString);
      void strcpy(char* cStrDes, const char* cStrSrc);
      int getInt(const char* prompt = nullptr);
      double getDouble(const char* prompt = nullptr);
   };
   extern Utils U; // globalize the file scoped U in utils.cpp

}
#endif // !SDDS_UTILS_H


