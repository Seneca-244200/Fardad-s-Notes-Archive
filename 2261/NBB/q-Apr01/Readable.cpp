#include <iostream>
#include "Readable.h"

std::istream& operator>>(std::istream& istr, Readable& N) {
   N.read(istr);
   return istr;
}
