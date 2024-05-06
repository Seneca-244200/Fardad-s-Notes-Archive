#include "animal.h"
namespace sdds {
   std::ostream& operator<<( std::ostream& ostr, Animal& A ) {
      A.act( );
      A.move( );
      return ostr;
   }
}