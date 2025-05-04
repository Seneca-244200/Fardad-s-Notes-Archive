#include "Printable.h"
namespace seneca {
   std::ostream& operator<<( std::ostream& ostr, const Printable& P ) {
      return P.print( ostr );
   }
}