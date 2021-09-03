#include <iostream>
#include "Student.h"
using namespace std;


int main() {
   struct Student sts[30];
   sts[0].getInfo();
   // do process;
   sts[0].print();


   //getStInfo(&sts[0]);
   //// do the process
   //prnStudent(&sts[0]);
   return 0;
}