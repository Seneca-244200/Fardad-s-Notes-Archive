#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;

template<typename type>
void prnArray( Array<type> D ) {
   size_t i;
   cout << "printing " << D.size( ) << " elements:\n";
   for ( i = 0; i < D.size( ); i++ ) {
      if ( i ) cout << ",";
      cout << D[i];
   }
   cout << endl;
}

int main( ) {
   Array<double> D( 5 );
   Array<int> I( 10 ), J( 100 );
   size_t i;
   for ( i = 0; i < 7; i++ ) {
      D[i] = (i + 10) * 1.1;
   }
   prnArray( D );
   for ( i = 0; i < 7; i++ ) {
      I[i] = (static_cast<int>(i) + 10);
   }
   J = I;
   prnArray( J );
   cout << "The address of I is: " << &I << endl;
   cout << "The address of J is: " << &J << endl;
   cout << "The address of I is: " << reinterpret_cast<unsigned long long>(&I) << endl;
   cout << "The address of J is: " << reinterpret_cast<unsigned long long>(&J) << endl;
   return 0;
}