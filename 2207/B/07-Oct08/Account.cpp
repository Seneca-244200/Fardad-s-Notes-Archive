#include <iostream>
#include <iomanip>
using namespace std;
#include "Account.h"
namespace sdds {
   const bool debuggeing = true;
   int Account::number()const {
      return m_number;
   }
   double Account::balance()const {
      return m_balance;
   }
   Account::Account() {
      setEmpty();
      if (debuggeing) cout << "Created an empty account" << endl;
   }
   Account::Account(int number) {
      // Account(number, 100.0); <<-- temp account, you are not supposed to do this
      // constructors can not be called
      setEmpty();
      open(number, 100);
      if (debuggeing) {
         display() << " Just got created " << endl;;
      }

   }
   Account::Account(int number, double initDeposit) {
      setEmpty();
      open(number, initDeposit);
      if (debuggeing) {
         display() << " Just got created " << endl;;
      }
   }
   Account::~Account() {
      if (debuggeing) {
         cout << "destructor is being called" << endl;
         cout << "Closing the following account at the end of its life" << endl;
         display() << endl;
      }
      close();
   }
   bool Account::failed() const {
      return m_failed;
   }
   void Account::clear() {
      m_failed = false;
   }
   void Account::setEmpty() {
      m_number = -1;
      m_balance = -1;
      m_failed = false;
   }
   bool Account::isEmpty() const{
      return m_number == -1;
   }
   void Account::open(int number, double balance) {
      if (!failed() && isEmpty() &&
         number > 9999 && number <= 99999 &&
         balance > 0) {
         m_balance = balance;
         m_number = number;
      }
      else {
         if (!isEmpty()) {
            cout << "Cannot reopen an already existing account" << endl;
         }
         else {
            m_failed = true;
         }
      }
   }
   ostream& Account::display()const {
      if (!isEmpty() && !failed()) {
         cout << "Account Number: " <<
            number() <<
            ", Balance: " << setw(10) << fixed 
            << setprecision(2) << 
            balance();
      }
      else {
         if(isEmpty())
            cout << "This is an empty accout" << endl;
      }
      return cout;
   }
   Account& Account::depost(double value) {
      if (!failed() && value > 0)
         m_balance += value;
      else
         m_failed = true;
      return *this;
   }
   Account& Account::withdraw(double value) {
      if (!failed() && m_balance >= value) {
         m_balance -= value;
      }
      else {
         m_failed = true;
      }
      return *this;
   }
   double Account::close() {
      double balance = -1;
      if (!failed() && !isEmpty()) {
         balance = m_balance;
         m_balance = -1;
         m_number = -1;
      }
      else {
         if (isEmpty()) {
            if(debuggeing) cout << "Cannot close an empty account" << endl;
         }
      }
      return balance;
   }
}