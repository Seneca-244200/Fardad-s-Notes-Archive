#ifndef SDDS_STUDENT_H_
#define SDDS_STUDENT_H_


namespace sdds {
   struct Student {
      int stno;
      char name[41];
      double gpa;
      void getInfo();
      void print();
   };
   struct Subject {
      char subName[41];
      char code[4];
      int num;
   };
}

#endif