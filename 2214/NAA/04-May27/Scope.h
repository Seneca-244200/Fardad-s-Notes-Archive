#ifndef SDDS_SCOPE_H
#define SDDS_SCOPE_H
namespace sdds {

   struct Record {
      int num;    // class scope
      char title[41]; // class scope
      void print();
   };


   extern int myGlobalVar; // look kind of like a prototype for a vairable to make it global
}


#endif // !SDDS_SCOPE_H

