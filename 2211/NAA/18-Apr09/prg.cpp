#include <iostream>
using namespace std;
// Universal/parametric
template <typename type>
void foo(type a) {
   cout << a << endl;
}
// Universal/parametric
template <typename type, int size>
class Array {
   type m_data[size];
public:
   type& operator[](int index) {
      return m_data[index % size];
   }
   const type& operator[](int index)const {
      return m_data[index % size];
   }
};
// Universal/parametric
template <typename type, int size>
void prnArray(const Array<type, size> A) {
   for (int i = 0; i < size; i++) {
      cout << A[i] << " ";
   }
   cout << endl;
}


int main() {
   foo('A');
   foo(65);
   foo(65.4321);
   Array<int, 10> I;
   Array<double, 5> D;
   int i;
   for (i = 0; i < 12; i++) {
      I[i] = i * 10;
   }
   for (i = 0; i < 10; i++) {
      D[i] = i * 10.123;
   }
   prnArray(I);
   prnArray(D);
   return 0;
}