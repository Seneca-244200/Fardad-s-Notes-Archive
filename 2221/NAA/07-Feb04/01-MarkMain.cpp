
#include <iostream>
#include "Utils.h"
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark M;
   char letterGrade[3];
   M.initialize();
   M.set("Workshop 2");
   M.display() << endl;
   M.set("Midterm", 67, 80);
   M.grade(letterGrade);
   M.display() << ", " << M.percent() <<"%" <<
         " letter Grade: " << letterGrade << endl;
   M.clearAtEnd();
   return 0;
}