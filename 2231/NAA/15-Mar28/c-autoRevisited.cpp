#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Mark {
   int m_data;
public:
   Mark( int data = 0 ) : m_data{ data } {
   }
   Mark operator+( const Mark& Ro )const {
      return Mark((m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data) ;
   }
   ostream& display( ostream& os )const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<( ostream& os, const Mark& c ) {
   return c.display( os );
}

int main( ) {
   Mark m = 50, n{ 30 };
   auto sum = m + n;
   cout << sum << endl;
   return 0;
}