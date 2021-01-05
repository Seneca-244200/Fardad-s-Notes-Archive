#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
namespace sdds {
   class Account {
      double m_balance;
      int m_number;
      double getBalance()const;
      int getNumber()const;
   public:
      void open(int number, double balance);
      void display() const;
      void depost(double value);
      bool withdraw(double value);
      double close();
   };
}
#endif