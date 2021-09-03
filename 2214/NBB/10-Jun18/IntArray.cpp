#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(int size) {
      if (size < 1)size = 1;
      m_size = size;
      m_data = new int[m_size];
   }

   IntArray::IntArray(const IntArray& C) {
      m_data = new int[C.m_size];
      m_size = C.m_size;
      for (int i = 0; i < m_size; i++) {
         m_data[i] = C.m_data[i];
      }
   }

   IntArray& IntArray::operator=(const IntArray& C) {
      if (this != &C) {
         delete[] m_data;
         m_data = new int[C.m_size];
         m_size = C.m_size;
         for (int i = 0; i < m_size; i++) {
            m_data[i] = C.m_data[i];
         }
      }
      return *this;
   }




   IntArray::~IntArray() {
      delete[] m_data;
   }

   int& IntArray::operator[](int index) {
      if (index < 0) index = 0;
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }

   int IntArray::size() const {
      return m_size;
   }

   void IntArray::resize(int newsize) {
      int* temp = new int[newsize];
      for (int i = 0; i < m_size && i < newsize; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
   }



}