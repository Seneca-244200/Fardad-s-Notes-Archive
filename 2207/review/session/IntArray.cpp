#include "IntArray.h"
namespace sdds {
   void IntArray::resize(unsigned int newsize) {
      int* temp = new int[newsize];
      if (!isEmpty()) { 
         for (unsigned int i = 0; i < m_size && i<newsize; i++) {
            temp[i] = m_data[i];
         }
         delete[] m_data;
      }
      m_data = temp;
      m_size = newsize;
   }
   bool IntArray::isEmpty() const {
      return m_data == nullptr;
   }
   void IntArray::setEmpty() {
      m_data = nullptr;
      m_size = 0;
   }
   IntArray::IntArray() {
      setEmpty();
   }
   IntArray::IntArray(unsigned int size) {
      m_data = new int[size];
      m_size = size;
      /*  initializtion if needed 
      for (int i = 0; i < size; m_data[i++] = 0);
      */
   }
   IntArray::IntArray(const IntArray& A) {
      setEmpty();
      operator=(A); // potato
      // *this = A; // potaato
   }
   IntArray& IntArray::operator=(const IntArray& A) {
      delete[] m_data;
      if (!A.isEmpty()) {
         m_data = new int[A.size()];
         m_size = A.size();
         for (unsigned int i = 0; i < m_size; i++) {
            m_data[i] = A.m_data[i];
         }
      }
      return *this;
   }
   IntArray::~IntArray() {
      delete[] m_data;
      // m_data = nullptr; m_data will be gone, no use
   }
   int& IntArray::element(unsigned int index) {
      if (index >= m_size) {
         resize(index + 10);
      }
      return m_data[index];
   }
   int& IntArray::operator[](unsigned int index) {
      return element(index);
   }
   unsigned int IntArray::size() const {
      return m_size;
   }
   IntArray::operator bool() const {
      // return m_data != nullptr;
      return !isEmpty(); // reusing code
   }

  /* conflict with operator bool()
  IntArray::operator unsigned int() const {
      return size();
   }*/
  
}
