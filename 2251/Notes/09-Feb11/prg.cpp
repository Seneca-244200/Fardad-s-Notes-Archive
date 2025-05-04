#include <iostream>
#include "Container.h"
using namespace std;
using namespace seneca;
int main( ) {
   Container A, B( 30 );

   // Container Container::operator+(int value);
   A = B + 3;
   // A = B.operator+(3)


   return 0;
}