#ifndef SDDS_SCOPE_H
#define SDDS_SCOPE_H
namespace sdds {
   struct Scope { // class scope
      char title[21]; // << -- class scope
      int range;      // << -- class scope
      void print(char fill = '-');
      void read();
   };
   extern const double PI;
   extern bool scopeFlag;
}


#endif // !SDDS_SCOPE_H

