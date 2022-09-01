// you are to create and implement all your code in a namespace called "sdds"
// unless instructed otherwise. 

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

// main.cpp
// #include "admin.h"
// #include "accounting.h"

int main() {
   acc::Student acc_st;
   adm::Student adm_st;

   
   return 0;
}





