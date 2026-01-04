#ifndef SENECA_VINT_H
#define SENECA_VINT_H
#include <iostream>
namespace seneca {
   class VInt {
      int m_min;
      int m_value;
      int m_max;
   public:
      VInt( int value = 0);
      VInt( int value, int min, int max );
      VInt& operator=( int value );
      void set( int min, int max );
      int get( )const;
      bool isValid( )const;
      VInt& operator+=( const VInt& other );
      VInt operator+( const VInt& other )const;
      std::ostream& display( std::ostream& ostr = std::cout )const;
      bool operator<( const VInt& other )const;
      int operator[]( int index )const;
      int& operator[]( int index );

      VInt& operator++( );

      VInt operator++( int ); // add an int to be post fix

      std::ostream& operator~( )const;

   };
}
#endif // !SENECA_VINT_H


