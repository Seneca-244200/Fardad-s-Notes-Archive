#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
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
   bool operator<( const Mark& M )const {
      return m_data < M.m_data;
   }
   bool operator>( const Mark& M )const {
      return m_data > M.m_data;
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


class Name {
   char* m_value{};
public:
   Name( const char* value = "" ) {
      ut.aloCpy(m_value, value );
   }
   Name( const Name& N ) {
      operator=( N );
   }
   Name& operator=( const Name& N ) {
      if ( this != &N ) {
         delete[] m_value;
         ut.aloCpy(m_value, N.m_value );
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
//v



/// <summary>
/// T must support rule of three
/// </summary>
/// <typeparam name="T">object type</typeparam>
/// <param name="a">address of object to be swapped</param>
/// <param name="b">address of object to be swapped</param>
template <typename T>
void swap( T* a, T* b );
/*
Type A;
Type B = A;
*/

template <typename T>
void swap( T* a, T* b ) {
   T temp = *a;
   *a = *b;
   *b = temp;
}


/// <summary>
/// T > T and t < T must be defined
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="array"></param>
/// <param name="size"></param>
/// <param name="Ascend"></param>
template <typename T>
void sort(T array[], size_t size, bool Ascend = true ) {
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


template <typename type>
std::ostream& prnArray( const type array[], size_t size, std::ostream& ostr=std::cout ) {
   for ( size_t i = 0; i < size; i++ ) {
      ostr << array[i];
      if ( i != size - 1 ) ostr << ", ";
   }
   return ostr;
}

int main( ) {
   int A[13] = { 1,5,4,3,78,9,4,6,4,6,4,6,7 };
   double D[10] = { 1.1, 3.3, 5.5, 3.3, 8.8, 4.4, 2.2,1.1,3.34, 56.66 };
   Name N[] = { "Jack", "Adam", "David", "Rich", "Roger", "Nick", "Jill", "Jane" }; // 8
   Mark M[] = { 50,88,45,32,100 }; // 5
   sort( A, 13 );
   sort( D, 10, false );
   sort( N, 8 );
   sort( M, 5 );
   prnArray( A, 13 ) << endl;
   prnArray( D, 10 ) << endl;
   prnArray( N, 8 ) << endl;
   prnArray( M, 5 ) << endl;
   return 0;
}

/*
D:\Users\fardad\Documents\Seneca\244200\OOP244-NAA-NBB-ZAA-Notes\ZAA\08-Aug02\prg.cpp(94,27): 
error C2676: binary '>': 'T' does not define this operator or a conversion to a type acceptable
to the predefined operator
1>        with
1>        [
1>            T=Mark
1>        ]


*/
