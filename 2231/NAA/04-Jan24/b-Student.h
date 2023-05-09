#ifndef SDDS_BSTUDENT_H
#define SDDS_BSTUDENT_H
namespace sdds {
   class Student {
//   private:
      char m_name[51];
      unsigned int m_stno;
   public:
      void set();  // receives the information from console
      void set(const char name[], 
         unsigned int stno);
      void display()const;
   };
}
#endif // !SDDS_STUDENT_H


