#pragma once
#ifndef SDDS_FULLNAME_H
#define SDDS_FULLNAME_H
#include <iostream>
#include "Name.h"
namespace sdds {
   class Fullname:public Name{
      char* m_lastname{};
   public:
      Fullname(const char* first = "No Name", const char* last="No Lastname" );
      Fullname( const Fullname& Fn );
      Fullname& operator=( const Fullname& FN );
      virtual ~Fullname( );
      std::ostream& write( std::ostream& ostr = std::cout )const;
   };

}
#endif
