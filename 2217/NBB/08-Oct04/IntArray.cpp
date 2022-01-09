#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(int size) {
      if (size <= 0) size = 1;
      m_data = new int[m_size = size];
   }
   //IntArray::IntArray(const IntArray& cp) { // object is new no deallocateion 
   //   m_data = new int[m_size = cp.m_size];
   //   for (int i = 0; i < m_size; i++) {
   //      m_data[i] = cp.m_data[i];
   //   }
   //}
   IntArray::IntArray(const IntArray& cp)/*second option :m_data{nullptr} */{ // object is new no deallocateion 
      /* m_data = nullptr; third */
      //operator=(cp);
      *this = cp;  // same as above
   }
   IntArray& IntArray::operator=(const IntArray& cp) { // object already exists, you must remove its memory not to have leak.
      if (this != &cp) {   // prevents self assignment
         delete[] m_data;
         m_data = new int[m_size = cp.m_size];
         for (int i = 0; i < m_size; i++) {
            m_data[i] = cp.m_data[i];
         }
      }
      return *this;
   }

   int IntArray::size() const {
      return m_size;
   }
   IntArray::~IntArray() {
      delete[] m_data;
   }
   const int& IntArray::operator[](int index)const {
      return m_data[index % m_size];
   }

   int& IntArray::operator[](int index) {
         if (index < 0) index = 0;
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_data[index];
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
   std::ostream& IntArray::display(std::ostream& ostr)const {
      ostr << operator[](0);
 //   ostr << (*this)[0];
      for (int i = 1; i < size(); i++) {
 //      ostr << "," << operator[](i);
         ostr << "," << (*this)[i];
      }
      return ostr;
   }


   std::ostream& operator<<(std::ostream& ostr, const IntArray& Ro) {
      return Ro.display(ostr);
   }

}
