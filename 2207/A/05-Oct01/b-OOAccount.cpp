#include <iostream>
using namespace std;
#include "Account.h"
namespace sdds {
   double Account::getBalance()const {
      return m_balance;
   }
   int Account::getNumber()const {
      return m_number;
   }
   void Account::open(int number, double balance) {
      m_number = number;
      m_balance = balance;
   }
   void Account::display()const {
      cout << "Account Number: " <<
         getNumber() <<
         ", Balance: " <<
         getBalance() << endl;
   }
   void Account::depost(double value) {
      cout << "diposting " << value << " Dollars." << endl;
      m_balance += value;
   }
   bool Account::withdraw(double value) {
      bool possible = m_balance >= value;
      if (possible) {
         cout << "withdrawing " << value << " Dollars." << endl;
         m_balance -= value;
      }
      return possible;
   }
   double Account::close() {
      double balance = m_balance;
      m_balance = 0.0;
      m_number = 0;
      return balance;
   }
}