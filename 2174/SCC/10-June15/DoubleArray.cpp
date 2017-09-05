#include <iostream>
using namespace std;
#include "DoubleArray.h"
//#define SICT_DEBUG


namespace sict {
   DoubleArray::DoubleArray(int size) {
      if (size < 1) size = 1;
      m_data = new double[m_size = size];
#ifdef SICT_DEBUG
      cout << "create " << m_size << "doubles" << endl;
#endif // SICT_DEBUG
   }
   DoubleArray::DoubleArray(const DoubleArray& D) {
      m_data = new double[m_size = D.size()];
      for (int i = 0; i < m_size; i++) {
         m_data[i] = D.m_data[i];
      }
#ifdef SICT_DEBUG
      cout << "copy " << m_size << "doubles" << endl;
#endif
   }
   DoubleArray& DoubleArray::operator=(const DoubleArray& D) {
      if (this != &D) {
         delete[] m_data;
         m_data = new double[m_size = D.size()];
         for (int i = 0; i < m_size; i++) {
            m_data[i] = D.m_data[i];
         }
      }
#ifdef SICT_DEBUG
      cout << "assigning " << m_size << "doubles" << endl;
#endif
      return *this;
   }
   int DoubleArray::size()const {
      return m_size;
   }
   DoubleArray::~DoubleArray() {
      delete[] m_data;
#ifdef SICT_DEBUG
      cout << "remove " << m_size << "doubles" << endl;
#endif
   }
   double& DoubleArray::element(int index) {
      return operator[](index);
   }
   double& DoubleArray::operator[](int index) {
      return m_data[index%size()];
   }
}