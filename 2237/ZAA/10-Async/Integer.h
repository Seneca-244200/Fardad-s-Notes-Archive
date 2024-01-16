#pragma once
#ifndef SDDS_INTEGER_H
#define SDDS_INTEGER_H
#include <iostream>
namespace sdds {
   class Integer {
      int m_value;
   public:
      //explicit means don't use the constructor for casting.
      explicit Integer( int value=0 );
//      Integer& add( const Integer& I );
      Integer& operator=( int value );
      Integer& operator+=( const Integer& RigntOperand );
      Integer operator+( const Integer& RO )const;
      Integer operator-( )const;
      std::ostream& print( std::ostream& ostr = std::cout )const;
      std::istream& read( std::istream& istr = std::cin );
      int value( )const;
      Integer& operator++( );
      Integer operator++(int ); // int is not an argument, it is only a flag to identify the ++ as postfix;
      // don't do this, bad for you health!!!
      //friend Integer operator+( int leftOperand, const Integer& rightOprand );

      // casting overload
      // conversion operator overload
      operator int( )const;
      // return the roman numeral conversion dynamic string
      operator const char* ()const;

   };
   std::ostream& operator << ( std::ostream& ostr, const Integer& rightOperand );
   std::istream& operator >> ( std::istream& istr, Integer& rightOperand );
   Integer operator+( int leftOperand, const Integer& rightOprand );
}
#endif // !SDDS_INTEGER_H


