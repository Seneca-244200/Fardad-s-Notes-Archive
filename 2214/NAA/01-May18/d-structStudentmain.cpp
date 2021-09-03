#include <iostream>
#include "StructStudent.h"
using namespace std;


int main() {
   struct Student sts[30];
   getStInfo(&sts[0]);
   // do the process
   prnStudent(&sts[0]);
   return 0;
}