// Member Functions and Privacy
 // main.cpp

 #include "h2.h"
 #include "Transaction.h"

 int main() {
     Transaction tr;

     for (int i = 0; i < NO_TRANSACTIONS; i++) { 
         tr.enter();
         tr.display();
     }
 }