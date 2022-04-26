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
//#define MinMonPayment (20.5)
   extern double MinMonPayment;  // makes the file scope
                                       // variable, global to any 
                                       // file including student.h
}
#endif // !SDDS_STUDENT_H



