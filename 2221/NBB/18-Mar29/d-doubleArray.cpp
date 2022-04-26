#include <iostream>
#include <string>
#include "Utils.h"
using namespace std;




class DoubleArray {
   double* m_array{};
   unsigned int m_size{};
public:
   DoubleArray(unsigned int size = 10) {
      if (size == 0) size = 10;
      m_array = new double[size];
      m_size = size;
   }
   void resize(unsigned int newsize);
   unsigned int size()const {
      return m_size;
   }
   double& operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_array[index];
   }

   const double& operator[](unsigned int index)const;



   DoubleArray(const DoubleArray& A) {
      operator=(A);
   }
   DoubleArray& operator=(const DoubleArray& A) {
      if (this != &A) {
         delete[] m_array;
         m_array = new double[m_size = A.m_size];
         for (unsigned int i = 0; i < m_size; m_array[i] = A.m_array[i], i++);
      }
      return *this;
   }
   virtual ~DoubleArray() {
      delete[] m_array;
   }
};
void DoubleArray::resize(unsigned int newsize) {
   if (newsize == 0) newsize = 10;
   double* temp = new double[newsize];
   for (unsigned int i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_array[i];
   }
   delete[] m_array;
   m_size = newsize;
   m_array = temp;
}

const double& DoubleArray::operator[](unsigned int index)const {
   return m_array[index%m_size];
}



void prnDoubleArray(const DoubleArray& A) {
   for (unsigned int i = 0; i < A.size(); i++) {
      if (i != 0) cout << ",";
      cout << A[i];
   }
   cout << endl;
}

using namespace sdds;
int main() {
   DoubleArray D(5);
   for (unsigned i = 0; i < 10 ; i++) {
      D[i] = i * 12.345;
   }
   prnDoubleArray(D);
   return 0;
}


