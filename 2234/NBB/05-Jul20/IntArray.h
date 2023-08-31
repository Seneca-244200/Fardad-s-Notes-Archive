#pragma once
#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
// implement the rule of three
namespace sdds {
   class IntArray {
      int* m_data;
      size_t m_size;
   public:
      IntArray( size_t size );
      size_t size( )const;
      const int& operator[]( size_t index )const;
      int& operator[]( size_t index );
      virtual ~IntArray( );
   };
}

#endif // !SDDS_INTARRAY_H


