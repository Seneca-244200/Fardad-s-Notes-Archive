#include <iostream>
using namespace std;
class Displayable {
public:
   virtual ostream& display( ostream& os )const = 0;
};
ostream& operator<<( ostream& ostr, const Displayable& D ) {
   return D.display( ostr );
}
class Container : public Displayable {
   int m_data;
public:
   //Container( const Container& ) = delete;
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

/// <summary>
/// Display the sum of the two types and returns them.<br/>
/// - Needs Copying<br/>
/// - insertion into ostream (operator&lt;&lt;) <br/>
/// - Needs operator+ for the type
/// </summary>
/// <typeparam name="Hoohoo">The type</typeparam>
/// <param name="f">left argument</param>
/// <param name="s">right argument</param>
/// <returns>the sum with type Hoohoo</returns>
template <typename Hoohoo>
Hoohoo displaySum( Hoohoo f, Hoohoo s ) {
   Hoohoo sum = f + s;
   cout << "sum: " << sum << endl;
   return sum;
}


int main( ) {
   int a = 10, b = 20, c;
   double x = 10.1, y = 20.2, z;
   Container C = 100, D = 200, E;
   Mark M = 65, N = 70, O;
   cout.precision( 2 );
   cout.setf( ios::fixed );
   c = displaySum( a, b );
   cout << "displaySum func returned: " << c << endl;
   z = displaySum( x, y );
   cout << "displaySum func returned: " << z << endl;
   E = displaySum( C, D );  //display(Container f = C, Containrt s = D)
   cout << "displaySum func returned: " << E << endl;

   O = displaySum( M, N );  //display(Mark f = C, Mark s = D)
   cout << "displaySum func returned: " << O << endl;
   return 0;
}