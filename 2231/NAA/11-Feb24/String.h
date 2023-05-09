#include <iostream>
#ifndef SDDS_STRING_H_
#define SDDS_STRING_H_
#include "debug.h"
/* As practice create:
logical operators
++ and -- operators 



*/

namespace sdds {
   class String {
      size_t m_length{};
      char* m_data{};
      void setEmpty();
   public:
      String();
      String(const char* cstr);
      String(const String& S);    // copy constructor
      String& operator=(const String& S); // copy assignment
      ~String();  // destructor
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      operator bool()const;  // type conversion overload
      operator const char* ()const;
      size_t length()const;
      char operator[](size_t index)const;
      char& operator[](size_t index);
      String& operator+=(const String& Roperand);
      String& operator+=(const char* cstr);
      String operator+(const char* cstr)const;
      String operator+(const String& Ro)const;
   };
   String operator+(const char* leftOperand, const String& rightOperand);
   std::ostream& operator<<(std::ostream& ostrLeftOperand, const String& Roperand);
   std::istream& operator>>(std::istream& istrLeftOperand, String& Roperand);
}
#endif // !SDDS_STRING_H_



