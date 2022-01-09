#ifndef  SDDS_STUDENT_H
#define SDDS_STUDENT_H
namespace sdds {
   struct Student {
      char m_name[21];
      int m_stno;
      float m_gpa;
   };
   void pnrStdTitle();
   void prnStudent(const Student* sp);
   void sortOnName(const Student* stptrs[], const Student sts[], unsigned int size);
   void sortOnStno(const Student* stptrs[], const Student sts[], unsigned int size);
   void sortOnGpa(const Student* stptrs[], const Student sts[], unsigned int size);
}
#endif // ! SDDS_STUDENT_H
