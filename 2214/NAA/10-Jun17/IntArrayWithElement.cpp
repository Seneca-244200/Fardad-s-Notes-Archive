#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(int size) :m_data(nullptr) {
      if (size < 1) size = 1;
      m_data = new int[size];
      m_size = size;
   }
   int& IntArray::element(int index) {
      if (index < 0) index = 0;
      if (index >= m_size) {
         resize(index+1);
      }
      return m_data[index];
   }
   int IntArray::size()const {
      return m_size;
   }
   void IntArray::resize(int newsize) {
      int* temp = new int[newsize];
      int i;
      for (i = 0; i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
   }
   IntArray::~IntArray() {
      delete[] m_data;
   }
}