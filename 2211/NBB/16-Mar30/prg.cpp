#include <iostream>
using namespace std;
/*
To convert the class to a template:
1 - add the template tag to all blocks involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>) to all the class names except:
    A- The name of the class after the template
    A- Constructor names
    A- Destructor name


*/
#include <iostream>
using namespace std;
class DynIntArray {
   int* m_data = nullptr;
   unsigned int m_size = -1;
public:
   DynIntArray(const DynIntArray&);
   DynIntArray& operator=(const DynIntArray&);
   DynIntArray(unsigned int size = 1u);
   int& operator[](unsigned int index);
   int size()const;
   ~DynIntArray();
};
DynIntArray::DynIntArray(unsigned int size) :m_size(size) {
   m_data = new int[size];
}
int& DynIntArray::operator[](unsigned int index) {
   if (index >= m_size) {
      int* temp = new int[index + 1];
      for (unsigned int i = 0; i < m_size; i++) {
         temp[i] = m_data[i];
      }
      delete[] m_data;
      m_data = temp;
      m_size = index + 1;
   }
   return m_data[index];
}
DynIntArray::~DynIntArray() {
   delete[] m_data;
}
int DynIntArray::size()const {
   return m_size;
}
DynIntArray::DynIntArray(const DynIntArray& A) {
   operator=(A);
}
DynIntArray& DynIntArray::operator=(const DynIntArray& A) {
   if (this != &A) {
      delete[] m_data;
      m_data = new int[A.m_size];
      m_size = A.m_size;
      for (unsigned int i = 0; i < A.m_size; i++) {
         m_data[i] = A.m_data[i];
      }
   }
   return *this;
}


int main() {
   int i;
   DynIntArray I(3);
   for (i = 0; i < 10; i++) {
      I[i] = i + 20;
   }
   for (i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl << I.size() << endl;
   return 0;
}





