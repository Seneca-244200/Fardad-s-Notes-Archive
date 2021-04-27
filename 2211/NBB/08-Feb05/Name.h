#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>

namespace sdds {
   class Name {
      char* m_value;
      void init();
      void deallocate();
   public:
     // Name();
      Name(const char* theName = "No Name");
      Name(const char* theName, int maxLen);
      ~Name();
      void setName(const char* theName);
      std::ostream& print(std::ostream& ostr = std::cout)const;
   };
}
#endif // !SDDS_NAME_H


