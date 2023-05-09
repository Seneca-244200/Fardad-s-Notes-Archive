#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

class Container {
   int m_data;
public:
   Container( int data = 0 ) :m_data( data ) {
   }
   Container operator+( const Container& Ro ) {
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
   /* Mark operator+(const Mark& Ro) {
       return Mark(m_data + Ro.m_data);
    }*/
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Mark& c ) {
   return c.display( os );
}

template <typename type>
type sum( const type& a, const type& b ) {
   return a + b;
}

int main( ) {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 1, j{ 2 }, k{};
   Mark m = 50, n{ 30 }, o{};
   Container c = 100, d{ 200 }, e{};
   z = sum( x, y );
   cout << z << endl;
   k = sum( i, j );
   cout << k << endl;
   o = sum( m, n );
   cout << o << endl;
   e = sum( c, d );
   cout << e << endl;
   return 0;
}