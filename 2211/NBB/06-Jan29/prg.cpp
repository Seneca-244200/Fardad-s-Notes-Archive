#include <iostream>
using namespace std;
#include "Account.h"
using namespace sdds;


int main() {
   Account checking;
   checking.init();
   checking.read();
   checking.depost(100.0);
   checking.display();
   return 0;
}