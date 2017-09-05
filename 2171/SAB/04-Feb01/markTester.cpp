#include <iostream>
#include "Mark.h"
using namespace sict;
using namespace std;
int main() {
   Mark M;
   M.maxPoints(60);
   M.displayType(DSP_GRADE);
   M.display();
   cout << endl;

   M.points(49);
   M.displayType(DSP_MARK);
   cout << M.points() << "/" << M.maxPoints() << " is ";
   M.display();
   cout << "% that is ";
   M.displayType(DSP_GRADE);
   M.display();
   cout << endl;
   cout << "In gpa format it is ";
   M.displayType(DSP_GPA);
   M.display();
   cout << endl;
   return 0;
}