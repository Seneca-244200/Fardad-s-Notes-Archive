#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
#include <iostream>
//using namespace std; not allowed
namespace sdds {
   class Student {
      char* m_name;  // DMA for student name
      unsigned int m_stno;
      void deallocate();
      void setEmpty();
   public:
      Student(unsigned int stno);
      Student(const char* name, unsigned stno);
      Student(const char* name);
      Student();// constructor
      ~Student(); // destructor
      bool set(); // from console
      Student& set(const char* name,
            unsigned int stno = 0);  // through other functions
      std::ostream& show()const;
      bool isEmpty()const;
   };
}

#endif // !SDDS_STUDENT_H

