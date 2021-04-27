#include <iostream>
using namespace std;
struct Account {
   char* m_bankName;
   int m_number;
   double m_balance;
};

double getBalance(const Account& A) {
   return A.m_balance;
}
double getNumber(const Account& A) {
   return A.m_number;
}
const char* getBankName(const Account& A) {
   return A.m_bankName;
}
void open(Account& acc, int number, double balance) {
   acc.m_number = number;
   acc.m_balance = balance;
}
void display(const Account& acc) {
   cout << "Account Number: " << getNumber(acc) << ", Balance: " << getBalance(acc) << endl;
}
void depost(Account& acc, double value) {
   acc.m_balance += value;
}
bool withdraw(Account& acc, double value) {
   bool possible = acc.m_balance >= value;
   if (possible) {
      acc.m_balance -= value;
   }
   return possible;
}
double close(Account& acc) {
   double balance = acc.m_balance;
   acc.m_balance = 0.0;
   acc.m_number = 0;
   return balance;
}

int main() {
   Account Acc;
   Account Bcc{ nullptr, 12365, 1234.56 };
   cout << "What is the balance and number? ";
   cin >> Acc.m_balance >> Acc.m_number;
   display(Acc);
   display(Bcc);


   return 0;
}