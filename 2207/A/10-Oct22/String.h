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
      // to prevent copying and assignment: 
      /*String(const String& S)=delete;
      String& operator=(const String& S)=delete;*/
      String(const String& S);
      String& operator=(const String& S); 
      String& operator=(const char* Cstr);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const String& str);
   std::istream& operator>>(std::istream& istr, String& S);
}
#endif

/*
ostream cout;
istream cin;

*/