#include <iostream>
#include <fstream>
#include "TitledName.h"
using namespace std;
using namespace seneca;
TitledName readName( ifstream& f ) {
   TitledName N ("NoTitle", "No Name");
   f >> N;
   return N;
}
void printName( int row, TitledName N ) {
   cout << row << "- " << N << endl;
}
int main( ) {
   TitledName N;
   ifstream file( "tnames.csv" );
   int r = 1;
   while ( file ) {
      N = readName( file );
      if ( file && N ) printName( r++, N );
   }
   return 0;
}