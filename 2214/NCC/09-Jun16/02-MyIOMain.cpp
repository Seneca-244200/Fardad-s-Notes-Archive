#include "myIO.h"
using namespace sdds;


int main() {
   char name[81] = "Fred";
   int accno;
   double balance;
   mout << "Name: ";
   min >> name;
   mout << "Account number and balance: ";
   min >> accno >> balance;
   mout << "Your name is: " << name << "\nYour Account number: *" ;
   mout.width(10);
   mout.precision(2);
   mout << accno << "*\nYour Balance: " << balance;
   return 0;
}