#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
namespace sdds {
   class Account {
      // member variables
      // OO: attributes (properties)
      int m_number;
      double m_balance;

      // member functions 
      // OO: Methods
      int number()const;
      double balance()const;

   public:

      void open(int number, double balance);
      void display()const;
      void depost(double value);
      bool withdraw(double value);
      double close();
   };


}
#endif