#include <iostream>
#include "Account.h"
using namespace sdds;
using namespace std;
int main() {
   //Account Saving; can not creat empty account
   Account checking(65432,100);
   if (!checking.failed()) {
      checking.display() << " is opened now" << endl;
   }
   checking.display() << endl;
   checking.depost(300.0).display() << endl;
   // chekcing.display() << endl;
   // cout << endl;
   checking.depost(-100);
   if (checking.failed()) {
      checking.clear();
      cout << "deposit failed" << endl;
      checking.display() <<endl;
   }
   checking.depost(200.0);
   checking.display() << endl;
   return 0;
}