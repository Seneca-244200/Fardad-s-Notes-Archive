#include <iostream>
using namespace std;
#include "myTemplates.h"
class Displayable {
public:
   virtual ostream& display( ostream& os )const = 0;
};
ostream& operator<<( ostream& ostr, const Displayable& D ) {
   return D.display( ostr );
}
class Container : public Displayable {
   double m_data;
public:
   Container( double data = 0 ) :m_data{ data } { };
   Container operator+( const Container& Ro )const { // binary operator+ with not side effect
      return Container( m_data + Ro.m_data );
   }
   bool operator==( double value )const {
      return m_data - value > -0.001 && m_data - value < 0.001;
   }
   ostream& display( ostream& os )const {
      return os << "Cn: " << m_data;
   }
};
class Mark : public Displayable {
   int m_data;
public:
   Mark( int data = 0 ) : m_data{ data } {
   }
   bool operator==( int value )const {
      return m_data == value;
   }
   Mark operator+( const Mark& Ro )const {
      return Mark( (m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data );
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};


int main( ) {
   int ia[]{ 1, 3,3,4,3,5,6,3,8,3 };
   Mark M[]{
      Mark( 50 ),
      Mark( 60 ),
      Mark( 34 ),
      Mark( 89 ),
      Mark( 60 ),
      Mark( 33 ),
      Mark( 99 ),
      Mark( 100 ),
      Mark( 60 )
   };
   Container ca[]{
   Container( 100.1 ),
   Container( 200.25 ),
   Container( 100.1 ),
   Container( 5.1 ),
   Container( 3.12 ),
   Container( 100.1 ),
   Container( 234.1 ),
   Container( 100.1 )
   };
   size_t mcnt{};
   mcnt = count( M, 9, 60 );
   cout << "there are " << mcnt << " 60s in the following: " << endl;
   display( M, 9 );
   mcnt = count( ia, 10, 3 );
   cout << "there are " << mcnt << " 60s in the following: " << endl;
   display( ia, 9 );
   mcnt = count( ca, 8, 100.1 );
   cout << "there are " << mcnt << " 60s in the following: " << endl;
   display( ca, 8 );
   return 0;
}