#ifndef SDDS_NAME_H
#define SDDS_NAME_H


namespace sdds {

   class Name {
   private: 
      char* m_first;
      char* m_last;
      Name& init();
                  
      Name& deleteMem();
   public:
      Name();
      Name(const char* firstAndLast);
      Name(const char* firstName,
                    const char* lastName);
      ~Name();
      Name& set(const char* firstName, const char* lastName);
      const Name& print()const;
       bool isEmpty()const; 
   };
   extern bool debug;
}

#endif // !SDDS_NAME_H
