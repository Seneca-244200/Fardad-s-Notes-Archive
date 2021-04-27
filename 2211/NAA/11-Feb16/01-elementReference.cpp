#include <iostream>
using namespace std;
class IntArray {
   int* m_array;
   int m_size;
public:
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
};



int main() {
 

   IntArray A(20);
   int x;
   A.element(1) = 12345;
   x = A.element(1);
   cout << x << endl;
   return 0;
}