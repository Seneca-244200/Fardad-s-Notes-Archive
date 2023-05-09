#include <iostream>
#include "Utils.h"
#include "sort.h"
using namespace std;
using namespace sdds;

template <typename type, int size>
class Array {
   type m_data[size]{};
public:
   Array( ) = default;
   type& operator[]( int index ) {
      return m_data[index % size];
   }
};

int main( ) {
   Array<double, 100> A;
   Array<int, 10> B;
   return 0;
}