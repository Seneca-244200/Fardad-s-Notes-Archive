#include <iostream>
using namespace std;
class Money {
   double m_value{};
public:
   Money( double value ) {
      m_value = value;
   }
   ostream& display( ostream& ostr = cout )const {
      ostr.setf( ios::fixed );
      ostr.precision( 2 );
      ostr << m_value;
      ostr.unsetf( ios::fixed );
      return ostr;
   }
};

ostream& operator<<(ostream & ostr, const Money & M) {
   return M.display( ostr );
}

int main( ) {
   Money M = 1234.56789;
   cout << "[";
   cout.width( 10 );
   cout.fill( '0' );
   cout << M << "]" << endl;
   cout.fill( ' ' );
   return 0;
}