#include <iostream>
#include "FloatArray.h"
using namespace std;
using namespace sdds;
void showArray( const FloatArray& ar );
FloatArray getArray( size_t size );
void thisWillWork( );
void thisWillcrash( );


int main( ) {
   thisWillWork( );
   return 0;
}


void showArray( const FloatArray& ar ) {
   for ( size_t i = 0; i < ar.size( ); i++ ) {
      cout << ar[i ];
      if(i != ar.size()-1 )  cout << ", ";
   }
   cout << endl;
}
FloatArray getArray(size_t size ) {
   FloatArray f( 3 );
   cout << "Enter Floats>" << endl;
   size_t i = 0;
   for ( ; i < f.size( ); i++ ) {
      cout << (i + 1) << ": ";
      //      f[i] = (i + 1) * 1.23f;
      cin >> f[i+2];
   }
   return f;
}
void thisWillWork( ) {
   FloatArray f( 3 );
   cout << "Enter Floats>" << endl;
   size_t i = 0;
   for ( ; i < f.size( ); i++ ) {
      cout << (i + 1) << ": ";
//      f[i] = (i + 1) * 1.23f;
      cin >> f[i];
   }
   cin >> f[i+2];

   showArray( f );
}
void thisWillcrash( ) {
   FloatArray f( 100 );
   f = getArray( 3 );// will call copy and assignment
   cin >> f[3];
   showArray( f );
}