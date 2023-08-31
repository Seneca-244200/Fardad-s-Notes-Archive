#include <iostream>
#include "Utils.h"
using namespace sdds;
using namespace std;


void addTo( int& together, int a, int b ) {
   together = a + b;
}
void addTo( char*& together, char* str1, char* str2 ) {
   size_t len = ut.strlen( str1 ) + ut.strlen( str2 );
   together = new char[len + 1];
   ut.strcpy( together, str1 );
   ut.strcat( together, str2 );
}

int main( ) {
   int b{};
   int i = 10;
   int j = 20;
   char* both{};
   char n[] = "Fred";
   char s[] = "Soley";
   addTo( both, n, s );
   cout << both << endl;
   delete[] both;
   addTo( b, i, j );
   cout << b;
   return 0;
}