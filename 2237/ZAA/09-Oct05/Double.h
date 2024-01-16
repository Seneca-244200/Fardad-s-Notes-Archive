#pragma once
#ifndef  SDDS_DOUBLE_H_
#define  SDDS_DOUBLE_H_
#include <iostream>
namespace sdds {
   class Double {
      double m_value;
   public:
      Double( );
      Double( double value );
      double value( )const;
      // operations
      // something like +=
      Double& operator+=( const Double& RO );
      Double operator+( const Double& RightOperand )const;
      Double operator/( const Double& RO )const;

      Double operator-( )const;

      // IO
      std::ostream& print( std::ostream& ostr =
         std::cout )const;
      std::istream& read( std::istream& istr =
         std::cin );
      //friend Double operator+( double leftOperand, const Double& rightOperand );
   };
   // helper function
   Double operator+( double leftOperand, const Double& rightOperand );
   std::ostream& operator<<
     ( std::ostream& leftOperand, const Double& rightOperand );
   std::istream& operator>>( std::istream& istr, Double& rightOperand );
}
#endif // ! SDDS_DOUBLE_H_


