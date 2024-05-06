#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;
using namespace seneca;
class Printable {
public:
   virtual ostream& print( ostream& ostr = cout )const = 0;
   virtual ~Printable( ) = default;
};
ostream& operator<<( ostream& ostr, const Printable& P ) {
   return P.print( ostr );
}
class Password :public Printable {
   char m_password[17]{ };
   size_t m_noOfPrints{ };
public:
   Password( const char* password ) {
      ut.strncpy( m_password, password, 16 );
   }
   ostream& print( ostream& ostr = cout )const {
      size_t* nop = const_cast<size_t*>(&m_noOfPrints);
      (*nop)++;
      return ostr << m_password;
   }
   size_t no_of_prints( )const {
      return m_noOfPrints;
   }
};

int main( ) {
   Password P( "Secret" );
   for ( size_t i = 0; i < 10; i++ ) {
      cout << P << endl;
   }
   cout << "The password was printed " << P.no_of_prints( ) << " times" << endl;

   return 0;
}