#include "IntArray.h"
namespace seneca {   

   IntArray::IntArray( size_t size ) {
      m_data = new int[size];
      m_size = size;
   }

      size_t IntArray::size( )const {
      return m_size;
   }
   IntArray::~IntArray( ) {
      delete[] m_data;
   }
   int& IntArray::operator[]( size_t index ) {
      int* ret = &m_garbage;
      if ( m_data != nullptr ) {
         ret = &m_data[index % m_size];
      }
      return *ret;
   }

   const int& IntArray::operator[]( size_t index )const {
      const int* ret = &m_garbage;
      if ( m_data != nullptr ) {
         ret = &m_data[index % m_size];
      }
      return *ret;
   }

}
