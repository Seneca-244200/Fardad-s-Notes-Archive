// Member Functions and Privacy
 // Transaction.h

 struct Transaction {
   private:
     int acct;
     char type;
     double amount;
   public:
     void enter();
     void display() const; 
 };