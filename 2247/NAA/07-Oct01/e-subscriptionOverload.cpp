#include <iostream>
using namespace std;

class IntArray {
   int* m_data{};
   size_t m_size{ };
public:
   IntArray( size_t size ) {
      m_data = new int[size];
      m_size = size;
   }
   ~IntArray( ) {
      delete[] m_data;
   }
   int& element( size_t index ) {
      return m_data[index % m_size];
   }
   int& operator[]( size_t index ) {
      return m_data[index % m_size];
   }
   const int& operator[]( size_t index )const {
      return m_data[index % m_size];
   }
   size_t size( )const {
      return m_size;
   }
};
void prinArray( const IntArray& I ) {
   for (size_t i = 0; i < I.size( ); i++ ) {
      if ( i ) cout << ",";
      cout << I[i];
   }
   cout << endl;

}

int main( ) {
   IntArray A( 100 );
   int i;
   for (i = 0; i < 110; i++ ) {
//      A.element( i ) = i * 10;
//      A.operator[]( i ) = i * 3;
      A[i] = i * 4;
   }
   for ( i = 0; i < A.size( ); i++ ) {
      if ( i ) cout << ",";
 //     cout << A.element( i );
      cout << A[i];
   }
   cout << endl;
   return 0;
}


