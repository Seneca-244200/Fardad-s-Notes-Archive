#include <iostream>
#include <fstream>
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
   ofstream mfile( "money.txt" );
   Money M = 1234.56789;
   mfile << "[";
   mfile.width( 10 );
   mfile.fill( '0' );
   mfile << M << "]" << endl;
   mfile.fill( ' ' );
   return 0;
}