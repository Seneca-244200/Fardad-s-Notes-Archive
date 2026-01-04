// education

// Student.h
#ifndef EDU_STUDENT_H
#define EDU_STUDENT_H
namespace edu {
   struct Student {
      char name[50];
      float gpa;


   };
   void reg(Student* str);


}
#endif
// end of student.h

// Student.cpp
#include "Student.h"
namespace edu {
   void reg(Student* str) {

      // whatever
   }

}
// Student.cpp

// OSAP.h
#ifndef FIN_OSAP_H
#define FIN_OSAP_H
namespace fin {
   struct Student {
      char name[50];
      double balance;


   };
   struct Loan {

   };
}
#endif // !FIN_OSAP_H

// OSAP.cpp
#include "OSAP.h"
namespace fin {





}

using namespace fin;
using namespace edu;
int main() {
   fin::Student fs;
   Loan l;
   edu::Student es;


   return 0
}