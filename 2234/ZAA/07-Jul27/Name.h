#pragma once
#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
#include "IOAble.h"
namespace sdds {
   class Name:public IOAble {
      char* m_value{};
   public:
      Name( ) = default;
      Name( const char* value );
      Name( const Name& N );
      Name& operator=( const Name& N );
      virtual std::ostream& write( std::ostream& ostr = std::cout )const;
      virtual std::istream& read( std::istream& istr = std::cin , char delim = '\n' );
      virtual ~Name( );
   };


}
#endif // !SDDS_NAME_H


