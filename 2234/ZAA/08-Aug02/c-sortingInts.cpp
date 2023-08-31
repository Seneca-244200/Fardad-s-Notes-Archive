#include <iostream>
using namespace std;
class Container {
   int m_data;
public:
   Container( int data = 0 ) :m_data( data ) {
   }
   Container operator+( const Container& Ro )const { // binary operator+ with not side effect
      return Container( m_data + Ro.m_data );
   }
   ostream& display( ostream& os )const {
      return os << "Cn: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Container& C ) {
   return C.display( os );
}
class Mark {
   int m_data;
public:
   Mark( int data = 0 ) : m_data{ data } {
   }
   Mark operator+( const Mark& Ro )const {
      return Mark( (m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data );
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Mark& c ) {
   return c.display( os );
}

void swap( int* a, int* b ) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

void sort(int array[], size_t size, bool Ascend = true ) {
   size_t i{}, j{ };
   for ( i = 0; i < size - 1; i++ ) {
      for ( j = 0; j < size - i - 1; j++ ) {
         if ( Ascend ) {
            if ( array[j] > array[j + 1] ) {
               swap( &array[j], &array[j + 1] );
            }
         }
         else {
            if ( array[j] < array[j + 1] ) {
               swap( &array[j], &array[j + 1] );
            }
         }
      }
   }
}

std::ostream& prnArray( const int array[], size_t size, std::ostream& ostr=std::cout ) {
   for ( size_t i = 0; i < size; i++ ) {
      ostr << array[i];
      if ( i != size - 1 ) ostr << ", ";
   }
   return ostr;
}

int main( ) {
   int A[13] = { 1,5,4,3,78,9,4,6,4,6,4,6,7 };
   sort( A, 13 );
   prnArray( A, 13 ) << endl;
   return 0;
}

