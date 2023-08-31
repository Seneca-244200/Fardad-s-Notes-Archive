#include "IntArray.h"
namespace sdds {

   // add safe empty state logic for memory allocation

   IntArray::IntArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new int[size];
      m_size = size;
   }

   size_t IntArray::size( ) const {
      return m_size;
   }

   const int& IntArray::operator[]( size_t index ) const {
      return m_data[index % m_size];
   }
   
   
   int& IntArray::operator[]( size_t index )  {
      if ( index >= m_size ) {
         int* temp = new int[index + 1];
         size_t i = 0;
         // copying old data
         for ( ; i < m_size; i++ ) {
            temp[i] = m_data[i];
         }
         // setting the rest to a default value
         for ( ; i < index + 1; i++ ) {
            temp[i] = 0;
         }
         delete[] m_data;
         m_data = temp;
         m_size = index + 1;
      }
      return m_data[index];
   }


   IntArray::~IntArray( ) {
      delete[] m_data;
   }

}