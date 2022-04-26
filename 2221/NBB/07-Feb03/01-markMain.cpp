#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark M;
   M.init();
   M.set("Workshop 2", 35, 80);
   M.display();
   M.set("Final Exam", 85);
   M.display();
   M.set("Quiz 1");
   M.display();
   M.set(55);
   M.display();
   M.clearAtEnd();
   return 0;
}