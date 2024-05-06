#include <iostream>
using namespace std;
class Base {
   int m_b{};
public:
   Base( ) {
      cout << "Base Default";
   }
   Base( int b ) :m_b{ b } {
      cout << "Base Constr(" << b << ")";
   }
   Base( const Base& Bs ) {
      cout << "Base Copy(" << (m_b = Bs.m_b-1) << ")";
   }
   Base& operator=( const Base& Bs ) {
      cout << "Base Copy Assign(" << m_b << " to " << Bs.m_b+1 << ")";
      if ( this != &Bs ) {
         m_b = Bs.m_b+1;
      }
      return *this;
   }
   Base& operator=( int b ) {
      cout << "Base Assign(" << m_b << " to " << b << ")";
      m_b = b;
      return *this;
   }
   virtual ~Base( ) {
      cout << "Base Dest(" << m_b << ")";
   }
   ostream& write( ostream& ostr = cout )const {
      return ostr << "Base(" << m_b << ")";
   }
};
ostream& operator<<( ostream& ostr, const Base& B ) {
   return B.write( ostr );
}
void nl( ) {
   cout << endl;
}
int main( ) {
   Base B = 123;
   nl( );
   Base C;
   nl( );
   C = B;
   nl( );
   cout << B << endl;
   cout << C << endl;
   return 0;
}