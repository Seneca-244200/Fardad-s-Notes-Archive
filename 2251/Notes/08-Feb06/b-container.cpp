#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container( int value = 0 ) {
      m_value = value;
   }
   void add( int value ) {
      m_value += value;
   }
   void display( )const {
       cout << "C-" << m_value;
   }
};


int main( ) {
   Container C;
   C.display( );
   cout << endl;
   C.add( 10 );
   C.display( );
   cout << endl;

   return 0;
}