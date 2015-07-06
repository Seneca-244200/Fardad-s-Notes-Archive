// Overloading Constructor
 // Transaction.cpp

 #include <iostream>
 #include <iomanip>
 #include <cstring>
 using namespace std;
 #include "Transaction.h"

 Transaction::Transaction() {
     acct = 0;
     desc[0] = '\0';
     type = 'd';
     amount = 0.0;
 }

 Transaction::Transaction(int ac, char ty, double am, const char* de) { 
     if (ac > 0 && (ty == 'd' || ty == 'c') && am > 0.0) {
        // copy validated input into the instance variables
        acct = ac;
        type = ty;
        strcpy(desc, de);
        amount = am;
    }
    else {
        // input was invalid - adopt a safe empty state
        *this = Transaction();
    }
}

 Transaction::~Transaction() { }

 void Transaction::enter() {

     // local variables accept input temporarily
     int      acct_;
     char     type_;
     char desc_[21];
     double amount_;

     // store input from the user in the local variables
     cout << "Enter the account number : ";
     cin  >> acct_;                             ;
     cin.ignore();
     cout << "Enter the desription : ";
     cin.getline(desc_, 21);
     cout << "Enter the account type (d for debit, c for credit) : ";
     cin  >> type_;                             ;
     cout << "Enter the account amount : ";
     cin  >> amount_;

     *this = Transaction(acct_, type_, amount_, desc_);
 }

 void Transaction::display() const {

     if (acct != 0) {
         cout << setw(10) << acct;
         cout << ' ' << setw(20) << left << desc << right;
         cout << setprecision(2) << fixed;
         if (type == 'd')
             cout << setw(20) << amount;
         else
             cout << setw(10) << amount;
     }
     else
         cout << "no data available" << endl;
 }
