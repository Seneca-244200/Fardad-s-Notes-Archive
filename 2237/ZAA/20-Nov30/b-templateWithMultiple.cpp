#include <iostream>
#include "Utils.h"

using namespace std;
using namespace sdds;
template <typename T, size_t N = 100>
class Array {a
   T a[N];
   size_t m_size = N;
public:
   size_t size() {
      return m_size;
   }
   T& operator[](size_t i) { return a[i % m_size]; }
   const T& operator[](size_t i) const{ return a[i % m_size]; }
};

int main() {
   cout << "Hello OOP244ZAA!" << endl;
   Array<double,10> a;
   for (size_t i = 0; i < a.size(); i++) {
      a[i] = (i + 1) * 100.01;
   }
   for (size_t i = 0; i < a.size(); i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}