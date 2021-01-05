#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
#include <iostream>
// can not have "using namespace..."
namespace sdds {
   class Account {
      // member variables
      // OO: attributes (properties)
      int m_number;
      double m_balance;
      bool m_failed;
      // member functions 
      // OO: Methods
      int number()const;
      double balance()const;
      void setEmpty();
   public:
      Account(); // <-- default constructor
      Account(int number);
      Account(int number, double initDeposit);
      ~Account();// <-- destructor
      bool failed()const;
      void clear();
 
      bool isEmpty()const;
      void open(int number, double balance);
      std::ostream& display()const;
      Account& depost(double value);
      Account& withdraw(double value);
      double close();
   };


}
#endif