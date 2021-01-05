#include <iostream>
//using namespace std; not allows 
#ifndef  SDDS_STRING_H
#define SDDS_STRING_H
namespace sdds {
   class String {
      char* m_data;
   public:
      // should be called only once
      void init();
      void set(const char* Cstr);
      std::ostream& display()const;
      void deallocate();
   };
}
#endif // ! SDDS_STRING_H
