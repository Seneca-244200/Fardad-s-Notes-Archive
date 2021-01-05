#include <iostream>
using namespace std;
#include "Account.h"
using namespace sdds;
int main() {
   Account checking, saving;
   checking.open(12345, 543.21);
   checking.display();
   saving.open(67890, 10000.0);
   saving.display();
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