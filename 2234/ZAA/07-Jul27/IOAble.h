#pragma once
#include <iostream>
namespace sdds {
   class IOAble {
   public:
      virtual std::ostream& write( std::ostream& ostr = std::cout )const = 0;
      virtual std::istream& read( std::istream& istr = std::cin , char delim = '\n' ) = 0;
      virtual~IOAble( ) = default;
   };

   std::ostream& operator<<( std::ostream& leftOperand, const IOAble& rightOperand );
   std::istream& operator>>( std::istream& leftOperand, IOAble& rightOperand );
}