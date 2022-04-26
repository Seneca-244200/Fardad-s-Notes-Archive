#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
// in C++ struct and class are the same
namespace sdds {
   struct Student {  // class struct , potato potaato
      // data inside a class (struct) "class scope"
      char name[81];
      int stNo;
      double balance;
      // behaviour
      void display();
   };
  
}
#endif // !SDDS_STUDENT_H



