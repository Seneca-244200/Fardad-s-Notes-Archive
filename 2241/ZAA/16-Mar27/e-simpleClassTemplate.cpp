#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;


class Displayable {
public:
   virtual ostream& display( ostream& os )const = 0;
   virtual ~Displayable( ) = default;
};
ostream& operator<<( ostream& ostr, const Displayable& D ) {
   return D.display( ostr );
}
class Container : public Displayable {
   int m_data;
public:
   Container( int data = 0 ) :m_data{ data } { };
   Container operator+( const Container& Ro )const { // binary operator+ with not side effect
      return Container( m_data + Ro.m_data );
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
   Mark operator+( const Mark& Ro )const {
      return Mark( (m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data );
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};

template<typename type>
struct Possession {
   char m_owner[128]{};
   type m_possession;
};


int main( ) {
   Possession<Mark> test;

   Possession<double> Account;

   return 0;
}