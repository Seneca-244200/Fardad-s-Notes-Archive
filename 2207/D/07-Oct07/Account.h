#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
#include <iostream>
// not allowed to use "using namespace std" here
namespace sdds {
   class Account {
      int m_number;
      double m_balance;
      bool lastActionWasSuccessful;
      double getBalance()const;
      int getNumber()const;
      void setEmpty();
   public:
      // because default constructor is removed
      // you can not create an account that is empty
//      Account();
      // creates an account with 100 Dollars deposit
      Account(int number);
      Account(int number, int balance);
      void clear();
      bool failed()const;
      bool isEmpty()const;
      void open(int number, double balance);
      std::ostream& display()const;
      Account& depost(double value);
      Account& withdraw(double value);
      double close();
      ~Account();
   };

}
#endif // !SDDS_ACCOUNT_H
