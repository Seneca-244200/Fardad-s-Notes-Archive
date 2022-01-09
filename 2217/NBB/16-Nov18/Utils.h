#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
#include <iostream>
namespace sdds {

   class Utils {
   public:

      static int strLen(const char* str);
      static void strCpy(char* des, const char* src);

      static int readIntger();
      static double readDouble();
      static bool read(int& num); // functions can no longer access any regular (non-static) properites or methods of the class;
      static bool read(double& num); // functions can no longer access any regular (non-static) properites or methods of the class;
      static int read(int min, int max, const char* errMes = nullptr);
      static double read(double min, double max, const char* errMes = nullptr);
      // entry letting user to abort.
      //static bool read(int& num, int min, int max, const char* errMes = nullptr);
      //static bool read(double& num, double min, double max, const char* errMes = nullptr);

      static void read(char* str, int minLen, int maxLen, const char* errMes = nullptr);
      static char* read(std::istream& istr, char delimeter = '\n');
   };
}
#endif

