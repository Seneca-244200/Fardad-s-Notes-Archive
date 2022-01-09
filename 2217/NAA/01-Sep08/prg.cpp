#include <iostream>
using namespace std;
struct Account {
   int number;
   double balance;
   char type;
   char accountHolder[50];
   void deposit(double amount) {
      balance += amount;
   }
};






int main() {
   struct Account A;

   A.deposit(2000);

   return 0;
}