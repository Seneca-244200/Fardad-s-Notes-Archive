#include "IntArray.h"
namespace seneca {
   IntArray& IntArray::resize(size_t newsize){
      int* newMem = new int[newsize];
      for (size_t i = 0; i < m_size && i < newsize; i++) {
         newMem[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = newMem;
      return *this;
   }
   IntArray::IntArray( size_t size ) {
      if(size) m_data = new int[size];
      m_size = size;
   }

   size_t IntArray::size( )const {
      return m_size;
   }
   IntArray::~IntArray( ) {
      delete[] m_data;
   }
   int& IntArray::operator[]( size_t index ) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }

   const int& IntArray::operator[]( size_t index )const {
      const int* ret = &m_garbage;
      if ( m_data != nullptr ) {
         ret = &m_data[index % m_size];
      }
      return *ret;
   }

}
