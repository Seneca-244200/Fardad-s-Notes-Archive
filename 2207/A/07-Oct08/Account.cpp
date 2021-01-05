#include <iostream>
#include <iomanip>
using namespace std;
#include "Account.h"
namespace sdds {
   const bool debugging = true;
   double Account::getBalance()const {
      return m_balance;
   }
   int Account::getNumber()const {
      return m_number;
   }
   Account::Account() {
      setEmpty();
      if (debugging) cout << "Createing an empty account" << endl;
   }
   Account::Account(int number) {
     // Account(number, 100);  // creating a temp nameless object of type Account
      setEmpty();
      open(number, 100.0);
      if (debugging) display() << " just was created and opened" << endl;

   }
   Account::Account(int number, double Initdeposit) {
      setEmpty();
      open(number, Initdeposit);
      if (debugging) display() << " just was created and opened" << endl;
   }
   Account::~Account() {
      if (debugging) display() << " is going out of scope" << endl;
      close();
   }
   void Account::clear() {
      m_failed = false;
   }
   bool Account::failed() const {
      return m_failed;
   }
   void Account::setEmpty() {
      m_balance = -1;
      m_number = -1;
      m_failed = false;
   }
   bool Account::isEmpty() const {
      return m_number == -1;
   }
   void Account::open(int number, double balance) {
      if (isEmpty() && number > 9999 && number <= 99999 && balance > 0) {
         m_number = number;
         m_balance = balance;
      }
      else {
         m_failed = true;
      }
   }
   ostream& Account::display()const {
      if (!failed()) {
         cout << "Account Number: " << setw(5) <<
            getNumber() <<
            ", Balance: " << setw(10) << fixed << right << setprecision(2) <<
            getBalance();
      }
      else {
        if(debugging)
           cout << "The account is in a failed state" << endl;
      }
      return cout;
   }
   void Account::depost(double value) {
      if (!failed() && value > 0) {
         cout << "diposting " << value << " Dollars." << endl;
         m_balance += value;
      }
      else {
         if (debugging)
            cout << "The account is in a failed state" << endl;
         m_failed = true;
      }
   }
   Account& Account::withdraw(double value) {
      if(!failed() && m_balance >= value) {
         cout << "withdrawing " << value << " Dollars." << endl;
         m_balance -= value;
      }
      else {
         if (debugging)
            cout << "The account is in a failed state" << endl;
         m_failed = true;
      }
      return *this;
   }
   double Account::close() {
      double balance = -1;
      if (!failed()) {
         balance = m_balance;
         m_balance = 0.0;
         m_number = 0;
      }
      else {
         if (debugging)
            cout << "The account is in a failed state" << endl;
      }
      return balance;
   }




}