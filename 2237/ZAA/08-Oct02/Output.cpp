#include <cstdio>
#include "Output.h"
using namespace std;
namespace sdds {
   Output& Output::print( int value ) {
      printf( "%d", value );
      return *this;
   }
   Output& Output::print( double value ) {
      printf( "%lf", value );
      return *this;
   }
   Output& Output::print( const char* cStr ) {
      printf( cStr );
      return *this;
   }
}
