#include "IntArray.h"
namespace sdds {
   //IntArray::IntArray(unsigned int size) {
   //   m_data = new int[size];
   //   m_size = size;
   //}
   IntArray::IntArray(unsigned int size):m_size(size) {
      if (m_size == 0) m_size = 1;
      m_data = new int[m_size];
   }
   IntArray::IntArray(const IntArray& I):m_size(I.m_size) {
      m_data = new int[I.m_size];
      for (unsigned i = 0; m_data && I.m_data &&  i < I.m_size; i++) {
         m_data[i] = I.m_data[i];
      }
   }
   IntArray& IntArray::operator=(const IntArray& I)
   {
      if (I && this != &I) { // if I is valid and it is not a self copy
         delete[] m_data;
         m_data = new int[I.m_size];
         for (unsigned i = 0; i < I.m_size; i++) {
            m_data[i] = I.m_data[i];
         }
         m_size = I.m_size;
      }
      return *this;
   }
   IntArray::~IntArray(){
      delete[] m_data;
   }
   unsigned IntArray::size() const{
      return m_size;
   }
   IntArray::operator bool() const{
      return m_data != nullptr;
   }
   int& IntArray::element(unsigned int index)
   {
      return m_data[index % m_size];
   }
   const int& IntArray::element(unsigned int index)const
   {
      return m_data[index % m_size];
   }
}