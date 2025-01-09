#pragma once
#ifndef SENECA_INTARRAY_H
#define SENECA_INTARRAY_H
#include <iostream>
namespace seneca {

   class IntArray {
      int* m_data{};
      size_t m_size{ };
   public:
      IntArray( size_t size );
      IntArray( const IntArray& other );
      IntArray& operator=( const IntArray& other );
      ~IntArray( );
      int& element( size_t index );
      int& operator[]( size_t index );
      const int& operator[]( size_t index )const;
      size_t size( )const;
   };
   std::ostream& operator<<( std::ostream& ostr, const IntArray& I );
}
#endif // !SENECA_INTARRAY_H


