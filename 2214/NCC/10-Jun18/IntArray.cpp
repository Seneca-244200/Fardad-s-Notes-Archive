#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(int size):m_size(size<1?1:size){
 //     if (m_size < 1) m_size = 1;
      m_data = new int[m_size];
   }
   IntArray::~IntArray() {
      delete[] m_data;
   }
   //IntArray::IntArray(const IntArray& I):m_size(I.m_size) {
   //   m_data = new int[I.m_size];
   //   for (int i = 0; i < m_size; i++) {
   //      m_data[i] = I.m_data[i];
   //   }
   //}
   IntArray::IntArray(const IntArray& I){
      // m_data = nullptr; this must be done so you can reuse your
      // code in operator= (in this case it initialized to nullptr
      // in the class declration 
      operator=(I);
//      *this = I;  this is correct too
   }
   IntArray& IntArray::operator=(const IntArray& I) {
      if (this != &I) {
         delete[] m_data;
         m_data = new int[I.m_size];
         m_size = I.m_size;
         for (int i = 0; i < m_size; i++) {
            m_data[i] = I.m_data[i];
         }
      }
      return *this;
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
      for (int i = 0; i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = temp;
    }
}