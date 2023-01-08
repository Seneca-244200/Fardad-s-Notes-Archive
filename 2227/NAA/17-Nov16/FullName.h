#ifndef SDDS_FULLNAME_H__
#define SDDS_FULLNAME_H__

#include <iostream>
#include "Name.h"
#include "Utils.h"
namespace sdds {
   class FullName : public Name {
      char* m_lastname{};
   public:
      FullName(const char* first = nullptr, const char* last = nullptr);
      FullName(const FullName& fn);
      FullName& operator=(const FullName& fn);
      virtual ~FullName();
      virtual std::ostream& display(std::ostream& ostr = std::cout)const;
      virtual std::istream& read(std::istream& istr = std::cin);
   };
}
#endif
