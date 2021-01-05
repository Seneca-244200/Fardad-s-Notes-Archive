#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
namespace sdds {
   class Account {
      int m_number;
      double m_balance;
      double getBalance()const;
      int getNumber()const;
   public:
      void open(int number, double balance);
      void display()const;
      void depost(double value);
      bool withdraw(double value);
      double close();
   };
   /*
   struct Account {
      void open(int number, double balance);
      void display()const;
      void depost(double value);
      bool withdraw(double value);
      double close();
   private:
      int m_number;
      double m_balance;
      double getBalance()const;
      int getNumber()const;
   };
   */
}
#endif // !SDDS_ACCOUNT_H
