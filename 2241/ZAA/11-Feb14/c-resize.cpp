#include <iostream>
#include <fstream>
#include "Str.h"
#include "Utils.h"
using namespace std;
using namespace seneca;
void prnCsv( const Str& S ) {
   for ( size_t i = 0; i < size_t( S )+10; i++) {
      if ( i != 0 ) cout << ",";
      cout << S[i];
   }
}
int main( ) {
   Str name = "Homer";
   name[6] = 'X';
   for ( size_t i = 6; i < 1000; i++ ) {
      name[i] = '@';
   }
   cout << name << endl;


   return 0;
}
