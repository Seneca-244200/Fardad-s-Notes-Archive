#include "IntArray.h"
namespace sdds {
   IntArray::IntArray():m_data(nullptr), m_size(0u) {}
   IntArray::~IntArray() {
      delete[] m_data;
   }
   IntArray::IntArray(unsigned int size) {
      m_data = new int[m_size = size];
   }
   IntArray::IntArray(const int* array, unsigned int size) {
      m_data = new int[m_size = size];
      for (int i = 0; i < size; m_data[i] = array[i++]);
   }
   IntArray::IntArray(const IntArray& IA) {
      m_data = new int[m_size = IA.m_size];
      for (int i = 0; i < m_size; m_data[i] = IA.m_data[i++]);
   }
   IntArray& IntArray::operator=(const IntArray& IA) {
      if (this != &IA) {
         delete[] m_data;
         m_data = new int[m_size = IA.m_size];
         for (int i = 0; i < m_size; m_data[i] = IA.m_data[i++]);
      }
      return *this;
   }
   int IntArray::size()const {
      return m_size;
   }
   int& IntArray::elementAt(unsigned int index) {
      return m_data[index % m_size];
   }
   int& IntArray::operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index ];
   }
   void IntArray::resize(unsigned int newsize) {
      int* temp = new int[newsize];
      for (int i = 0; i < m_size && i < newsize; temp[i] = m_data[i++]);
      m_size = newsize;
      delete[] m_data;
      m_data = temp;
   }
   IntArray::operator bool()const {
      return m_data != nullptr;
   }
   bool IntArray::operator!()const {
      return m_data == nullptr;
   }
}