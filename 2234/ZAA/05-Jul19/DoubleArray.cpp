#include "DoubleArray.h"
namespace sdds {

   DoubleArray::DoubleArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_elements = new double[size];
      m_size = size;
   }
   //double& DoubleArray::element( size_t index ) const {
   //   return m_elements[index % m_size];
   //}
   //double& DoubleArray::element( size_t index ){
   //   return m_elements[index % m_size];
   //}
   double& DoubleArray::operator[]( size_t index ) const {
      return m_elements[index % m_size];
   }
   double& DoubleArray::operator[]( size_t index ) {
      if ( index >= m_size ) {
         double* temp = new double[index + 1];
         for ( size_t i = 0; i < m_size; i++ ) {
            temp[i] = m_elements[i];
         }
         delete[] m_elements;
         m_elements = temp;
         m_size = index + 1;
      }
      return m_elements[index];
   }
   DoubleArray::operator const double* ()const {
      return m_elements;
   }
   size_t DoubleArray::size( ) const {
      return m_size;
   }
   DoubleArray::~DoubleArray( ) {
      delete[] m_elements;
   }

}