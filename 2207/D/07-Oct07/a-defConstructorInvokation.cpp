#include "Account.h"
using namespace sdds;
int main() {
   Account checking;
   checking.display();
   checking.open(12345, 543.21);
   checking.display();
   checking.depost(300.0);
   checking.display();
   // checking.m_balance += 200; not allowed.
   checking.depost(200.0);
   checking.display();
   return 0;
}