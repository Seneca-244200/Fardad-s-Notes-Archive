#ifndef SENECA_PRINTABLE_H
#define SENECA_PRINTABLE_H
#include <iostream>
namespace seneca {
   class Printable {
   public:
      virtual std::ostream& print( std::ostream& ostr )const = 0;
      virtual ~Printable( ) = default;
   };
   std::ostream& operator<<( std::ostream& ostr, const Printable& P );
}

#endif // !SENECA_PRINTABLE_H


