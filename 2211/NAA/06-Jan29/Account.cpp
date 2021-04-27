#include <iostream>
using namespace std;
#include "cstring.h"
#include "Account.h"
namespace sdds {
   void Account::init() {
      m_balance = 0.0;
      m_bankName = nullptr;
      m_number = 0;
   }
   double Account::getBalance()const {
      return m_balance;
   }
   int Account::getNumber()const {  // becomes read only
      return m_number;
   }
   void Account::setName(const char* name) {
      m_bankName = new char[strLen(name) + 1];
      strCpy(m_bankName, name);
   }
   int Account::readNumber() const {
      int number;
      bool done = false;
      cout << "Enter number: ";
      while (!done) {
         cin >> number;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(3000, '\n');
            cout << "Bad number, redo: ";
         }
         else {
            done = true;
         }
      }
      return number;
   }
   double Account::readBalance() const {
      double balance;
      cout << "Enter balance: ";
      bool done = false;
      while (!done) {
         cin >> balance;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(3000, '\n');
            cout << "Bad balance, redo: ";
         }
         else {
            done = true;
         }
      }
      return balance;
   }
   void Account::read() {
      char temp[31];
      cout << "Enter name: ";
      cin.getline(temp, 31);
      if (cin.fail()) {
         cin.clear(); // say sorry
         cin.ignore(3000, '\n'); // flush keyboard
      }
      // run on linux to see what happens!!!
//      open(temp, readNumber(), readBalance()); // this goes in reverse order
                                                 // why? will come up in reflection
      int number = readNumber();
      double balance = readBalance();
      open(temp, number, balance);
   }
   void Account::open(const char* bankName, int number, double balance) {
      setName(bankName);
      m_number = number;
      m_balance = balance;
   }
   void Account::display() const {
      if (isClosed())
         cout << "This account is closed!" << endl;
      else {
         cout.width(30);
         cout.setf(ios::left);
         cout.fill('.');
         cout << m_bankName;
         cout << " Account Number: ";
         cout.width(8);
         cout.fill('0');
         cout.setf(ios::right);
         cout << getNumber();
         cout.fill(' ');
         cout << ", Balance: ";
         cout.setf(ios::fixed);
         cout.precision(2);
         cout << getBalance() << endl;
      }
   }
   bool Account::isClosed()const {
      return !m_bankName;
   }
   void Account::depost(double value) {
      if (!isClosed()) {
         m_balance += value;
      }
   }
   bool Account::withdraw(double value) {
      bool possible = !isClosed() && m_balance >= value;
      if (possible) {
         m_balance -= value;
      }
      return possible;
   }
   double Account::close() {
      delete[] m_bankName;
      m_bankName = nullptr;
      double balance = m_balance;
      m_balance = 0.0;
      m_number = 0;
      return balance;
   }

}
