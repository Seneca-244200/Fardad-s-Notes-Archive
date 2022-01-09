#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
#include <iostream>
namespace sdds {

   class Utils {
   public:
      static void strCpy(char* des, const char* src);
      static int strLen(const char* str);
      /* practice: 
      static void strCat(char* des, const char* src);
      static const char* strstr(const char* cStr, const char* searchFor);
      static int strCmp(const char* left, const char* right); 
      */

      static int readInt();
      static double readDbl();
      static bool read(int& num);
      static bool read(double& num);

      static bool read(int& num, int min, int max, const char* errMes = nullptr);

      static void read(char* str, int minLen, int maxLen, const char* errMes = nullptr);
      static char* read(std::istream& istr, char delimeter = '\n');
   };
}
#endif


