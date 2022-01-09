#include <iostream>
using namespace std;
struct Account {
   int accNo;
   double balance;
   char type;
   char accountHolder[51];
   void deposit(int value) {
      balance += value;
   }
};

int main() {
   struct Account A, B;
   A.deposit(2000);
   B.deposit(1000);
   return 0;
}