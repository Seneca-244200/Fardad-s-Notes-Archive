#include "IntArray.h"
namespace seneca {   

   IntArray::IntArray( ) {
      // safe emtpy state
      m_data = nullptr;
      m_size = 0;
   }

   IntArray::IntArray( size_t size ) {
      m_data = new int[size];
      m_size = size;
   }

   int IntArray::getElem( size_t index) const {
      int ret{};
      if ( m_data != nullptr && index < m_size ) {
         ret =  m_data[index];
      }
      return ret;
   }

   size_t IntArray::size( )const {
      return m_size;
   }
   IntArray::~IntArray( ) {
      delete[] m_data;
   }
   void IntArray::setElem( size_t index, int value ) {
      if ( m_data != nullptr && index < m_size) {
         m_data[index] = value;
      }
   }
}
