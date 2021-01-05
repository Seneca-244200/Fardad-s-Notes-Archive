#include <iostream>

using namespace std;
#include "Account.h"
using namespace sdds;
int main() {
   Account checking,
      saving(76543);
   if (saving.depost(-100).failed()) {
      cout << "Faled to deposit negative amount " << endl;
      saving.clear();
   }

   saving.display()<<endl;
   checking.display() << endl;
   checking.open(12345, 1000);
   checking.display() << endl;
   cout << "Deposting 200 bucks" << endl;
   checking.depost(200.0);
   checking.display() << endl;
   cout << "withdrawing 420 dollars: " << endl;
   //checking.withdraw(1420.0);
   //if (checking.failed()) {
   if(checking.withdraw(1420.0).failed()){
      cout << "failed to withdraw the account" << endl;
      checking.clear();
   }
   return 0;
}