#include <iostream>
#include "Student.h" 
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int* p;
   int i;
   p = &i;
   int& R = i;
   // *p and R and i are all references of i


   return 0;
}
