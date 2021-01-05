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
      std::ostream& display()const;
   };
}
#endif

/*
ostream cout;
istream cin;


*/