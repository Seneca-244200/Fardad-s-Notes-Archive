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
      Fullname(const char* first = "No First Name", const char* last = "No Last name" );
      Fullname( const Fullname& FN );
      Fullname& operator=( const Fullname& FN );
      virtual std::ostream& write( std::ostream& ostr = std::cout )const;
      virtual ~Fullname( );
   };
}
#endif
