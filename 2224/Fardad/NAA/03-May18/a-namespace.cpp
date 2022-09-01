// Team A
// Accounting
// Accounting.cpp , and Accounting.h

// #include "loan.h"
namespace acc {
   struct Student {
      int stNo;
      int bankAccount;
      char bankInfo[81];
      double feesDue;
      Loan loan;
   };
}


// Team B
// Administration
// Admin.cpp , and Admin.h

namespace adm {
   struct Student {
      int stNo;
      int semester;
      double GPA;
   };
}

// Team C
// Osap Loan
// loan.cpp and loan.h
namespace acc {
   struct Loan {
      double amountDue;
      double monthlyPayement;
   };
}


// main.cpp
// #include "Accounting.h"
// #include "Admin.h"

int main() {
   adm::Student am_st;
   acc::Student ac_st;
   acc::Loan loan;
   

   return 0;
}