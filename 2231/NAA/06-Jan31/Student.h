#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
#include <iostream>
// can not use (using namespace std)
namespace sdds {
   class Student {
//   private:
      char* m_name; // Dynamic Name
      unsigned int m_stno;
      void init();
      void deallocate();
   public:
      Student(unsigned int stno);
      Student(const char* name);
      Student(const char* name,unsigned int stno);
      Student(); // constructor
      ~Student(); // destructor
      Student& set();  // receives the information from console
      Student& set(const char name[], 
         unsigned int stno = 0);
      std::ostream& display()const;
   };
}
#endif // !SDDS_STUDENT_H


