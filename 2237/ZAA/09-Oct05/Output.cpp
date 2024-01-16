#include <cstdio>
#include "Output.h"
using namespace std;
namespace sdds {
   Output& Output::operator<<( int value ) {
      printf( "%d", value );
      return *this;
   }
   Output& Output::operator<<( double value ) {
      printf( "%lf", value );
      return *this;
   }
   Output& Output::operator<<( const char* cStr ) {
      printf( cStr );
      return *this;
   }
}
