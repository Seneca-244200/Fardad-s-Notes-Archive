#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "MyStr.h"
using namespace std;
using namespace seneca;
void printStr( const MyStr&  S ) {
   for ( size_t i = 0; i < size_t( S ); i++ ) {
      cout << S[i];
   }
   cout << endl;
}
int main( ) {
   MyStr name = "Fred";
   printStr( name );
   for ( size_t i = 0; i < size_t( name ); i++ ) {
      if ( i != 0 ) cout.put( ',' );
      cout << name[i];
   }
   cout << endl;
   // this has a bug, fix it. 
   name[6] = 'X';
   cout << name << endl;
   return 0;
}