#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container( int value = 0 ) {
      m_value = value;
   }
   Container& add( int value ) {
      m_value += value;
      return *this;
   }
   Container add( const Container& other) {
      Container ret( m_value + other.m_value );
      return ret; // never return reference of a local variable
   }
   Container& reduce( int value ) {
      m_value -= value;
      return *this;
   }
   Container& set( int value ) {
      m_value = value;
      return *this;
   }
   ostream& display( )const {
      return cout << "Cnt-" << m_value;
   }
};


int main( ) {
   Container C, B( 10 ), A( 20 );
   C.display( ) << endl;
   A = C.add( 10 );
   C.display( ) << endl;
   C.reduce( 5 );
   C.display( );
   cout << " after reducing " << endl;
   C.set( 200 ).add( 10 ).display( ) << " Wow!" <<  endl;
   cout << "The container has ";
   C.display( ) << " in it!" << endl;
   C = B.add( A );
   C.display( ) << " is the sum of ";
   B.display( ) << " and ";
   A.display( ) << endl;
   return 0;
}