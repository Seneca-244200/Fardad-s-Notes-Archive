// Member Functions and Privacy
 // Transaction.cpp

 #include <iostream>
 using namespace std;
 #include "Transaction.h"

 void Transaction::enter() {

     cout << "Enter the account number : ";
     cin  >> acct;
     cout << "Enter the account type (d for debit, c for credit) : "; 
     cin  >> type;
     cout << "Enter the account amount : ";
     cin  >> amount;
 }

 void Transaction::display() const {

     cout << "Account " << acct;
     cout << ((type == 'd') ? " Debit $" : " Credit $") << amount; 
     cout << endl;
 }