

#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark M; // invokes default constructor(no argument constructor);
   M.set("Workshop 2", 35, 80);
   M.display();
   M.set("Final Exam", 85);
   M.display();
   M.set("Quiz 1");
   M.display();
   M.set(55);
   M.display();
   return 0;
}