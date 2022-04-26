#include <iostream>
#include <string>
#include "Utils.h"
using namespace std;

/*
add the signture of the template (i.e: <type> ) to the name of the class 

except:
the class name right after template
Name of constructors
Name of destructor


*/

template <typename type>
class Array {
   type* m_array{};
   unsigned int m_size{};
public:
   Array(unsigned int size = 10) {
      if (size == 0) size = 10;
      m_array = new type[size];
      m_size = size;
   }

   void resize(unsigned int newsize);

   unsigned int size()const {
      return m_size;
   }

   type& operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_array[index];
   }
   const type& operator[](unsigned int index)const;
   Array(const Array<type>& A);

   Array<type>& operator=(const Array<type>& A) {
      if (this != &A) {
         delete[] m_array;
         m_array = new type[m_size = A.m_size];
         for (unsigned int i = 0; i < m_size; m_array[i] = A.m_array[i], i++);
      }
      return *this;
   }


   virtual ~Array() {
      delete[] m_array;
   }
};

template <typename type>
Array<type>::Array(const Array<type>& A) {
   operator=(A);
}


template <typename type>
void Array<type>::resize(unsigned int newsize) {
   if (newsize == 0) newsize = 10;
   type* temp = new type[newsize];
   for (unsigned int i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_array[i];
   }
   delete[] m_array;
   m_size = newsize;
   m_array = temp;
}

template <typename type>
const type& Array<type>::operator[](unsigned int index)const {
   return m_array[index%m_size];
}


template <typename type>
void prnArray(const Array<type>& A) {
   for (unsigned int i = 0; i < A.size(); i++) {
      if (i != 0) cout << ",";
      cout << A[i];
   }
   cout << endl;
}

using namespace sdds;
int main() {
   Array<double> D(5);
   Array<int> I(10);
   for (unsigned i = 0; i < 10; i++) {
      D[i] = i * 12.345;
   }
   for (unsigned i = 0; i < 20; i++) {
      I[i] = i * 12;
   }
   prnArray(D);
   prnArray(I);

   return 0;
}


