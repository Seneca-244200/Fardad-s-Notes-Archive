/*Transaction.h

Upgrade the header file for your Transaction type:

replace the keywords struct and private with the keyword class
add the prototype for the no-argument constructor
add the prototype for the destructor
add the prototype for the four-argument constructor

*/
 // Constructor and Destructor
 // Transaction.h

	Transaction {

     int acct;
     char type;
     char desc[21];
     double amount;
   public:


     void enter();
     void display() const;


 };