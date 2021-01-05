#include <iostream>
using namespace std;
struct Account {
   // member variables
   // OOP: properties
private:
   int m_number;
   double m_balance;
   // member functions
   // OOP: Methods
   double getBalance()const {
      return m_balance;
   }
   int getNumber()const {
      return m_number;
   }
public:
   void open( int number, double balance) {
      m_number = number;
      m_balance = balance;
   }
   void display()const {
      cout << "Account Number: " << 
         getNumber() << 
         ", Balance: " << 
         getBalance() << endl;
   }
   void depost( double value) {
      cout << "diposting " << value << " Dollars." << endl;
      m_balance += value;
   }
   bool withdraw( double value) {
      bool possible = m_balance >= value;
      if (possible) {
         cout << "withdrawing " << value << " Dollars." << endl;
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
   checking.depost(300.0);
   checking.display();
   // checking.m_balance += 200; not allowed.
   checking.depost(200.0);
   checking.display();
   return 0;
}