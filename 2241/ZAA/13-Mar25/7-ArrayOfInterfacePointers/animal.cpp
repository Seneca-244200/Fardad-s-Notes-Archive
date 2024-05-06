#include <iostream>
#include "animal.h"
using namespace std;
namespace sdds{
   std::ostream& operator<<( std::ostream& ostr, const Animal& p ) {
      p.sound( );
      return ostr;
   }
}