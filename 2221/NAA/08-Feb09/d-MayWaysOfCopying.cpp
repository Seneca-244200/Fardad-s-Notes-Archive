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
   // assignment at the moment of creation is call to a constructr
   //Mark B = A; // identical to Mark B(A)<<<<<<<<<<<<<
   //Mark C = "Thrid Test";
   //B.setTitle("Copy Of Test");
   showDetailed(A); // translated to the call void showDetailed(Mark M = A) 
   //showDetailed(B); // translated to the call void showDetailed(Mark M = B) 
   //showDetailed(C); // translated to the call void showDetailed(Mark M = C) 
//   showRefDetailed(A); // translated to the call void showDetailed(const Mark& M = A) 
//   showRefDetailed(B); // translated to the call void showDetailed(const Mark& M = B) 
   // translated to the call void showDetailed(const Mark& M = C) 
//   showRefDetailed(C).display() << endl;
   return 0;
}

