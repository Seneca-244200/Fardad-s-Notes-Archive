#include "IOAble.h"
namespace sdds {
   std::ostream& operator<<( std::ostream& leftOperand, const IOAble& rightOperand ) {
      return rightOperand.write( leftOperand );
   }
   std::istream& operator>>( std::istream& leftOperand, IOAble& rightOperand ) {
      return rightOperand.read( leftOperand );
   }
}