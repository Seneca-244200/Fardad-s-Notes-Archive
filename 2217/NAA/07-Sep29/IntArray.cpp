#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(int size) {
      if (size <= 0) size = 1;
      m_data = new int[m_size = size];
   }
   //int& IntArray::element(int index) {
   //   if (index < 0) index = 0;
   //   if (index >= m_size) {
   //      resize(index + 1);
   //   }
   //   return m_data[index];
   //}
   int& IntArray::operator[](int index) {
      if (index < 0) index = 0;
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }
   IntArray::~IntArray() {
      delete[] m_data;
   }
   int IntArray::size() const {
      return m_size;
   }
   void IntArray::resize(int newsize) {
      int* temp = new int[newsize];
      for (int i = 0; i < m_size && i < newsize; i++) {
         temp[i] = m_data[i];
      }
      m_size = newsize;
      delete[] m_data;
      m_data = temp;
   }
}
