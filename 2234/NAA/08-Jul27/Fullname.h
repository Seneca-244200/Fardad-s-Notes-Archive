#pragma once
#ifndef SDDS_FULLNAME_H
#define SDDS_FULLNAME_H
#include <iostream>
#include "Name.h"
namespace sdds {
   class Fullname :
      public Name {
      char* m_lastName{};
   public:
      Fullname( ) = default;
      Fullname(const char* first , const char* last = nullptr);
      Fullname( const Fullname& FN );
      Fullname& operator=( const Fullname& FN );
      virtual std::ostream& write( std::ostream& ostr = std::cout )const;
      virtual ~Fullname( );
      std::ostream& call(std::ostream& ostr = std::cout );
   };
}
#endif
