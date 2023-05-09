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
   Mark operator+( const Mark& Ro )const {
      return Mark( (m_data + Ro.m_data > 100) ? 100: m_data + Ro.m_data );
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Mark& c ) {
   return c.display( os );
}

/// <summary>
/// returns the sum
/// </summary>
/// <typeparam name="type">Must supprot Copying and operator+</typeparam>
/// <param name="a">a type object</param>
/// <param name="b">a type object</param>
/// <returns>the sum of two using operator+</returns>
template <typename type>
type sum( type a, type b ) {
   return a + b;
}


int main( ) {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 10, j = 20, k;
   Mark m = 50, n{ 80 }, o{};
   Container c = 100, d{ 200 }, e{};
   k = sum( i, j );
   cout << k << endl;
   z = sum( x, y );
   cout << z << endl;
   o = sum( m, n );
   cout << o << endl;
   e = sum( c, d );
   cout << e << endl;
   return 0;
}