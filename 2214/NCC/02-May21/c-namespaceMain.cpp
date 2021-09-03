#include "Student.h"
#include "OSAP.h"


int main() {
   struct sdds::Student sts[30];
   struct fin::Student stdLoan;
   int i;
   for (i = 0; i < 30; i++) {
      sts[i].getInfo();
   }
   // do what process is needed
   for (i = 0; i < 30; i++) {
      sts[i].print();
   }
   return 0;
}