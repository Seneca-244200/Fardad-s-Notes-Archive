#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
// using namespace is not allowed
// in a header file
namespace sdds {
   class Name {  
      char* m_first;
      char* m_last;
      void init(); 
      void deleteMem();
   public:
      Name();
      Name(const char* firstAndLast);
      Name(const char* firstName,
          const char* lastName);
      ~Name();
      Name& set(const char* firstname, 
          const char* lastname);
      const char* first()const;
      const char* last()const;
      std::ostream& print()const;
      bool isEmpty()const;
   };
   extern bool debug;
}

#endif // !SDDS_NAME_H
