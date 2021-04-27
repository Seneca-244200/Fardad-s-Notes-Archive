#include <iostream>
using namespace std;
class IntArray {
   int* m_array;
   int m_size;
public:
   operator const int* () {
      return (const int*)m_array;
   }
   int size()const {
      return m_size;
   }
   int& operator[](int index) {
      return m_array[index % m_size];
   }
   int& operator[](int index)const {
      return m_array[index % m_size];
   }


   IntArray(int size) {
      if (size <= 0) size = 1;
      m_array = new int[size];
      m_size = size;
   }
   ~IntArray() {
      delete[] m_array;
   }
};

void printArray(const IntArray& I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << endl;
   }
}

int main() {
   int i;
   const int* ptr;
   IntArray a(10);
   ptr = (const int*)a;
   cout << a.size() << endl;
   for (i = 0; i < a.size(); i++) {
      a[i] = (i + 1) * 100;
   }
   printArray(a);
   cout << ptr[3] << endl;
   return 0;
}