#include <iostream>

using namespace std;
class DynIntArray {
   int* m_data{};  // therefore for all constructors the m_data attribute will be nullptr
   unsigned int m_size = -1;
public:
   DynIntArray(const DynIntArray&);
   DynIntArray& operator=(const DynIntArray&);
   DynIntArray(unsigned int size = 1u);
   int& operator[](unsigned int index);
   unsigned int size()const;
   void resize(unsigned int newsize);
   operator int()const;
   operator unsigned int()const;
   virtual ~DynIntArray();
};
DynIntArray::DynIntArray(unsigned int size) :m_size(size) {
   m_data = new int[size];
}
int& DynIntArray::operator[](unsigned int index) {
   if (index >= m_size) {
      resize(index + 1);
   }
   return m_data[index];
}
DynIntArray::DynIntArray(const DynIntArray& A) {
   operator=(A);
}
DynIntArray& DynIntArray::operator=(const DynIntArray& A) {
   if (this != &A) {
      delete[] m_data;
      m_data = new int[A.m_size];
      m_size = A.m_size;
      for (unsigned int i = 0; i < m_size; i++) {
         m_data[i] = A.m_data[i];
      }
   }
   return *this;
}

DynIntArray::~DynIntArray() {
   delete[] m_data;
}
unsigned int DynIntArray::size()const {
   return m_size;
}

void DynIntArray::resize(unsigned int newsize) {
   int* temp = new int[newsize];
   // copy all the current data into new memory
   for (unsigned int i = 0; i < newsize && i < m_size; i++) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_size = newsize;
   m_data = temp;
}

DynIntArray::operator int() const {
   return int(m_size);
}

DynIntArray::operator unsigned int() const {
   return m_size;
}

int main() {
   int i;
   DynIntArray A(10);
   cout << "Size is : " << A.size() << endl;
   for (i = 0; i < 15; i++) {
      A[i] = (i + 1) * 100;
   }
   cout << "The size is now : " << A.size() << endl;
   for (i = 0; i < int(A); i++) {
      cout << A[i] << " ";
   }
   cout << endl;
   return 0;
}