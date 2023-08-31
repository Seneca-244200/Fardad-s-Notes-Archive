#include <iostream>
#include "Utils.h"
#include "sort.h"
using namespace std;
using namespace sdds;
class Name {
   char* m_value{};
public:
   Name( const char* value = "" ) {
      ut.aloCpy( m_value, value );;
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
   bool operator>( const Mark& M )const {
      return m_data > M.m_data;
   }
   bool operator<( const Mark& M )const {
      return m_data < M.m_data;
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Mark& c ) {
   return c.display( os );
}


template <typename hoohoo>
hoohoo add( hoohoo a1, hoohoo a2 ) {
   return a1 + a2;
}




/// <summary>
/// io: insertion operator for ostream must be defined
/// </summary>
/// <typeparam name="type"></typeparam>
/// <param name="array"></param>
/// <param name="size"></param>
/// <param name="ostr"></param>
/// <returns></returns>
template <typename T>
std::ostream& prnArray( const T* array, size_t size, std::ostream& ostr = std::cout ) {
   for ( size_t i = 0; i < size; i++ ) {
      ostr << array[i]; // io
      if ( i != size - 1 ) ostr << ", ";
   }
   return ostr;
}

int main( ) {
   int A[13] = { 1,5,4,3,78,9,4,6,4,6,4,6,7 };
   double D[10] = { 1.1, 3.3, 5.5, 3.3, 8.8, 4.4, 2.2,1.1,3.34, 56.66 };
   Mark M[10]{ 60,50,60,70,60,80,77,80,88,77 };
   Name N[] = { "Jack", "Adam", "David", "Rich", "Roger", "Nick", "Jill", "Jane" }; // 8

   sort( A, 13 );
   sort( D, 10 );
   sort( M, 10 );
   sort( N, 8 , false);
   prnArray( A, 13 ) << endl;
   prnArray( D, 10 ) << endl;
   prnArray( M, 10 ) << endl;
   prnArray( N, 8 ) << endl;
   return 0;
}