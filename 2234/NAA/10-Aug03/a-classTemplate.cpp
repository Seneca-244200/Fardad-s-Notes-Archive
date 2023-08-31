#include <iostream>
#include "FloatArray.h"
using namespace std;
using namespace sdds;

template <typename T , size_t arraySize>
class Array {
   T a[arraySize]{};
   size_t noOfPrn{ };
public:
   T& operator[]( size_t index ) {
      return a[index % arraySize];
   }
   const T& operator[]( size_t index )const {
      return a[index % arraySize];
   }
   T* raw( ) {
      return a;
   }
   size_t size( )const {
      return arraySize;
   }
   ostream& print( ostream& ostr = cout ) const {
      size_t* nop = const_cast<size_t*>(& noOfPrn);
      (*nop)++;
      for ( size_t i = 0; i < size( ); i++ ) {
         ostr << operator[](i);
         if ( i != size( ) - 1 ) ostr << ", ";
      }
      return ostr;
   }
   size_t noOfPrints( )const {
      return noOfPrn;
   }
};
template <typename T, size_t arraySize>
ostream& operator<<( ostream& ostr, const Array<T, arraySize>& ar ) {
   return ar.print( ostr );
}

int main( ) {
   Array<double, 10> D;
   Array<int, 100> I;
   size_t i{};
   for ( ; i < D.size(); i++ ) {
      D[i] = (i + 1) * 1.1;
   }
   cout << D << endl;
   return 0;
}

