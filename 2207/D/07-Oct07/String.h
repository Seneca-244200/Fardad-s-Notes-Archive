#include <iostream>
//using namespace std; not allows 
#ifndef  SDDS_STRING_H
#define SDDS_STRING_H
namespace sdds {
   class String {
      char* m_data;
      void init();  
      void deallocate();
   public:
      // should be called only once
      String();
      String(const char* value);
      void set(const char* Cstr);
      std::ostream& display()const;
      ~String();
   };
}
#endif // ! SDDS_STRING_H
