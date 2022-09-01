#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>

namespace sdds {

   class Utils{

   public:
   
      int getint(const char* prompt = nullptr, std::istream& istr = std::cin) const;
      int getint(int& num, int max, int min, const char* prompt, std::istream& istr = std::cin);
      std::istream& getint(int& num, const char* prompt = nullptr, std::istream& istr = std::cin) const;
   
   };

   extern Utils ut;
   extern bool debug;
}

#endif // !SDDS_UTILS_H
