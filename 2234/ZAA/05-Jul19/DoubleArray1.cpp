#include "DoubleArray.h"
namespace sdds {

   DoubleArray::DoubleArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_elements = new double[size];
      m_size = size;
   }
   void DoubleArray::setElement( size_t index, double value ) {
      m_elements[index % m_size] = value;
   }
   double DoubleArray::getElement( size_t index ) const{
      return m_elements[index % m_size];
   }
   size_t DoubleArray::size( ) const {
      return m_size;
   }
   DoubleArray::~DoubleArray( ) {
      delete[] m_elements;
   }

}