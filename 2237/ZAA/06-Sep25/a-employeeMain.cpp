#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Good Morning OOP244 ZAA" << endl;
   Employee X( "John Doe" );
   {
      Employee E[2]; // the init is called throug the construction action
      //E.init( ); is private
      E[0].set( "Fred Soley", 12345, 30000.25 );
      E[0].display( );
      E[1].set( "Homer Simpson", 32323, 123654.00 );
      E[1].display( );
   }
   X.display( );


   cout << "I am out of the no reason scope!" << endl;
   return 0;
}