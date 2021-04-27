#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
namespace sdds {
   class Account {
   private:
      char* m_bankName;  // dynamic 
      int m_number;
      double m_balance;
      double getBalance()const;
      int getNumber()const;
      void setName(const char* name);
      int readNumber()const;
      double readBalance()const;
   public:
      void init();
      void read();
      void open(const char* bankName, int number, double balance);
      void display() const;
      bool isClosed()const;  // checks for  Empty State 
      void depost(double valueToDeposit);
      bool withdraw(double valueToWithdraw);
      double close();  // sets to empty
   };

}
#endif // !


