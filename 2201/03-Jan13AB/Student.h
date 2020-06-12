#ifndef SDDS_STUDENT_H__
#define SDDS_STUDENT_H__
namespace sdds {

   //struct Student {
   //private:
   class Student {
   private:
      char m_name[21];
      int m_age;
   public:
      void set(const char name[], int age);
      void print();
   };

}

#endif