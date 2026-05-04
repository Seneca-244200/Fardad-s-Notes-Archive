#ifndef SENECA_IMACHINE_H
#define SENECA_IMACHINE_H

#include <iostream>

namespace seneca {

   class iMachine {
   public:
      virtual void display(std::ostream& ostr) const = 0;
      virtual void operate() const = 0;
      virtual ~iMachine() {
      }
   };

   std::ostream& operator<<(std::ostream& ostr, const iMachine& M);

}

#endif