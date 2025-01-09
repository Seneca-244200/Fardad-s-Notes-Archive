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
      if ( index >= m_size ) {
         int* temp = new int[index + 1];
         for ( size_t i = 0; i < m_size; i++ ) {
            temp[i] = m_data[i];
         }
         m_size = index + 1;
         delete[] m_data;
         m_data = temp;
      }
      return m_data[index];
   }
   // fix this so it does not overwite the data but safely retruns garbage!!!!
   const int& operator[]( size_t index )const {
      return m_data[index % m_size];
   }
   size_t size( )const {
      return m_size;
   }
};
ostream& operator<<(ostream& ostr, const IntArray& I ){
   for ( size_t i = 0; i < I.size( ); i++ ) {
      if ( i ) ostr << ",";
      ostr << I[i];
   }
   return ostr;
}

int main( ) {
   IntArray A( 3 );
   int i;
   for ( i = 0; i < 6; i++ ) {
      A[i] = i * 4;
   }
   cout << A << " are the five values!" <<  endl;
   return 0;
}


