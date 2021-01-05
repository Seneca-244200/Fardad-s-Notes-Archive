#include <iostream>
using namespace std;
#include "Account.h"
namespace sdds {
   int Account::number()const {
      return m_number;
   }
   double Account::balance()const {
      return m_balance;
   }
   void Account::open(int number, double balance) {
      m_balance = balance;
      m_number = number;
   }
   void Account::display()const {
      cout << "Account Number: " <<
         number() <<
         ", Balance: " <<
         balance() << endl;
   }
   void Account::depost(double value) {
      m_balance += value;
   }
   bool Account::withdraw(double value) {
      bool possible = m_balance >= value;
      if (possible) {
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