#include <iostream>
using namespace std;
#include "Account.h"
using namespace sdds;
int main() {
   Account checking(12345);
   Account* sav = new Account(54321, 500.0);
  // checking.open(12345, 420.50);
   checking.display() << endl;
   cout << "Deposting -100 bucks" << endl;
   checking.depost(-100);
   if (checking.failed()) {
      cout << "Attempting to depost negative amount" << endl;
      checking.clear();
   }
   sav->display() << endl;
   if (!sav->withdraw(200.0).failed()) {
      cout << "Withdrew " << 200.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
      checking.clear();
   }
   delete sav;
   cout << "Deposting 200 bucks" << endl;
   checking.depost(200.0);
   checking.display() << endl;
   cout << "withdrawing 420 dollars: " << endl;
   //checking.withdraw(420.0);
   //if (!checking.failed()) {
   if(!checking.withdraw(420.0).failed()){
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
      checking.clear();
   }
   checking.display() << endl;
   cout << "withdrawing 420 dollars: " << endl;
   checking.withdraw(420.0);
   if (!checking.failed()) {
      cout << "Withdrew " << 420.0 << " Dollars!" << endl;
   }
   else {
      cout << "Insufficient funds" << endl;
      checking.clear();
   }
   checking.display() << endl;
   return 0;
}