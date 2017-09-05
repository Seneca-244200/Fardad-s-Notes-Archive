#include <iostream>
using namespace std;
class IntArray {
   int* m_data;
   int m_size;
public:
   IntArray(int size) {
      m_data = new int[m_size = size];
   }
   IntArray(const IntArray& C) {
      int i;
      m_data = new int[m_size = C.size()];
      for (i = 0; i < m_size; i++) {
         m_data[i] = C.m_data[i];
      }
   }
   IntArray& operator=(const IntArray& C) {
      if (this != &C) {
         int i;
         delete[] m_data;
         m_data = new int[m_size = C.size()];
         for (i = 0; i < m_size; i++) {
            m_data[i] = C.m_data[i];
         }
      }
      return *this;
   }

   int size()const {
      return m_size;
   }
   int& operator[](int index) {
      if (index > m_size - 1) {
         int i;
         int* temp = new int[m_size + 20];
         for (i = 0; i < m_size; i++) {
            temp[i] = m_data[i];
         }
         delete[] m_data;
         m_data = temp;
         m_size += 20;
      }
      return m_data[index];
   }
   virtual ~IntArray() {
      delete[] m_data;
   }
};


void printIntArray(IntArray I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;
}

int main() {
   IntArray A(10);
   IntArray B(5);
   int i;
   for (i = 0; i < 35; i++) {
      A[i] = i * 10;
   }
   for (i = 0; i < 35; i++) {
      cout << A[i] << " ";
   }
   cout << endl;
   printIntArray(A);
   B = A;
   for (i = 0; i < 35; i++) {
      cout << B[i] << " ";
   }
   
   return 0;
}