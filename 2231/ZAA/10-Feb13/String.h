#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   class String {
      char* m_data{};
      size_t m_length{};
      bool isEmpty()const;
      void setEmpty();
   public:     
      String(const char* cstr = nullptr);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      String& operator+=(const String& S);
      operator const char* ()const;
      operator bool() const;
      size_t length()const;
      //Rule of three;
      String(const String& S);
      String& operator=(const String& S);
      ~String();
   };
   std::ostream& operator<<(std::ostream& ostr, const String& Ro );
   std::istream& operator>>(std::istream& istr, String& Ro);
}
#endif // !SDDS_STRING_H


