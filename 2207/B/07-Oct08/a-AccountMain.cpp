#include <iostream>

using namespace std;
#include "Account.h"
using namespace sdds;
int main() {
   Account checking,
      saving(76543);
   saving.display();
   checking.display();
   checking.open(1234, 1000);
   if (checking.failed()) {
      cout << "Failed to open the account" << endl;
      checking.clear();
   }
   checking.open(12345, 543.21);
   checking.display();
   cout << "Deposting 200 bucks" << endl;
   checking.depost(200.0);
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   checking.withdraw(420.0);
   if (!checking.failed()) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      checking.clear();
      cout << "Insufficient funds" << endl;
   }
   checking.display();
   cout << "withdrawing 420 dollars: " << endl;
   checking.withdraw(420.0);
   if (!checking.failed()) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      checking.clear();
      cout << "Insufficient funds" << endl;
   }
   checking.display();
   cout << "Closing: ";
   checking.display();
   cout << "closed the account and withdrew " << checking.close() << endl;
   checking.display();
   return 0;
}