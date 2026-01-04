#include <iostream>
using namespace std;
int main( ) {
   cout << "Jun13 - OOP244NAA" << endl;
   int val = 10;
   char name[] = "Joe";

   cout << "*";
   cout << val << "*" << endl;

   cout << "*";
   cout.width( 8 ); // this only effects the next cout
   cout << val << "*" << endl;

   cout << "*";
   cout.width( 8 ); // this only effects the next cout
   cout.setf( ios::left ); // prints all the outputs left justified
   cout << val << "*" << endl;
   cout.unsetf( ios::left );// removes the left justification


   cout << "*";
   cout.setf( ios::right );
   cout.width( 8 ); // this only effects the next cout
   cout << name << "*" << endl;
   cout.unsetf( ios::right );

   cout << "*";
   cout.setf( ios::right );
   cout.width( 8 ); // this only effects the next cout
   cout.fill( '0' );
   cout << val << "*" << endl;
   cout.unsetf( ios::right );

   cout << "*";
   cout.setf( ios::right );
   cout.width( 8 ); // this only effects the next cout
   cout.fill( '@' );// stays untill you set it to something else
   cout << val << "*" << endl;
   cout.unsetf( ios::right );

   cout << "*";
   cout.setf( ios::right );
   cout.fill( ' ' ); // to remove the fill from '@'
   cout.width( 8 ); // this only effects the next cout
   cout << name << "*" << endl;
   cout.unsetf( ios::right );



   return 0;
}