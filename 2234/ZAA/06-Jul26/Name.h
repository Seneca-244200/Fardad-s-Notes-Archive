#pragma once
#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
namespace sdds {
   class Name {
      char* m_value{};
   public:
      Name(const char* value = "No Name" );
      Name( const Name& N );
      Name& operator=( const Name& N );
      virtual ~Name( );
      virtual std::ostream& write( std::ostream& ostr = std::cout )const;
      virtual std::istream& read( std::istream& istr = std::cin );
   };
   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand);
   std::istream& operator>>( std::istream& leftOperand, Name& rightOperand );
}
#endif // !SDDS_NAME_H


