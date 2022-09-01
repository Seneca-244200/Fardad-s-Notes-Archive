#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>

namespace sdds {

   class Utils{
       // adding for systematic debuging 
       bool m_debug{};

   public:
       // added to tell me if I am in debugingmode or not
       bool debug() const;
       // a setter for the m_debug
       void debug(bool value);

       // now it needs a constructor because of m_debug
       Utils(bool value = false);

       
     
      int getint(const char* prompt = nullptr, std::istream& istr = std::cin) const;
      int getint(int& num, int max, int min, const char* prompt, std::istream& istr = std::cin);
      std::istream& getint(int& num, const char* prompt = nullptr, std::istream& istr = std::cin) const;

   };

   extern Utils ut;
  
}

#endif // !SDDS_UTILS_H
