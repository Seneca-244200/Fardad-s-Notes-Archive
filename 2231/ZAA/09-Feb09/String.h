#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   class String {
      char* m_data{};
      size_t m_length{};
      bool isEmpty()const;
   public:     
      String(const char* cstr = nullptr);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      String& operator+=(const String& S);
      operator const char* ()const;
      operator bool() const;
      size_t length()const;
      ~String();
   };
   std::ostream& operator<<(std::ostream& ostr, const String& Ro );
}
#endif // !SDDS_STRING_H


