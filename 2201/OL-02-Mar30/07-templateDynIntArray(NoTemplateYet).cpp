#include <iostream>
using namespace std;
class DynIntArray {
   int* m_data;
   unsigned int m_size;
public:
   DynIntArray(unsigned int size = 1u);
   int& operator[](unsigned int index);
   int size()const;
   ~DynIntArray();
};
DynIntArray::DynIntArray(unsigned int size) :m_size(size) {
   m_data = new int[size];
}
int& DynIntArray::operator[](unsigned int index) {
   return m_data[index % m_size];
}
DynIntArray::~DynIntArray() {
   delete[] m_data;
}
int DynIntArray::size()const {
   return m_size;
}



int main() {
   int i;
   DynIntArray I(3);
   for (i = 0; i < I.size(); i++) {
      I[i] = i + 20;
   }
   for (i = 0; i < 5000; i++) {
      cout << I[i] << " ";
   }
   cout << endl;
   return 0;
}