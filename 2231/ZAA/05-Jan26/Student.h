#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

namespace sdds {
   class Student {
      char* m_name;  // DMA for student name
      unsigned int m_stno;
      void deallocate();
   public:
      Student();// constructor
      ~Student(); // destructor
      bool set(); // from console
      void set(const char* name, unsigned int stno);  // through other functions
      void show()const;

   };
}

#endif // !SDDS_STUDENT_H

