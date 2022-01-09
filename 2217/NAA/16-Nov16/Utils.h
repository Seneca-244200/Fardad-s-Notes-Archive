#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
#include <iostream>
namespace sdds {

   class Utils {
   public:
      static int strLen(const char* str);
      static void strCpy(char* des, const char* src);

      static void read(double& num, double min, double max,
                                const char* errMes = nullptr);
      static void read(double& num);
      static void read(int& num, int min, int max,
                                const char* errMes = nullptr);
      static void read(int& num);
      static void read(char* str,int minLen,  int maxLen,
                                const char* errMes = nullptr);
      static char* read(std::istream& istr, char delimeter);
   };
}
#endif

