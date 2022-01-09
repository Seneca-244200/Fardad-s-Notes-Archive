#include <iostream>
using namespace std;
struct Account {
   int number;
   double balance;
   char type;
   char accountHolder[50];
};


void deposit(struct Account* ap, double amount){
   ap->balance += amount;
}



int main() {
   struct Account A;

   deposit(&A, 2000);

   return 0;
}