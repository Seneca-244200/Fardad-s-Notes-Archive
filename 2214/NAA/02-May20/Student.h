#ifndef SDDS_STUDENT_H_  // compilation safegaurd
#define SDDS_STUDENT_H_



namespace sdds {
   struct Student {
      int stno;
      char name[41];
      double gpa;
      void getInfo();
      void print();
   };
   struct Test {

   };
}

#endif // !SDDS_STUDENT_H_