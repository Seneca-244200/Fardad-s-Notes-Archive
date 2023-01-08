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
   IntArray& IntArray::operator=(const int array[]){
      for (unsigned i = 0; i < m_size; i++) {
         m_data[i] = array[i];
      }
      return *this;
   }
   IntArray& IntArray::set(const int array[], unsigned arraySize){
      resize(arraySize);
      return *this = array;
   }
   IntArray::~IntArray(){
      delete[] m_data;
   }
   void IntArray::resize(unsigned newsize){
      if (newsize == 0) newsize = 1;
      int* temp = new int[newsize];
      for (unsigned i = 0; temp && m_data && i < newsize && i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_data = temp;
      m_size = newsize;
   }
   unsigned IntArray::size() const{
      return m_size;
   }
   IntArray::operator bool() const{
      return m_data != nullptr;
   }
   int& IntArray::operator[](unsigned int index) {  
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
   }
   const int& IntArray::operator[](unsigned int index)const{
      return m_data[index % m_size];
   }
}