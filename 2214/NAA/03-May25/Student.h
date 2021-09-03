#ifndef SDDS_STUDENT_H_  // compilation safegaurd
#define SDDS_STUDENT_H_



namespace sdds {

   struct Student {
      int stno;
      double gpa;
      Name stname;
      void getInfo();
      void print();
   };

}

#endif // !SDDS_STUDENT_H_