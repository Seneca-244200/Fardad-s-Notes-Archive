#include <iostream>
#include "VInt.h"
using namespace std;
using namespace seneca;

void showRange( const VInt& V ) {
   cout << V[0] << "<=" << V[1] << "<=" << V[2] << endl;

}

int main( ) {
   cout << "Jun02 - OOP244 NAA" << endl;
   VInt a( 20 ), b( 10, -500, 500 ), c;

   //b.operator+=( a ); // potato
   cout << "a: ";
   a.display( ) << endl;
   cout << "b: ";
   b.display( ) << endl;
   cout << "c: ";
   c.display( ) << endl;
   cout << "--------------\n"
      "c = b += a;" << endl;
   c = b += a;   // potaato

   cout << "a: ";
   a.display( ) << endl;
   cout << "b: ";
   b.display( ) << endl;
   cout << "c: ";
   c.display( ) << endl;
   cout << "--------------\n"
      "c = b + a;" << endl;
   c = b + a;

   cout << "a: ";
   a.display( ) << endl;
   cout << "b: ";
   b.display( ) << endl;
   cout << "c: ";
   c.display( ) << endl;
   cout << "--------------" << endl;

 //if ( b.operator<( c ) ) {
   if ( b< c ) {
      b.display( ) << " is less than ";
      c.display( ) << endl;
   }

   showRange( b ); // showRange(const VInt& V = b);

   b[0] = -100;
   b[2] = 100;

   cout << "b: ";
   showRange( b );
   cout << "c: ";
   showRange( c );

   c = ++b;

   cout << "b: ";
   showRange( b );
   cout << "c: ";
   showRange( c );

   cout << "b has the value ";
   ~b << endl;
   cout << endl << endl;

   c = 40;

   cout << "b: ";
   showRange( b );
   cout << "c: ";
   showRange( c );
   c = b++; // postfix overload with int arg will be called
   cout << "b: ";
   showRange( b );
   cout << "c: ";
   showRange( c );

   return 0;
}
