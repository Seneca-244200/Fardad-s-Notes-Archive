#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
#include "debug.h"
namespace sdds {

   class String {
      char* m_data;
      size_t m_length{}; // this happens first
      char m_junk;
      bool isEmpty()const;
      void setEmpty();
   public:     
      String(const char* cstr = nullptr);
      std::ostream& display
             (std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      String& operator+=(const String& S);
      String& operator+=(const char* cStr);
      operator const char* ()const;
      operator bool() const;
      size_t length()const;
      //Rule of three;
      String(const String& S);

      char& operator[](size_t index);
      const char& operator[](size_t index)const;


      String& operator=(const String& S);
      String operator+(const char* cStr)const;
      String operator+(const String& S)const;
      ~String();
   };

   String operator+(const char* cStr, const String& Ro);

   std::ostream& operator<<(std::ostream& ostr, 
                              const String& Ro );
   std::istream& operator>>(std::istream& istr, 
                            String& Ro);
}
#endif // !SDDS_STRING_H


