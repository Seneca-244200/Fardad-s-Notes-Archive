#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>

namespace sdds {
   class String {
      char* m_data{};
   public:
      String(const char* cStr = nullptr);
      ~String();
      String(const String& toCopy);
      String& operator=(const String& toCopy);
      int length()const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
      operator int()const;
      operator const char* ()const;
      String& operator++();
      String& operator++(int);
      String& operator+=(const char* cstr);
      char operator[](int index)const;

   };
   std::ostream& operator<< (std::ostream & ostr, const String & S);
   String operator+(const char* left, const String& right);
}
#endif // !SDDS_STRING_H

