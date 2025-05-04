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
   Container& reduce( int value ) {
      m_value -= value;
      return *this;
   }
   Container& set( int value ) {
      m_value = value;
      return *this;
   }
   ostream& display( )const {
      return cout << "C-" << m_value;
   }
};


int main( ) {
   Container C;
   C.display( ) << endl;
   C.add( 10 );
   C.display( ) << endl;
   C.reduce( 5 );
   C.display( );
   cout << " after reducing " << endl;
   C.set( 200 ).add( 10 ).display( ) << " Wow!" <<  endl;
   cout << "The container has ";
   C.display( ) << " in it!" << endl;
   return 0;
}