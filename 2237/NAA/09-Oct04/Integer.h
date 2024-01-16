#pragma once
#ifndef SDDS_INTEGER_H
#define SDDS_INTEGER_H
#include <iostream>
namespace sdds {
   class Integer {
      int m_value;
   public:
      Integer( int value=0 );
//      Integer& add( const Integer& I );
      Integer& operator+=( const Integer& RigntOperand );
      Integer operator+( const Integer& RO )const;
      Integer operator-( )const;
      std::ostream& print( std::ostream& ostr = std::cout )const;
   };
   std::ostream& operator << ( std::ostream& ostr, const Integer& I );
}
#endif // !SDDS_INTEGER_H


