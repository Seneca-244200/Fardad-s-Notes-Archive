#include <iostream>
#include "cstring.h"
using namespace std;
using namespace sdds;
class Account {
   // no need for private since clas is private by default
   char* m_bankName;
   int m_number;
   double m_balance;
public:
   double getBalance()const {
      return m_balance;
   }
   int getNumber( )const {  // becomes read only
      return m_number;
   }
   void open(const char* bankName, int number, double balance) {
      m_bankName = new char[strLen(bankName) + 1];
      strCpy(m_bankName, bankName);
      m_number = number;
      m_balance = balance;
   }
   void display() const{
      if (isClosed())
         cout << "This account is closed!" << endl;
      else
         cout << m_bankName << " Account Number: " << getNumber() << ", Balance: " << getBalance() << endl;
   }   
   bool isClosed()const {
      return !m_bankName;
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
      delete[] m_bankName;
      m_bankName = nullptr;
      double balance = m_balance;
      m_balance = 0.0;
      m_number = 0;
      return balance;
   }

};



int main() {
   Account checking;
   checking.open("TD canada trust" , 12345, 543.21);
   checking.display();
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