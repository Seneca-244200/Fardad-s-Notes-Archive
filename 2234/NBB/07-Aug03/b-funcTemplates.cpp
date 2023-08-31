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

template <typename T>
T add( T a, T b ) {
   return a + b;
}

template <typename T, typename retType>
retType addAndConvert( retType a, T b ) {
   return a + retType( b );
}


/* //overloaeded 
int add( int a, int b ) {
   return a + b;
}
double add( double l, double m ) {
   return l + m;
}
Container add( Container c1, Container c2 ) {
   return c1 + c2;
}
Mark add( Mark m1, Mark m2 ) {
   return m1 + m2;
}

*/
int main( ) {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 10, j = 20, k;
   Mark m = 50, n{ 80 }, o{};
   Container c = 100, d{ 200 }, e{};
   k = add( i, j );
   cout << k << endl;
   z = add( x, y );
   cout << z << endl;
   o = add( m, n );
   cout << o << endl;
   e = add( c, d );
   cout << e << endl;

   o = addAndConvert( n, 10 );
   cout << o << endl;

   m = add<Mark>( n, 10 );// enforcing creation of a specific version of the function template
   cout << m << endl;
   return 0;
}

