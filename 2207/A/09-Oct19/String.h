#include <iostream>
#ifndef  SDDS_STRING_H
#define SDDS_STRING_H
namespace sdds {
   class String {
      char* m_data;
      void init();  
      void deallocate();
   public:
      String();
      String(const char* Cstr);
      ~String();
      String& set(const char* Cstr);
      std::ostream& display(std::ostream& os = std::cout)const;
      std::istream& read(std::istream& is = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const String& RO);
   std::istream& operator>>(std::istream& istr, String& RO);
}
#endif

