#pragma once
#ifndef SDDS_FULLNAME_H
#define SDDS_FULLNAME_H
#include <iostream>
#include "Name.h"
namespace sdds {
   class Fullname:public Name{
      char* m_lastname{};
   public:
      Fullname( ) = default;
      Fullname( const char* firstname,
         const char* lastname = nullptr );
      Fullname( const Fullname& Fn );
      Fullname& operator=( const Fullname& Fn );
      virtual  ~Fullname( );
      virtual std::ostream& write( std::ostream& ostr = std::cout )const;
      virtual std::istream& read( std::istream& istr = std::cin, char delim = '\n' );
   };
}
#endif
