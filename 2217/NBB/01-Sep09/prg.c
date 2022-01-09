#include <iostream>
using namespace std;
struct Account {
   int accNo;
   double balance;
   char type;
   char accountHolder[51];
};

void deposit(struct Account* ap, int value) {
   ap->balance += value;
}


int main() {
   struct Account A;
   depost(&A, 2000);
   return 0;
}