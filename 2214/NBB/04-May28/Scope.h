#ifndef SDDS_SCOPE_H
#define SDDS_SCOPE_H
namespace sdds {
   struct Scope { // class Scope
      char title[21];
      int range;
      void print();
      void read();
   };
   extern bool scopeFlag; // true global variable

}


#endif // !SDDS_SCOPE_H

