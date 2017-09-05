 // Overloading Constructors
 // h6.cpp

 #include <iostream>
 using namespace std;
 #include "Transaction.h"

 const int N = 3;

 int main() {
     Transaction tr[N];

     cout << "Enter " << n << " Transactions" << endl;
     for (int i = 0; i < N; i++)
         tr[i].enter();
     cout << endl;

     cout << "   Account Description             Credit     Debit" << endl; 
     for (int i = 0; i < N; i++) {
         tr[i].display();
         cout << endl;
     }
 }