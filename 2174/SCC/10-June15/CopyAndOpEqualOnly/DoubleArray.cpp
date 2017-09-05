#include "DoubleArray.h"



namespace sict {
   DoubleArray::DoubleArray(int size) {
      if (size < 1) size = 1;
      m_data = new double[m_size = size];
     // m_size = size;
   }
   DoubleArray::DoubleArray(const DoubleArray& D) {
      m_data = new double[m_size = D.size()];
      for (int i = 0; i < m_size; i++) {
         m_data[i] = D.m_data[i];
      }
   }
   DoubleArray& DoubleArray::operator=(const DoubleArray& D) {
      if (this != &D) {
         delete[] m_data;
         m_data = new double[m_size = D.size()];
         for (int i = 0; i < m_size; i++) {
            m_data[i] = D.m_data[i];
         }
      }
      return *this;
   }
   int DoubleArray::size()const {
      return m_size;
   }
   DoubleArray::~DoubleArray() {
      delete[] m_data;
   }
   double& DoubleArray::element(int index) {
      return operator[](index);
   }
   double& DoubleArray::operator[](int index) {
      return m_data[index%size()];
   }
}