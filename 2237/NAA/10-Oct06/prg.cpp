#include <iostream>
#include "Utils.h"
#include "Integer.h"
using namespace std;
using namespace sdds;

class IntArray {
   int* m_data;
   size_t m_size;
public:
   IntArray( size_t size =1 ) {
      if ( size == 0 ) size = 1;
      m_data = new int[m_size = size];
   }
   int& operator[]( size_t index ) {
      return m_data[index % m_size];
   }
   size_t size( ) {
      return m_size;
   }
   ~IntArray( ) {
      delete[] m_data;
   }
};

int main( ) {
   IntArray I( 10 );
   int i;
   for (i = 0; i < 12; i++ ){
      I[i] = 10 + i;
   }

   for ( i = 0; i < I.size( ); i++ ) {
      cout << I[i] << " ";
   }
   cout << endl;
   return 0;
}
