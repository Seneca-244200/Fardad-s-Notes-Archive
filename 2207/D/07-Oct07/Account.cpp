#include <iostream>
#include <iomanip>
using namespace std;
#include "Account.h"
namespace sdds {
   double Account::getBalance()const {
      return m_balance;
   }
   int Account::getNumber()const {
      return m_number;
   }
 /*  Account::Account() {
      setEmpty();
   }*/
   Account::Account(int number) {
      setEmpty();
      // instead of calling open the following 
      //*this = Account(number, 100); // is possible but to be avoided
      open(number, 100); // prefered 
   }
   Account::Account(int number, int balance) {
      //Account(); do not call, this is wrong.
      // always call functions insteac
      // setEmpty();
      open(number, balance);
   }
   void Account::clear() {
      lastActionWasSuccessful = true;
   }
   bool Account::failed() const {
      return lastActionWasSuccessful == false;
   }
   void Account::setEmpty() {
      lastActionWasSuccessful = true;
      m_number = -1;
      m_balance = -1;
   }
   bool Account::isEmpty() const {
      return m_number == -1; // flagging to be empty
   }
   void Account::open(int number, double balance) {
      if (isEmpty() && number > 9999 && number<99999 && balance >0) {
         m_number = number;
         m_balance = balance;
         lastActionWasSuccessful = true;
      }
      else {
         lastActionWasSuccessful = false;
      }
   }
   ostream& Account::display()const {
      if (!isEmpty() && lastActionWasSuccessful) {
         cout << "Account Number: " <<
            setw(10) << left << getNumber() <<
            ", Balance: " <<
            setw(10) << right << fixed <<
            setprecision(2) << getBalance();
      }
      else {
         if (lastActionWasSuccessful)
            cout << "Empty Account" << endl;
         else
            cout << "Last action was a failure" << endl;
      }
      return cout;
   }
   Account& Account::depost(double value) {
      if (!isEmpty() && value > 0 && lastActionWasSuccessful) {
         cout << "diposting " << value << " Dollars." << endl;
         m_balance += value;
      }
      else {
         lastActionWasSuccessful = false;
      }
      return *this;
   }
   Account& Account::withdraw(double value) {
      if (!isEmpty() && m_balance >= value && lastActionWasSuccessful) {
         cout << "withdrawing " << value << " Dollars." << endl;
         m_balance -= value;
      }
      else {
         lastActionWasSuccessful = false;
      }
      return *this;
   }
   double Account::close() {
      double balance = -1;
      if (!isEmpty() && lastActionWasSuccessful) {
         balance = m_balance;
         m_balance = 0.0;
         m_number = 0;
      }
      return balance;
   }
   Account::~Account() {
      display() << " is going out of scope" << endl;
   }
}