#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
namespace sdds {
   class Utils {
   private:
   public:
      int strlen(const char* str);
      void strcpy(char* des, const char* src);
      int getInt(const char* prompt = nullptr);
      char* readDynCStr(std::istream& istr = std::cin);
   };
   extern Utils U;
}



#endif // !SDDS_UTILS_H


