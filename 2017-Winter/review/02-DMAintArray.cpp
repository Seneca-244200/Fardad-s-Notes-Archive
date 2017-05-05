#include <iostream>
using namespace std;
class IntArray {
   int* m_data;
   int m_size;
public:
   IntArray(int size) {
      m_data = new int[m_size = size];
   }
   int size()const {
      return m_size;
   }
   int& elem(int index) {
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
int main() {
   IntArray A(10);
   int i;
   for (i = 0; i < 35; i++) {
      A.elem(i) = i * 10;
   }
   for (i = 0; i < 35; i++) {
      cout << A.elem(i) << " ";
   }
   cout << endl;
   for (i = 0; i < A.size(); i++) {
      cout << A.elem(i) << " ";
   }
   cout << endl;
   return 0;
}