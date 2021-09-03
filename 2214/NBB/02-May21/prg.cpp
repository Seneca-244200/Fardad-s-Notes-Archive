#include "Student.h"
#include "OSAP.h"
#include "Student.h"
#include "Student.h"
#include "Student.h"
#include "Student.h"
using namespace sdds;
using namespace fin;
int main() {
   struct sdds::Student sts[30];
   struct fin::Student stdLoan;
   struct Loan L;
   struct Subject S;
   int i;
   for (i = 0; i < 30; i++) {
      sts[i].getInfo();
   }
    // some process
   for (i = 0; i < 30; i++) {
      sts[i].print();
   }

   return 0;
}