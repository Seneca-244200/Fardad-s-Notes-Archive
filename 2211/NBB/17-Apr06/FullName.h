#pragma once
#include <iostream>
#include "Name.h"
namespace sdds {
   class FullName: public Name {
      char* m_lastname = nullptr;
   public:
      FullName(const char* firstname,
         const char* lastname);
      FullName(const FullName& fn);
      FullName& operator=(const FullName& fn);
      virtual ~FullName();
      std::ostream& display(std::ostream& ostr = std::cout)const;

   };
}
