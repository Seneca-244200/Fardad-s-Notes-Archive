#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>

namespace sdds {
   class Name {
      char* m_value;
      void init();
      void deallocate();
   public:

      Name();
      Name(const char* theName);
      Name(const char* theName, int maxLen);
      ~Name();

      Name& addToName(const char* theName);

      Name& setName(const char* theName);

      Name& assign(const Name& N);

      std::ostream& print(std::ostream& ostr = std::cout)const;
   };
}
#endif // !SDDS_NAME_H


