#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

namespace sdds {
   class Student {
//   private:
      char m_name[51];
      unsigned int m_stno;
 //     float m_gpa;//l8r
   public:
      void set();
      void set(const char* name, unsigned int stno);
      void show()const;
   };
}

#endif // !SDDS_STUDENT_H

