#include "myIO.h"      //#include <iostream>
using namespace sdds; // using namespace std;

int main() {
   char name[81] = "Fred";
   int accno;
   double balance;
   mout << "Name: ";
   min >> name;
   mout << "Account number and balance:  ";
   min >> accno >> balance;
   mout << "Your name is " << name << "\n"
      << "Your account number is *";
   mout.width(20);
   mout << accno << "*\n"
      << "Your account Balance is " << balance << " Dollars!\n";
   return 0;
}