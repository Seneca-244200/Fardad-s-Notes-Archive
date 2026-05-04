#include <iostream>
using namespace std;

template <typename type, size_t Asize=100>
class Array {
   type m_elems[Asize]{};
public:
   type& operator[](size_t index) {
      return m_elems[index % Asize];
   }
   const type& operator[](size_t index)const {
      return m_elems[index % Asize];
   }
   size_t size()const {
      return Asize;
   }
};


int main() {
   Array<int, 50> A;
   Array<double> D;
   A[10] = 10;
   for (int i = 0; i < 20; i++) {
      cout << A[i] << " ";
   }
   return 0;
}