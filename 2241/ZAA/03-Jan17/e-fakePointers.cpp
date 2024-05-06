#include <iostream>
#include "pointers.h"
using namespace std;

int main( ) {
   double x = 23.45;
   double pointer p = addressOf x;
   cout <<"x: " <<  x << endl;
   targetOf p = 12.34;
   for ( size_t i = 0; i < 10; i++ ) {
      cout << "p: " << unsigned( p ) << endl;
   }
   cout << "x: " << x << endl;
   return 0;
}

