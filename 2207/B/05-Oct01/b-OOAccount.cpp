#include <iostream>
using namespace std;
struct Account {
   // member variables
   // OO: attributes (properties)
   int m_number;
   double m_balance;

   // member functions 
   // OO: Methods
   int number()const {
      return m_number;
   }
   double balance()const {
      return m_balance;
   }
   void open(int number, double balance) {
      m_balance = balance;
      m_number = number;
   }
   void display()const {
      cout << "Account Number: " <<
         number() <<
         ", Balance: " <<
         balance() << endl;
   }
   void depost(double value) {
      m_balance += value;
   }
   bool withdraw(double value) {
      bool possible = m_balance >= value;
      if (possible) {
         m_balance -= value;
      }
      return possible;
   }
   double close() {
      double balance = m_balance;
      m_balance = 0.0;
      m_number = 0;
      return balance;
   }

};

int main() {
   Account checking, saving;
   checking.open(12345, 543.21);
   checking.display();
   saving.open(67890, 10000.0);
   saving.display();
   cout << "Deposting 200 bucks" << endl;
   checking.depost(200.0);
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   if (checking.withdraw(420.0)) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
   }
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   if (checking.withdraw(420.0)) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
   }
   checking.display();
   cout << "Closing: ";
   checking.display();
   cout << "closed the account and withdrew " << checking.close() << endl;
   checking.display();
   return 0;
}