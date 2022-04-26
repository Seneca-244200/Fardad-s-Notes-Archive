#include <iostream>
#include <iomanip>
#include "Utils.h"
using namespace std;
using namespace sdds;

class DoubleArray {
   double* m_array{};
   unsigned int m_size{};
public:
   // construction
   DoubleArray(unsigned size = 10);

   //Query
   unsigned int size()const;

   // subscription overloads (modifier and query)
   double& operator[](unsigned int index);
   const double& operator[](unsigned int index)const;

   // modifier
   void resize(unsigned int newsize);

   // Rule of three
   DoubleArray(const DoubleArray& d);
   DoubleArray& operator=(const DoubleArray& d);
   virtual ~DoubleArray();
};


DoubleArray::DoubleArray(unsigned size) {
   if (size == 0) size = 10;
   m_array = new double[m_size = size];
}

unsigned int DoubleArray::size() const {
   return m_size;
}

double& DoubleArray::operator[](unsigned int index) {
   if (index >= m_size) {
      resize(index + 1);
   }
   return m_array[index];
}

const double& DoubleArray::operator[](unsigned int index) const {
   return m_array[index % m_size];
}

void DoubleArray::resize(unsigned int newsize) {
   if (newsize == 0) newsize = 1;
   double* temp = new double[newsize];
   for (unsigned i = 0; i < m_size && i < newsize; temp[i] = m_array[i++]);
   delete[] m_array;
   m_size = newsize;
   m_array = temp;
}

DoubleArray::DoubleArray(const DoubleArray& d) {
   operator=(d);
}

DoubleArray& DoubleArray::operator=(const DoubleArray& d) {
   if (this != &d) {
      delete[] m_array;
      m_array = new double[m_size = d.m_size];
      for (unsigned i = 0; i < m_size; m_array[i] = d.m_array[i++]);
   }
   return *this;
}

DoubleArray::~DoubleArray() {
   delete[] m_array;
}

void prnDoubleArray(const DoubleArray& d) {
   for (unsigned i = 0; i < d.size(); i++) {
      if (i != 0) cout << ", ";
      cout << d[i];
   }
   cout << endl;
}

int main() {
   DoubleArray D(5);
   for (unsigned i = 0; i < 10; i++) {
      D[i] = i * 12.345;
   }
   prnDoubleArray(D);
   return 0;
}
