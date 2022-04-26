#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
namespace sdds {

   struct Student {   // this is a student class
      char name[51];  // data, attributes or member variable of student (class scope)
      int stNo;       // they are accessible by the behaviours of the class
      double balance; 
      void display(); // behaviour, method or member function have access to all attirbutes of
                      // the student
   };
   extern const double IntrestRate;  // makes the file scope global to any file including "Student.h"

}
#endif