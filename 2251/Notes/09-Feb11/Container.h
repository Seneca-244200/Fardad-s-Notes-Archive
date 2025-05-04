#ifndef SENECA_CONTAINER_H
#define SENECA_CONTAINER_H
#include <iostream>
namespace seneca {
   class Container {
      int m_value;
   public:
      Container( int value = 0 );
      Container& operator+=( int value );
      Container operator+( int value )const;
      Container operator+( const Container& other )const;
      Container& operator-=( int value );
      Container& operator++( );
      Container& operator++( int );
      Container& operator=( int value );
      std::ostream& display( )const;
      int operator>>( Container& other );
      operator int( )const;
   };

}

#endif // !SENECA_CONTAINER_H


