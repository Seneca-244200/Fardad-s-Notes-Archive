#include <iostream>
using namespace std;
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

template <typename hoohoo>
hoohoo displaySum( hoohoo f, hoohoo s ) {
   hoohoo sum = f + s;
   cout << "sum: " << sum << endl;
   return sum;
}

template <>
Mark displaySum<Mark>( Mark f, Mark s ) {
   Mark sum = f + s;
   cout << "Total Mark: " << sum << endl;
   return sum;
}

int main( ) {
   int a = 10, b = 20, c;
   double x = 10.1, y = 20.2, z;
   Container C = 100, D = 200, E;
   Mark M = 65, N = 70, O;
   cout << "15-Mar25 OOP244NAA Templates" << endl;
   cout.precision( 2 );
   cout.setf( ios::fixed );
   c = displaySum( a, b );
   cout << "displaySum func returned: " << c << endl;
   z = displaySum( x, y );

   c = displaySum<int>( x, b );
   cout << "displaySum func returned: " << c << endl;


   cout << "displaySum func returned: " << z << endl;
   E = displaySum( C, D );  //display(Container f = C, Containrt s = D)
   cout << "displaySum func returned: " << E << endl;

   O = displaySum( M, N );  //display(Mark f = C, Mark s = D)
   cout << "displaySum func returned: " << O << endl;
   return 0;
}