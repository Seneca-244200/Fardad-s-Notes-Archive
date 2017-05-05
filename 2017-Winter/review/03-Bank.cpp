class Name {
   char first[21];
   char middle[21];
   char last[31];

};

class Date {
   int year;
   int month;
   int day;

};

class Customer {
   Name m_name;
   Date m_dob;
   long m_sin;

};
// set constact int values for account types;


class BankAccount {
   double m_blance;
   int m_number;
   int m_type; // chequing saveing or .....
   Customer m_owner;
};

