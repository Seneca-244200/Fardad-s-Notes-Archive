#include "DblArray.h"
namespace sdds {
   DblArray::DblArray(int size) {
      if (size < 1) size = 1;
      m_size = size;
      m_data = new double[m_size];
   }
   DblArray::~DblArray() {
      delete[] m_data;
   }
   // assigning a new instance to an old
   DblArray::DblArray(const DblArray& cp)/* : m_data(nullptr) init*/ { 
      //m_data = nullptr;setting to null redundant since  
      //m_data is null in header file
      operator=(cp);

      // *this = cp; same as above
   }
   // assigning an already existing instance
   // to antoher
   DblArray& DblArray::operator=(const DblArray& cp) {
      if (this != &cp) {
         delete[] m_data;                     
         //m_data = nullptr; no need!
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
      return m_data[indexOfelement % m_size]; // ifsize is 5:  3%5    5%5 = 0 6%5 = 1
   }

   double& DblArray::operator[](int indexOfElement) {
      return element(indexOfElement);
   }

   int DblArray::size() const {
      return m_size;
   }

}
