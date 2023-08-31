#pragma once
#ifndef SDDS_FLOATARRAY_H
#define SDDS_FLOATARRAY_H
// implement copy constructor and copy assignment
namespace sdds {
   class FloatArray {
      float* m_data;
      size_t m_size;
   public:
      size_t size( )const;
      FloatArray( size_t size );
      const float& operator[]( size_t index )const;
      float& operator[]( size_t index );
      virtual ~FloatArray( );
   };
}

#include "FloatArray.h"
namespace sdds {
   size_t FloatArray::size( ) const {
      return m_size;
   }
   FloatArray::FloatArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new float[size];
      m_size = size;
   }

   const float& FloatArray::operator[]( size_t index )const {
      return m_data[index % m_size];
   }
   float& FloatArray::operator[]( size_t index ) {
      if ( index >= m_size ) {
         float* temp = new float[index + 1];
         size_t i = 0;
         for ( ; i < m_size; i++ ) {
            temp[i] = m_data[i];
         }
         for ( ; i < index + 1; i++ ) {
            temp[i] = 0.0f;
         }
         delete[] m_data;
         m_data = temp;
         m_size = index + 1;
      }
      return m_data[index];
   }
   FloatArray::~FloatArray( ) {
      delete[] m_data;
   }
}
#endif // !SDDS_FLOATARRAY_H


