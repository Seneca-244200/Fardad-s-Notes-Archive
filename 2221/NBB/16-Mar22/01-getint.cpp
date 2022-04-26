#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;


int main() {
   int num{};
   //num = ut.getint("Enter an integer: ");
   //cout << "You enterd: " << num << endl;
   //num = ut.getint(0, 100, "Enter percentage value: ");
   ut.getint(num, "Enter an ingeter or hit enter to skip: ");
   if (cin.fail()) {
      cin.clear();
      cout << "Aborted!" << endl;
   }
   else {
      cout << "You enterd: " << num << endl;
   }
   return 0;
}