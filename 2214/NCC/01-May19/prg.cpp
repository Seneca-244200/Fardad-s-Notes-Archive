#include "Student.h"


int main() {
   struct Student sts[30];
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