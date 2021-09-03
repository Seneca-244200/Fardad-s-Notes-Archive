#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   class Name {  
      char* m_first;
      char* m_last;
      void init(); 
      void deleteMem();
   public:
      Name();// will be called automatically when Name is created
      Name(const char* firstAndLast);
      Name(const char* firstName, const char* lastName);
      ~Name();// will be called automatically right before Name dies
      void set(const char* firstname, const char* lastname);
      const char* first()const;
      const char* last()const;
      void print()const;
      bool isEmpty()const;
   };
   extern bool debug;
}

#endif // !SDDS_NAME_H
