#ifndef SDDS_FULLNAME_H__
#define SDDS_FULLNAME_H__

#include <iostream>
#include "Name.h"
namespace sdds {

   class FullName : public Name{
      char* m_lastname{};
   public:
      Name first()const;
      Name last() const;
      FullName(const char* first = nullptr, const char* last = nullptr);
      FullName(const FullName& fn);
      FullName& operator=(const FullName& fn);
       ~FullName();
       std::ostream& display(std::ostream& ostr = std::cout)const;
       std::istream& read(std::istream& istr = std::cin);
   };
}
#endif