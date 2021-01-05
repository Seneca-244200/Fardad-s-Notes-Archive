#include <iostream>
#ifndef  SDDS_STRING_H
#define SDDS_STRING_H
namespace sdds {
   class String {
      char* m_data;
   public:
      void init();
      void set(const char* Cstr);
      std::ostream& display()const;
      void deallocate();
   };
}

#endif

/*
ostream cout;
istream cin;


*/