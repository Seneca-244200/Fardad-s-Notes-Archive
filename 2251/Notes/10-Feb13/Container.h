#ifndef SENECA_CONTAINER_H
#define SENECA_CONTAINER_H
#include <iostream>
namespace seneca {
   class Container {
      int m_value;
   public:
      Container( int value = 0 );
      Container& operator+=( int value );
      // left operand is a composite type,
      // right operand is a primitive type
      Container operator+( int value )const;
      Container operator+( const Container& other )const;
      Container& operator-=( int value );
      Container& operator++( );
      Container& operator++( int );
      Container& operator=( int value );
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      int operator>>( Container& other );
      operator int( )const;
      // NEVER USE FRIENDS FOR METHODS: friend Container operator+(int leftOperand, const Container& rightOprand);
   };

   Container operator+(int leftOperand, const Container& rightOprand);

   std::ostream& operator<<(std::ostream& leftOperand, const Container& rightOperand);
   std::istream& operator>>(std::istream& leftOperand, Container& rightOperand);

}

#endif // !SENECA_CONTAINER_H


