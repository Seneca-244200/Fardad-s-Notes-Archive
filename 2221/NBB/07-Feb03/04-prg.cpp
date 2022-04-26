#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark M("Workshop 2", 35, 80);
   M.display() << " pecentage: " << M.percent() <<  endl;
   M.set("Final Exam", 85).display() << endl;
   M.set("Quiz 1").display() << endl;
   M.set(55).display() << endl;
   M.setMax(80).set(30).display() << endl;

   return 0;
}