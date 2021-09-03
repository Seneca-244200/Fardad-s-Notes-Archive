#ifndef FIN_OSAP_H_
#define FIN_OSAP_H_


namespace fin {
   struct Student {
      int stno;
      char name[41];
      double outStandingLoan;
      double MonthlyPayment;
      int noOfPaymentsDue;
      void Pay();
      void PayOff();
   };
   struct Loan {
      int duration;
      double amount;
   };
}

#endif