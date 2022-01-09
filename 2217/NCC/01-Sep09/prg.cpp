#include <iostream>
using namespace std;
struct Account {
   int accountNumber;
   double balance;
   char type;
   char accountHolder[51];
   void deposit( double value) {
      balance += value;
   }
};



int main() {
   struct Account A = {}, B = {};
   A.deposit(1000);
   B.deposit(2000);
   return 0;
}