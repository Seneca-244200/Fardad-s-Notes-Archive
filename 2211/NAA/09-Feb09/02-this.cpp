#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A, B; // default constructor
   A.setName("The new name");
   A.print() << endl;

   B.setName("New name for B").print() << endl;

   A.setEmpty().setName("Yet another name for A").print() << endl;

   return 0;
}