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
      String();
      String(const char* Cstr);
      ~String();
      void set(const char* Cstr);
      std::ostream& display()const;
   };
}
#endif // ! SDDS_STRING_H
