class Name {
   char buffer[51];
   char m_first[21];
   char m_last[31];
public:

   void firstname(const char* value); // sets the name
   void lastname(const char* value); // sets the last name
   const char* fullname(); // returns a string containing full name
};