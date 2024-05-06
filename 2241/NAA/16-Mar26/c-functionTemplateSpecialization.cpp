#include <iostream>
#include "Utils.h" 
using namespace seneca;
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


/// <summary>
/// 
/// </summary>
/// <typeparam name="type">Must support + with no side-effect and rule of three</typeparam>
/// <param name="f"></param>
/// <param name="s"></param>
/// <returns></returns>
template<typename type>
type displaySum( type f, type s ) {
   type sum = f + s;
   cout << "sum: " << sum << endl;
   return sum;
}

template <>
char* displaySum<char*>( char* f, char* s ) {
   char* res = nullptr;
   if ( f && s ) {
      res = new char[ut.strlen( f ) + ut.strlen( s ) + 1];
      ut.strcpy( res, f );
      ut.strcat( res, s );
   }
   cout << "sum: " << (res ? res : "") << endl;
   return res;
}
int main( ) {
   char* res;
   char s1[20] = "Fred";
   char s2[20] = "Soley";
   int a = 10, b = 20;
   double c;
   c = displaySum<double>( a, b );
   cout << "displaySum func returned: " << c << endl;
   res = displaySum( s1, s2 );
   cout << "displaySum func returned: " << res << endl;
   delete[] res;
   return 0;
}