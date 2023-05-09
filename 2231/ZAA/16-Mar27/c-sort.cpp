#include <iostream>
#include "Utils.h"
#include "sort.h"
using namespace std;
using namespace sdds;

class Name {
   char* m_value{};
public:
   Name( const char* value = "" ) {
      m_value = ut.alcpy( value );
   }
   Name( const Name& N ) {
      operator=( N );
   }
   Name& operator=( const Name& N ) {
      if ( this != &N ) {
         delete[] m_value;
         m_value = ut.alcpy( N.m_value );
      }
      return *this;
   }
   virtual ~Name( ) {
      delete[] m_value;
   }
   Name operator+( const Name& Ro )const {
      char* temp = new char[ut.strlen( m_value ) + ut.strlen( Ro.m_value ) + 1];
      ut.strcpy( temp, m_value );
      ut.strcat( temp, Ro.m_value );
      Name ret( temp );
      delete[] temp;
      return ret;
   }
   bool operator>( const Name& Ro )const {
      return ut.strcmp( m_value, Ro.m_value ) > 0;
   }
   bool operator<( const Name& Ro )const {
      return ut.strcmp( m_value, Ro.m_value ) < 0;
   }
   ostream& display( ostream& ostr = cout )const {
      return ostr << m_value;
   }

};
ostream& operator<<( ostream& ostr, const Name& N ) {
   return N.display( ostr );
}



template <typename Type>
ostream& prnArray( Type* a, int size , ostream& ostr = std::cout) {
   for ( int i = 0; i < size; i++ ) {
      ostr << a[i];
      if ( i != size - 1 ) {
         ostr << ',';
      }
   }
   return ostr;
}
int main( ) {
   int A[13] = { 1,5,4,3,78,9,4,6,4,6,4,6,7 };
   double D[10] = { 1.1, 3.3, 5.5, 3.3, 8.8, 4.4, 2.2,1.1,3.34, 56.66 };
   Name N[] = { "Jack", "Adam", "David", "Rich", "Roger", "Nick", "Jill", "Jane" }; // 8
   sort( A, 13 );
   sort( D, 10 );
   sort( N, 8 );
   prnArray( A, 13 ) << endl;
   prnArray( D, 10 ) << endl;
   prnArray( N, 8 ) << endl;
   return 0;
}