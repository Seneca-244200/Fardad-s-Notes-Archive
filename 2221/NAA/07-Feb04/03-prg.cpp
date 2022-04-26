
#include <iostream>
#include "Utils.h"
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   // initialization
   // is a call to the constructor
   // with ONE argument
   Mark M = "Workshop 2"; // at the moment of creation
   //  initialization is a call
   // to a 3 argument constructor
   Mark N = { "Quiz 2", 4, 6 };
   //  initialization is a call
   // to a 2 argument constructor
   Mark O = { "Test", 80 };


   char letterGrade[3];
   M.display() << endl;
   M.set("Midterm", 67, 80).grade(letterGrade).display()
      << ", " << M.percent() << "%" <<
      " letter Grade: " << letterGrade << endl;
   N.grade(letterGrade).display() << ", " << N.percent() << "%" <<
      " letter Grade: " << letterGrade << endl;
   return 0;
}

