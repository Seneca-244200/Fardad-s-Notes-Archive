#ifndef  SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
// using namespace std;  not allowed
namespace sdds {
   class String {
      char* m_data;
   public:
      void init(); // must run right after creating an object
      void set(const char* Cstr);
      std::ostream& display()const;
   };
}
#endif