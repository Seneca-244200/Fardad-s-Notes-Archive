// Overloading Constructor
 // Transaction.h

 class Transaction {
     int acct;
     char type;
     char desc[21];
     double amount;
   public:
     Transaction();
     Transaction(int, char, double, const char*); 
     ~Transaction();
     void enter();
     void display() const;
 };