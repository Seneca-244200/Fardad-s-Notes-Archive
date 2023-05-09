#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
int main() {
   int i;
   Student* S = new Student[3];
   for (i = 0; i < 3; i++) {
      S[i].set();
   }
   for (i = 0; i < 3; i++) {
      cout << (i + 1) << ": ";
      S[i].display();
   }
   delete[] S;
   return 0;
}