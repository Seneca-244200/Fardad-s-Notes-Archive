#include <iostream>
using namespace std;
struct Account {
   int accountNumber;
   double balance;
   char type;
   char accountHolder[51];
};

void deposit(struct Account* ap, double value) {
   ap->balance += value;
}




int main() {
   struct Account A = {};


   deposit(&A, 2000);
   
   
   
   return 0;
}