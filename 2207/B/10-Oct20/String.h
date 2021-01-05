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
      std::ostream& display(std::ostream& = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr, const String& rightOper);

}
#endif

/*
ostream cout;
istream cin;


*/