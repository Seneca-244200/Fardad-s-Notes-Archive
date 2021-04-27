#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
namespace sdds {
   class Name {
      char* m_value;
      void init(); // it is private now!!!
   public:
     // Name();
      Name(const char* thename = "Blank Name");
      Name(const char* thename, int maxLen);
      ~Name();
      void setEmpty();
      void setName(const char* value);
      std::ostream& print(std::ostream& ostr = std::cout)const;
      void deallocate();
   };
}
#endif // !SDDS_NAME_H


