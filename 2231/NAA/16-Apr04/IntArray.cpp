#include "IntArray.h"
namespace sdds {



   IntArray::IntArray(size_t size):m_size(size) {
      if(m_size == 0) m_size = 1;
      m_data = new int[m_size];
   }

   IntArray::IntArray(const IntArray& I) :m_size(I.m_size) {
      m_data = new int[I.m_size];
      for(unsigned i = 0; m_data && I.m_data && i < I.m_size; i++) {
         m_data[i] = I.m_data[i];
      }
   }
   IntArray& IntArray::operator=(const IntArray& I) {
      if(I && this != &I) { // if I is valid and it is not a self copy
         delete[] m_data;
         m_data = new int[I.m_size];
         for(unsigned i = 0; i < I.m_size; i++) {
            m_data[i] = I.m_data[i];
         }
         m_size = I.m_size;
      }
      return *this;
   }

   IntArray::~IntArray() {
      delete[] m_data;
   }

   IntArray& IntArray::operator=(const int array[]) {
      for(unsigned i = 0; i < m_size; i++) {
         m_data[i] = array[i];
      }
      return *this;
   }

   IntArray& IntArray::set(const int array[], size_t arraySize) {
      resize(arraySize);
      return *this = array;
   }

   size_t IntArray::size() const {
      return m_size;
   }

   IntArray::operator bool() const {
      return m_data != nullptr;
   }

   IntArray& IntArray::resize(size_t newSize) {
      if(newSize != size()) {
         if(newSize == 0) newSize = 1;
         int* temp = new int[newSize];
         for(size_t i = 0; temp && m_data && i < newSize && i < m_size; i++) {
            temp[i] = m_data[i];
         }
         delete[] m_data;
         m_data = temp;
         m_size = newSize;
      }
      return *this;
   }

   int& IntArray::operator[](size_t index) {
      if(index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }

   const int& IntArray::operator[](size_t index) const {
      return m_data[index % m_size];
   }

}