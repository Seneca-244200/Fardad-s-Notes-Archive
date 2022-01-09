#include <iostream>
using namespace std;
// at home implement rule of three for this;

class DynArray {
   int* m_data;
   unsigned int m_size;
   void resize(unsigned int newsize);
public:
   DynArray(unsigned int size = 1u);
   int& operator[](unsigned int index);
   int size()const;
   ~DynArray();
};

void DynArray::resize(unsigned int newsize) {
   int* temp = new int[newsize];
   for (unsigned int i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
}

DynArray::DynArray(unsigned int size) :m_size(size) {
   m_data = new int[size];
}
int& DynArray::operator[](unsigned int index) {
   if (index >= m_size) {
      resize(index+1);
   }
   return m_data[index];
}
DynArray::~DynArray() {
   delete[] m_data;
}
int DynArray::size()const {
   return m_size;
}
int main() {
   int i;
   DynArray I(3);
   for (i = 0; i < I.size(); i++) {
      I[i] = i + 20;
   }
   for (i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;
   return 0;
}