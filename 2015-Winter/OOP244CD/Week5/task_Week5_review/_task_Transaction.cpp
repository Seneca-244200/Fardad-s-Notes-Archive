/*Transaction.cpp

Upgrade the implementation file for your Transaction type:

1-add the function definition for the no-argument constructor
2-add the function definition for the empty destructor
3-complete the logic for the enter() member function, rejecting account numbers that aren't positive, amounts that aren't positive, and types that are neither 'c' nor 'd'
complete the logic for your display() query
4-add the definition for the four-argument constructor
5-add the logic for validating data to your four-argument constructor
6-call the four-argument constructor from the enter() function
*/
 // Constructor and Destructor
 // Transaction.cpp

 #include <iostream>

 using namespace std;
 #include "Transaction.h"











 void Transaction::enter() {

     // local variables accept input temporarily
     int           ;
     char          ;
     char      [21];
     double        ;

     // store input from the user in the local variables
     cout << "Enter the account number : ";
     cin  >>      ;                             ;
     cin.ignore();
     cout << "Enter the desription : ";
     cin.getline(        , 21, '\n');
     cout << "Enter the account type (d for debit, c for credit) : "; 
     cin  >>      ;                             ;
     cout << "Enter the account amount : ";
     cin  >>      ;

     if (                                                 ) {
         // copy validated input into the instance variables
         acct =           ;
         type =           ;
                          ;
         amount =         ;
     }
     else {
         // input was invalid - adopt a safe empty state
         acct =           ;
         type =           ;
                          ;
         amount =         ;
     }
 }

 void Transaction::display() const {

     if (                 ) {
         cout << setw(10) << acct;
         cout << ' ' << setw(20) << left << desc << right; 
         cout << setprecision(2) << fixed;
         if (type == 'd')
             cout << setw(20) << amount;
         else
             cout << setw(10) << amount;
     }
     else
         cout <<                 << endl;
 }