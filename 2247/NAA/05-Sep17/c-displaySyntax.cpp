#include <iostream>
#include "ID.h"
using namespace std;
using namespace seneca;
int main( ) {
   ID ids[] = { "Fardad", "Jack", {"Joe", 12345}, "Jin" };
   for ( size_t i = 0; i < 4; i++ ) {
      ids[i].display( ) << endl;
   }
   ids[1].display( ) << " - ";
   ids[3].display( ) << endl;
   return 0;
}