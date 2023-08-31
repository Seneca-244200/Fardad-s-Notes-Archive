#include <iostream>
#include "Array.h"
using namespace std;
using namespace sdds;


int main( ) {
   Array<double> D(20);
   Array<int> I(30);
   size_t i{};
   for ( ; i < D.size(); i++ ) {
      D[i] = (i + 1) * 1.1;
   }
  
   return 0;
}

