//TEAM A
// accounting.cpp and accounting.h
// #including "loan.h"
namespace acc {
   struct Student {
      int stNo;
      int bankAccount;
      char bankInfo[81];
      double feesDue;
      Loan stLoan;
   };
}

//TEAM B
// admin.cpp and admin.h
namespace adm {
   const int MAX_NO_OF_SEMESTERS = 8;
   struct Student {
      int stNo;
      int semester;
      double GPA;
   };
}
//TEAM C
// loan.cpp and loan.h
namespace acc {
   struct Loan {
      double amountDue;
      double monthlyPayement;
   };
}

// main.cpp  focuses more on the accounting part of the system
// #include "admin.h"
// #include "accounting.h"
using namespace acc;  // it is fobidden to use "using namespace" in a header file.
using namespace adm;  // if two namespaces are used, then the common types must be qualified by namespace name and ::

int main() {
   acc::Student acc_st;
   adm::Student adm_st;
   Loan loan;
   int max = adm::MAX_NO_OF_SEMESTERS;
   return 0;
}





