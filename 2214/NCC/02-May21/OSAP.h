#ifndef FIN_OSAP_H_
#define FIN_OSAP_H_
#include "Student.h"  // a big no no
// never include a header file inside 
// another header file UNLESS YOU HAVE TO

namespace fin {
   struct Student {
      int stno;
      char name[41];
      double balance;
      int semeter;
   };
   struct Loan {
      double payment;
      int no_ofPayments;
   };
}

#endif