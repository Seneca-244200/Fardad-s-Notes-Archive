#include <iostream>
using namespace std;
class IntArray {
   int* m_array;
   int m_size;
public:
   int size()const {
      return m_size;
   }
   IntArray(int size) {
      if (size <= 0) size = 1;
      m_array = new int[size];
      m_size = size;
   }
   operator const int* ()const {
      return (const int*)m_array;
   }
   ~IntArray() {
      delete[] m_array;
   }                                               
   int& operator[](int index) {
      return m_array[index % m_size];
   }
   int& operator[](int index)const {
      return m_array[index % m_size];
   }
};

void printIntArray(const IntArray& I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
}

int main() {
   const int* ptr;
   IntArray A(20);
   int i;
   for (i = 0; i < A.size(); i++) {
      A[i] = i + 10;
   }
   printIntArray(A);
   cout << endl;
   ptr = (const int*)A;
   for (i = 0; i < 5; i++) {
      cout << ptr[i] << endl;
   }
   return 0;
}