#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
#include <iostream>
// not allowed to use "using namespace..."
namespace sdds {
   class Account {
      double m_balance;
      int m_number;
      bool m_failed;
      double getBalance()const;
      int getNumber()const;
      void setEmpty();
   public:
      Account(); // <-- defualt constructor
      Account(int number);
      Account(int number, double Initdeposit);
      ~Account(); // <-- creating a destructor
      void clear();
      bool failed()const;
      bool isEmpty()const;
      void open(int number, double balance);
      std::ostream& display() const;
      void depost(double value);
      Account& withdraw(double value);
      double close();
   };
}
#endif