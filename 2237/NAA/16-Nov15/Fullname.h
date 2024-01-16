#pragma once
#ifndef SDDS_FULLNAME_H
#define SDDS_FULLNAME_H
#include "Name.h"
namespace sdds {
   // fullname is abstract too since it will not implement the call method
   class Fullname : public Name {
      char* m_lastname{};
   public:
      Fullname() = default;
      Fullname(const char* firstname, const char* lastname = nullptr);
      Fullname(const Fullname& FN);
      Fullname& operator=(const Fullname& FN);
      virtual ~Fullname();
      virtual std::ostream& write(std::ostream& ostr = std::cout)const;
   };
}

#endif
