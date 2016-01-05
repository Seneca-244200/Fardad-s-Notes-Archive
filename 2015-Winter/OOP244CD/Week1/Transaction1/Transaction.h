// Modular Example
 // Transaction.h

 struct Transaction {
     int acct;      // account number
     char type;     // credit 'c' debit 'd'
     double amount; // transaction amount
 };

 void enter(struct Transaction* tr);
 void display(const struct Transaction* tr); 
