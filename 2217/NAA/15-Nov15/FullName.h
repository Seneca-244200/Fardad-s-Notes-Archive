#ifndef SDDS_FULLNAME_H__
#define SDDS_FULLNAME_H__

#include <iostream>
#include "Name.h"
namespace sdds {

   class FullName 
        : public Name {
      char* m_lastName{};
   public:
      FullName(const char* first, const char* last);
      // rule of three
      FullName(const FullName& fn);
      FullName& operator=(const FullName& fn);
      virtual ~FullName();
      virtual void display(std::ostream& ostr = std::cout)const;
   };
}
#endif