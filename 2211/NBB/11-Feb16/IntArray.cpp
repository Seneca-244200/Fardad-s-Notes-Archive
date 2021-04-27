#include "IntArray.h"
namespace sdds {

   IntArray::operator const int* () {
      return (const int*)m_array;
   }
   int IntArray::size()const {
      return m_size;
   }
   int& IntArray::operator[](int index) {
      return m_array[index % m_size];
   }
   int& IntArray::operator[](int index)const {
      return m_array[index % m_size];
   }


   IntArray::IntArray(int size) {
      if (size <= 0) size = 1;
      m_array = new int[size];
      m_size = size;
   }
   IntArray::~IntArray() {
      delete[] m_array;
   }


}