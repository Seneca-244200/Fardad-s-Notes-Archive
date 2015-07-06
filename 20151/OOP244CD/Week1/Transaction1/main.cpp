// Modular Example
 // main.cpp

 #include "main.h"
 #include "Transaction.h"

 int main() {
     int i;
     struct Transaction tr;

     for (i = 0; i < NO_TRANSACTIONS; i++) { 
         enter(&tr);
         display(&tr);
     }
 }
