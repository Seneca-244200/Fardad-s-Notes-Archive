#include <iostream>
using namespace std;
class IntArray {
   int* m_array;
   int m_size;
public:
   int size()const {
      return m_size;
   }
   int& element(int index) {
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



int main() {
   int i;
   int size;
   /*cout << "How many integers? ";
   cin >> size;*/
   IntArray a(10);
   cout << a.size() << endl;
  /* int x;
   int& R = x;
   x = a.element(2);

   a.element(1) = 123455;*/

  //   10000000001%10

   for (i = 0; i < a.size() + 5; i++) {
      a.element(i) = (i + 1) * 100;
      // a[i] = whatever
   }


   for (i = 0; i < a.size() + 5; i++) {
      cout << a.element(i) << endl;
   }
   return 0;
}