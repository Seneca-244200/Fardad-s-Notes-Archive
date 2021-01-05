#include <iostream>
using namespace std;
#include "Account.h"
using namespace sdds;
int main() {
   /*Human Fardad, Parsa;
   Parsa.talk();
   Fardad.talk();
   */
   Account checking, saving;
   checking.open(12345, 420.50);
   saving.open(56789, 20000.21);
   checking.display();
   cout << "Deposting 200 bucks" << endl;
   checking.depost(200.0);
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   if (checking.withdraw( 420.0)) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
   }
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   if (checking.withdraw( 420.0)) {
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