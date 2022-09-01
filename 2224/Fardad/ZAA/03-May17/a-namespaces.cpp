// accounting.cpp and account.h

namespace acc {
// #include "loan.h"
   struct Student {
      int stNo;
      Loan osapLoan;
      int bankAccounNo;
      char bankName[61];
   };
}

// admin.cpp and admin.h:

namespace adm {
   struct Student {
      int stNo;
      int semester;
      double gpa;
   };
}
// loan.cpp laon.h
namespace acc {
   struct Loan {
      double amount;
      double payments;
      int periods;
   };
};



// main.cpp
//#include "account.h"
//#include "admin.h"

// prototype:
void foo();
using namespace acc;  // You are not allowed to use "using namespace" in a header file.
                      // only use in a cpp file.
int main() {  // focus of this main is mostly accounting
   Student acc_st;
   Loan loan;
   adm::Student adm_st;
   foo();
   return 0;
}

void foo() {


}