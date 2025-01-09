#include <iostream>
#include <fstream>
#include "Name.h"
using namespace std;
using namespace seneca;
Name readName( ifstream& f ) {
   Name N = "No Name";
   f >> N;
   return N;
}
void printName( int row, Name N ) {
   cout << row << "- " << N << endl;
}
int main( ) {
   Name N;
   ifstream file( "names.csv" );
   int r = 1;
   while ( file ) {
      N = readName(file);
      if ( file && N) printName( r++, N );
   }
   return 0;
}