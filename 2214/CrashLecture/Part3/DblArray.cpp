#include "DblArray.h"
namespace sdds {
   void DblArray::allocate(int size) {
      delete[] m_data;
      if (size < 1) size = 1;
      m_data = new double[size];
      m_size = size;
   }
   DblArray::DblArray(int size) {
      allocate(size);
   }
   DblArray::~DblArray() {
      delete[] m_data;
   }
   DblArray::DblArray(const DblArray& cp){ 
      operator=(cp);

   }
   DblArray& DblArray::operator=(const DblArray& cp) {
      if (this != &cp) {
         delete[] m_data;                     
         m_data = new double[cp.m_size];
         for (int i = 0; i < cp.m_size; i++) {
            m_data[i] = cp.m_data[i];
         }
         m_size = cp.m_size;
      }
      return *this;
   }

   double& DblArray::element(int indexOfelement) {
      if (indexOfelement < 0) indexOfelement = 0;
      return m_data[indexOfelement % m_size]; 
   }

   double& DblArray::operator[](int indexOfElement) {
      return element(indexOfElement);
   }

   int DblArray::size() const {
      return m_size;
   }

}
