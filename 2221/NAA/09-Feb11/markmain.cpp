#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
Mark showDetailed(Mark M) {
   char grade[3];
   M.grade(grade);
   M.display() <<", " << M.percent() <<"%, Grade: " << grade << endl;
   return M; // returning by value copies the local object into a temp
             // nameless object and returns the nameless object.
}


const Mark& showRefDetailed(const Mark& M) {
   char grade[3];
   M.grade(grade);
   M.display() << ", " << M.percent() << "%, Grade: " << grade << endl;
   return M;
}
int main() {
   Mark A("Test", 10, 15);  // init
   showDetailed(A); // translated to the call void showDetailed(Mark M = A) 


   return 0;
}

