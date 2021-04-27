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
   ~IntArray() {
      delete[] m_array;
   }                                               
   
   int& element(int index) {
      return m_array[index % m_size];
   }

   int& element(int index)const {
      return m_array[index % m_size];
   }
};

void printIntArray(const IntArray& I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I.element(i) << " ";
   }
}

int main() {
   IntArray A(20);
   for (int i = 0; i < A.size(); i++) {
      A.element(i) = i + 10;
   }
   printIntArray(A);
   return 0;
}