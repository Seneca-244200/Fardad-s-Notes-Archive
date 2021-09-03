#include <iostream>
#include "Student.h"
#include "OSAP.h"
using namespace std;
using namespace sdds;
using namespace fin;
int main() {
   struct sdds::Student sts[30];
   struct fin::Student stLoan;
   struct Loan L;
   struct Test T;
   sts[0].getInfo();
   // do process;
   sts[0].print();


   //getStInfo(&sts[0]);
   //// do the process
   //prnStudent(&sts[0]);
   return 0;
}