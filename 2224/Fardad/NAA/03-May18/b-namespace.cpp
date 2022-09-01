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
   const int MAX_NO_OF_SEMESTERS = 8;
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


// main.cpp   // focuses mainly accounting
// #include "Accounting.h"
// #include "Admin.h"

// namespaces are created in modules (both in cpp and .h files) and used in the main module

using namespace acc;  // it is forbidden to use "using namespace" in a header file, 
                      //    if any name is needed in a namespace it must be quilfied manually using ":"
using namespace adm;
int main() {
   adm::Student ad_st;
   acc::Student ac_st;
   Loan loan;
   int i = adm::MAX_NO_OF_SEMESTERS;
   return 0;
}