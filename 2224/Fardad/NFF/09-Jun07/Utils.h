#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#define DEBUG
#include <iostream>
// using namespace is not allowed in a header;
namespace sdds {
   class Utils {
      bool validIntDigit(char ch);
   public:
      int strlen(const char* str);
      void strcpy(char* des, const char* src, int len = -1);
      int getInt(const char* prompt="");
      double getDouble(const char* prompt="");
 //     int getInt(std::ostream& os, const char* prompt = "");
      char* readDynCstr(std::istream& istr = std::cin, char delimeter = '\n');
      char* aloCpy(const char* src);
   };
   extern Utils U;
}
#endif // !SDDS_UTILS_H

